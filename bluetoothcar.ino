

#define IN1 5   // Left motor direction
#define IN2 6   // right motor 

int command;  //  Bluetooth command

void setup() {
  // Motor pins
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN1,HIGH);
    Serial.begin(9600); 
}


void loop() {
  if (Serial.available() > 0) {
    command = Serial.read(); //  command from Bluetooth app

    switch (command) {
      case 'F': forward(); break;   
      case 'L': leftTurn(); break;  
      case 'R': rightTurn(); break; 
      case 'S': stopMotors(); break;
    }
  }
  
}

// ------------ MOTOR FUNCTIONS ------------
void forward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}

void backward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
}

void leftTurn() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}

void rightTurn() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
}

void stopMotors() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
}

