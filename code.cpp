// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop(){
  if(digitalRead(2)==HIGH&&digitalRead(3)==HIGH&&digitalRead(4)==HIGH){
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
  }else if(digitalRead(2)==HIGH&&digitalRead(3)==HIGH){
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }else if(digitalRead(3)==HIGH&&digitalRead(4)==HIGH){
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
  }else if(digitalRead(2)==HIGH&&digitalRead(4)==HIGH){
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }else if(digitalRead(3)==HIGH){
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
  }else if(digitalRead(2)==HIGH){
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }else if(digitalRead(4)==HIGH){
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
  }else{
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
}