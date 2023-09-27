#!/usr/bin/env python3

import rospy
from std_msgs.msg import String

import speech_recognition as sr


def talker():
    pub=rospy.Publisher('chatter', String, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate=rospy.Rate(1) #1hz

    rospy.loginfo("Talker node started...")

    while not rospy.is_shutdown():
        r=sr.Recognizer()
        with sr.Microphone() as source:
            print("Say something") # Write a message for the user and then wait for the spoken message
            audio=r.listen(source) # Listen to the microphone
            try:
                text = r.recognize_google(audio)
            except sr.UnknownValueError as e:
                text=str(e)

        message="%s" % text
        pub.publish(message) # Publish the understood message
        rate.sleep()

if __name__=='__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass