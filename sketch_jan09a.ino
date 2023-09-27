#include <ros.h>
#include <std_msgs/String.h>

ros::NodeHandle nh;


void messageCb(std_msgs::String & str_msg){

  if(strcmp(str_msg.data, "yellow on")==0){
    analogWrite(3, 120);
  }
  if(strcmp(str_msg.data, "yellow off")==0){
    analogWrite(3, 0);
  }
  if(analogRead(3)!=0){
    if(strcmp(str_msg.data, "higher")==0){
      analogWrite(3, 255);
    }
    else{
      if(strcmp(str_msg.data, "lower")==0){
        analogWrite(3, 60);
      }
    }
  }
}


ros::Subscriber<std_msgs::String> sub("chatter", &messageCb);

void setup(){

    pinMode(3, OUTPUT);
    nh.initNode();
    nh.subscribe(sub);

}



void loop(){

    nh.spinOnce();
    delay(1);

}
