float tempC;
int pinLM35 = 0;

 
void setup() {
  analogReference(INTERNAL);
  Serial.begin(9600);
  
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
 
void loop() {
  tempC = analogRead(pinLM35); 
  tempC = (1.1 * tempC * 100.0)/1024.0; 

  if(tempC > 10){
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
  } else {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
  }
 
  Serial.print(tempC);
  
  delay(1000);
}
