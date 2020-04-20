void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  int switchState = 0;
  switchState = digitalRead(2);
  if(switchState == LOW){
    
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    
  }else{
    
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(2000);

    for(i = 0; i < 5; i++){
      digitalWrite(5, HIGH);
      delay(200);
      digitalWrite(5, LOW);
      delay(200);
    }
    
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(1000);
    
    for(i = 0; i < 5; i++){
      digitalWrite(4, HIGH);
      delay(200);
      digitalWrite(4, LOW);
      delay(200);
    }
    
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(2000);
  }

}
