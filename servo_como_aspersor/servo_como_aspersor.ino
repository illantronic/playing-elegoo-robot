#include <Servo.h>
Servo myservo;
void setup(){
  myservo.attach(3);
} 
void loop(){
  myservo.write(10);
  delay(1000);
  for(int i=10; i<=180; i+=10){
    myservo.write(i);
    delay(100);
  }
  delay(2000);
}
