# Bluetooth-transistor-car
Bluetooth-controlled Arduino car using two transistors to drive left and right motors. Supports basic movement commands through HC-05.

Components required 
 -Arduino Uno mini 
 -HC-05 / HC-06 Bluetooth module  
 -2x NPN transistors (BC547 / 2N2222 / TIP122)  
- 2x Motors (Left and Right)  
- External battery (6V–9V recommended)   
- Car chassis
  
  Connections
 HC-05 BLUETOOTH MODULE
HC-05 VCC → Arduino 5V
HC-05 GND → Arduino GND
HC-05 TXD → Arduino RX (pin 0)
HC-05 RXD → Arduino TX (pin 1)

    LEFT MOTOR
Battery + (positive)  ----- Left Motor +  
Left Motor –          ----- Collector of Transistor 1  
Emitter of Transistor 1 ---- Arduino GND  
Arduino Pin IN1 (D5)  ----- 1k resistor ----- Base of Transistor 1

   RIGHT MOTOR
Battery + (positive)  ----- Right Motor +  
Right Motor –         ----- Collector of Transistor 2  
Emitter of Transistor 2 ---- Arduino GND  
Arduino Pin IN2 (D6)  ----- 1k resistor ----- Base of Transistor 2

Arduino GND  --------- Battery negative (–)
