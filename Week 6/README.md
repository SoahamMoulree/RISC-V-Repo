# CONFIGURE THE GPIO PINS ACCORDING TO YOUR SPECIFICATIONS

- Change the input and output pins according to the applications:

#### IN THE PROCESSOR.V FILE

- Change the input and output pins according to you specification(I had 2 input pins and 3 output pins for my specification).


 ![image](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/c86d2cf6-427d-4b15-9a98-e3e200ce63b6)

![image](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/03218e67-6b9d-414b-80b8-157847e4738d)
  
- Make similar changes for the testbench and also specify the input bits : input wires = 2'b11 (This means providing an input of 1 to both input pins.)

![image](https://github.com/SoahamMoulree/RISC-V-Repo/assets/169994191/0bef1902-6e93-41d6-9053-eeb92d0e0c3f)

- Also bypass the UART protocol to Protocol to reduce the time required for GTKWave simulations.

  
