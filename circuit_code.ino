int greenLed = 13;
int yellowLed = 12;
int blueLed = 8;

int greenButton = 2;
int yellowButton = 4;
int blueButton = 7;

void setup() {
  pinMode(greenButton, INPUT);
  pinMode(yellowButton, INPUT);
  pinMode(blueButton, INPUT);
  
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
}


void loop() {
  if (digitalRead(greenButton) == 1) {
      digitalWrite(greenLed, HIGH);   
    
  }else if (digitalRead(yellowButton) == 1) {
      digitalWrite(yellowLed, HIGH);   
    
  }else if (digitalRead(blueButton) == 1) {
      digitalWrite(blueLed, HIGH); 
    
  }else {
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(blueLed, LOW);
  }
  delay(1);
  
  

  
}