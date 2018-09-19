int buttonPin = 10  ;
int iPins[8] = {
    13,12,14,27,26,25,33,32};
int buttonState = 0;  
int counter = 0;

void setup() {
    Serial.begin(9600);
   for(int i=0;i<8;i++){  
     pinMode(iPins[i],OUTPUT);
     pinMode(buttonPin, INPUT);
     digitalWrite(iPins[i],LOW);
  }

}

void loop() {
   buttonState = digitalRead(buttonPin);
       Serial.println(buttonState);
     if(buttonState == LOW){
        counter++;
      for(int i=0;i<counter;i++){
        digitalWrite(iPins[i],HIGH);
        delay(100);
     }
  }
}

