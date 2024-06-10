# ASSIGNMENT 4

## Trying other C code with Risc-V compiler:

#### FACTORIAL
- To get the spike output use the following commands as shown in the screenshot

![WhatsApp Image 2024-05-30 at 14 24 08_7fc5851d](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/d5214350-e8fb-4dee-9bc2-a89eb8bb5dfb)

- To generate the assembly code use the following commands as shown in the screenshot and a assembly file will be generated in the directory where you execute the commands.

![WhatsApp Image 2024-05-30 at 14 10 52_9b655f4e](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/af2aee31-5dcc-42b7-9daa-67601f500a20)

## Architecture of IoT application

#### ARCHITECTURE FOR A SMART DUSTBIN

- IR sensor - 1 detects the garbage incoming and opens the lid of the bin using a servo motor.
- The second IR sensor is placed inside the bin which is used to detect if the dustbin is full and rings a buzzer. 

![image](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/72722780-27e8-45cf-a7f6-b0ea83c9eb84)

## I/O MAPPING ACCORDING TO APPLICATION

#### x30 REGISTER

x30[0] --> data read from Infrared Sensor - 1 used as input.

x30[1] -->  data read from Infrared Sensor - 2 used as input.

x30[2] and x30[3] --> output to Servo Motor (To open and close the lid of the dustbin).

x30[4] --> output to Buzzer (To indicate the bin is full).







