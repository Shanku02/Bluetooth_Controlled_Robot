# Bluetooth_Controlled_Robot 

Welcome to the Bluetooth Controlled Robot repository! This project showcases a versatile robot that can be remotely controlled using Bluetooth technology. This repository includes all necessary code, schematics, and documentation to help you build and customize your own Bluetooth-controlled robot. 

Features: 
  1. Bluetooth Connectivity: Control the robot using a Bluetooth-enabled smartphone 
  2. Easy to Assemble: Simple hardware setup with detailed instructions and schematics.
  3. Customizable Code: Arduino-based firmware that is easy to modify and extend.
  4. Versatile Movement: Supports various movement commands, including forward, backward, left, right, and stop.
  5. Interactive Control: Real-time control via a dedicated mobile app.

Hardware Requirements: 
  1. Microcontroller: Arduino Uno/Nano.
  2. Bluetooth Module: HC-05 Bluetooth module.
  3. Motor Driver: L293D or similar motor driver module.
  4. Geared DC Motors - 2
  5. Chassis: Robot chassis  with wheels - 2.
  6. Power Supply: Battery pack suitable for the motors and microcontroller.
  7. Miscellaneous: Jumper wires, breadboard, and other basic electronic components.

Software Requirements:
Arduino IDE: For programming the Arduino microcontroller.
Bluetooth Terminal App: For controlling the robot from a mobile device. For example: "Arduino Bluetooth Control" for Android and "LightBlue" for iOS.


# Getting Started
  1. Clone the Repository:  https://github.com/Shanku02/Bluetooth_Controlled_Robot.git
  2. Hardware Setup: Follow the provided schematics to connect the Bluetooth module, motor driver, and other components to the Arduino.
  3. Upload the Code: Open the Arduino IDE, load the provided .ino file, and upload it to your Arduino board.
  4. Pair Bluetooth Device: Pair your Bluetooth-enabled device with the HC-05/HC-06 module.
  5. Upload the Bluetooth_check.ino code to check the working of the bluetooth and when successful upload the Bluetooth_Controlled_bot.ino code.
  6. Control the Robot: Use a Bluetooth terminal app to send movement commands to the robot.

Commands
  1. Forward: Press F / ^
  2. Backward: Press B / ⌄
  3. Left: Press L / <
  4. Right: Press R / >
  5. Stop: Press S / □

Customization:
The Arduino code can be easily customized to add new features or modify existing ones. Feel free to experiment with different sensors, actuators, or control algorithms to enhance your robot.
