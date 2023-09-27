# Speech_Recognition

For SpeechRecognition:\
    sudo apt-get update\
    sudo add-apt-repository universe\
    sudo add-apt-repository multiverse\
    sudo add-apt-repository restricted\
    sudo apt-get install libasound-dev\
    sudo apt-get install build-essential\
    sudo apt install python-pip\
    sudo apt install python3-pip\
    sudo apt-get install portaudio19-dev python-pyaudio python3-pyaudio\
    pip install SpeechRecognition\
    pip3 install SpeechRecognition\


For ROS Melodic:\
    sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'\
    sudo apt install curl\
    curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -\
    sudo apt update\
    sudo apt install ros-melodic-desktop-full\
    echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc\
    source ~/.bashrc\
    sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential\
    sudo apt install python-rosdep\
    sudo rosdep init\
    roscore\
    sudo apt install build-essential python-catkin-tools python-rosdep\
    mkdir -p ~/catkin_ws/src\
    cd ~/catkin_ws\
    catkin init\
    catkin config --extend /opt/ros/melodic\
    cd ~/catkin_ws/src\
    catkin_create_pkg mmi_package rospy roscpp\
    mkdir -p ~/catkin_ws/src/mmi_package/launch\
    mkdir -p ~/catkin_ws/src/mmi_package/scripts\


To use python3 with ROS Melodic:\
    sudo apt install python3-pip python3-all-dev python3-rospkg\
    sudo apt install ros-melodic-desktop-full --fix-missing\


After the creation of the mynode.py file in scripts folder (test):\
    sudo chmod +x mynode.py\
    cd ~/catkin_ws\
    catkin build\
    source ~/catkin_ws/devel/setup.bash\
    rosrun mmi_package mynode.py\
To check what is published: rostopic echo /chatter\


Connection with Arduino:\
    sudo snap install arduino\
    sudo usermod -a -G dialout myuser\
Add rosserial library 0.7.9 version\
    rosrun rosserial_python serial_node.py /dev/ttyACM0 (port)\

