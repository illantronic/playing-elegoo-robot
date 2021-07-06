//www.elegoo.com
//2016.09.23
int ENA=5; 
int de1=6;
int de2=7;
int ENB=11; 
int iz1=8;
int iz2=9;
#include <Servo.h>
Servo myservo;
void setup()
{
  pinMode(de1,OUTPUT);
  pinMode(de2,OUTPUT);
  pinMode(iz1,OUTPUT);
  pinMode(de2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  digitalWrite(ENA,HIGH);  
  digitalWrite(ENB,HIGH);      
  myservo.attach(3);
}
void loop()
{
  myservo.write(90);
  digitalWrite(de1,HIGH);      
  digitalWrite(de2,LOW);         // las ruedas derechas van para alante
  digitalWrite(iz1,LOW);                                                        //el coche va para alante       
  digitalWrite(iz2,HIGH);         // las ruedas izquierdas van para alante
  delay(500);
  digitalWrite(de1,LOW);      
  digitalWrite(de2,LOW);         //ruedas derechas quietas
  digitalWrite(iz1,LOW);                                                          //el coche se queda quieto
  digitalWrite(iz2,LOW);         // ruedas izquierdas estan quietas
  delay(500);                                                                                                        //las ruedas van a la inversa, es decir si la derecha va para alante, esa sintaxis hace que la izquierda valla pa atras
  digitalWrite(de1,LOW);      
  digitalWrite(de2,HIGH);        //ruedas derechas van para atras
  digitalWrite(iz1,HIGH);                                                          //el coche va hacia atras
  digitalWrite(iz2,LOW);        // ruedas izquierdas van para atras
  delay(500);
  digitalWrite(de1,LOW);        //ruedas derechas quietas
  digitalWrite(de2,LOW);        
  digitalWrite(iz1,LOW);                                                          //el coche se queda quieto
  digitalWrite(iz2,LOW);        //ruedas izquierdas quietas
  delay(500);
}
