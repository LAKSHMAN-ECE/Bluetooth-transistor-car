# Bluetooth-transistor-car
Bluetooth-controlled Arduino car using two transistors to drive left and right motors. Supports basic movement commands through HC-05.<br>
**Components Required**<br>
Arduino Uno <br>
HC-05 / HC-06 Bluetooth Module <br>
2× NPN Transistors <br>
2× DC Motors (Left Motor + Right Motor)<br>
External Battery <br>
Car Chassis <br>
Two 1kΩ Resistors <br>
Jumper Wires<br>
**Connections** <br>
**Bluetooth module**
HC-05 Bluetooth Module
HC-05 VCC → Arduino 5V  
HC-05 GND → Arduino GND  
HC-05 TXD → Arduino RX (pin 0)  
HC-05 RXD → Arduino TX (pin 1) 

**Left Motor (Controlled by IN1)**                                                 
Battery + (positive)  → Left Motor +  
Left Motor –          → Collector of Transistor 1  
Transistor 1 Emitter  → Arduino GND  
Arduino D5 (IN1)      → 1kΩ resistor → Base of Transistor 1

**Right Motor (Controlled by IN2)**
Battery + (positive)  → Right Motor +  
Right Motor –         → Collector of Transistor 2  
Transistor 2 Emitter  → Arduino GND  
Arduino D6 (IN2)      → 1kΩ resistor → Base of Transistor 2
