#include <Wire.h>

int pin1=30;
int pin2=31;

int estado=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  pinMode(pin1,INPUT);
  pinMode(pin2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    estado = 0;
   Wire.beginTransmission(25);
   if(digitalRead(pin1) == HIGH){
    estado++;
    estado = estado*2;
   }
   if(digitalRead(pin2) == HIGH){
    estado++;
   }
   Wire.write(estado);
   Wire.endTransmission(44);
   Serial.println(estado);    
   
  
}
