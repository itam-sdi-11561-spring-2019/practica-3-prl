#include <SoftwareSerial.h>

SoftwareSerial xb(10, 11);

void setup() {
  xb.begin(9600);
  Serial.begin(9600);
  Serial.println("SERIAL ACTIVE");

  //LEDS
  pinMode(2,OUTPUT):
  pinMode(3,OUTPUT):
  pinMode(4,OUTPUT):

}

void loop() {
  if(xb.available()){
  char temp = xb.read();
  Serial.print("READ: ");
  Serial.println(temp);
  if(temp == 'a'){
    digitalWrite(2,HIGH);
  }
   if(temp == 'b'){
    digitalWrite(3,HIGH);
  }
   if(temp == 'c'){
    digitalWrite(4,HIGH);
  }
  delay(3000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  }



}
