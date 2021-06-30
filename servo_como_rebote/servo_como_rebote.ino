#include <Servo.h>
Servo myservo;
void setup(){
  myservo.attach(3);
} 
void loop(){
  myservo.write(10);
  //para que vaya a 10 grados y como es la primera vez que se mueve pues es donde empieza
  delay(1000);
  //para que espere 
  for(int i=10, j=180, k=400; i<=90; i+=10, j-=10, k-=40){
    //hacemos que i sean 10 grados para que mire a la derecha, que j sea 180 grados para que muire a la izquierda,, i aumente 10, j disminuya 10, y que haga efecto de rebote, k(tiempo de espera entre cambio de lugar)es 400(numero que hace que se cordine bien) y vaya 
    //disminuyendo segun se va acercando a 90 grados y asi da mayor sensacion de que tiene un mueye, disminuye de 40 en 40 porque coincide bien con el numerode rebotes teniendo en cuenta que empieza en 400.
    
    myservo.write(i);
    //hacemos que vaya a i
    delay(k);
    //hacemos que espere k(tiempo espera)
    myservo.write(j);
    //hacemos que vaya a j
    delay(k);
    //hacemos que espere k (tiempo espera)
  }
  delay(2000);
  //para que espere
}
