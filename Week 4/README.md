# SMART BIN 

## Calculation for the angle that the servo motor rotates:
- Assuming that the speed of the motor is 60 rpm and 1 clock cycle for execution = 278 ns.
- First we will calculate how much time it takes the motor to rotate 1 degree.
- We know that 1 revolution = 360 degrees.
- Converting 60 rpm to degrees per min = 60 x 360 = 21600 degrees per minute.
- Time take to rotate 1 degree = 1 x 60 sec / (21600) = 0.00278 sec = 2.78 ms.
- I want the motor to rotate 100 degrees so, the time taken to rotate 100 degrees = 100 x 2.78 ms = 278 ms.
- Number of cycles it take to rotate 100 degrees = 278 ms / 278 ns = 100000 cycles to rotate 100 degrees.
- Put this value in the c code for the delay.
  
