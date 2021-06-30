#include <Servo.h>
Servo myservo;
void setup(){
  myservo.attach(3);
} 
void loop(){
  myservo.write(10);
  //para que vaya a 10 grados y como es la primera vez que se mueve pues es donde empieza
  delay(1000);
  int y=90;
  for(int i=10,  j=180; i<=180; i+=20 ){
    
    
    myservo.write(i);
    delay(500);
    myservo.write(i+10);
    delay(350);
    myservo.write(i+20);
    delay(500);
    myservo.write(j);
    delay(500);
    //myservo.write(y);
    //delay(500);
  }
  delay(2000);
  //para que espere
}
