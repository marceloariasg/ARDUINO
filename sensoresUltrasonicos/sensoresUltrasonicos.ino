/*
Servomotores
Notas:
el servo deja inhabilitado los pines digitales 9 y 10

https://www.youtube.com/watch?v=LXr_NLrjmmk
*/

#include <Servo.h>

Servo miServo;

const int pinServo = 2;
const int pulsoMin = 650; //pyulso en us para girar el servo a 0 grados
const int pulsoMax = 2550; //pyulso en us para girar el servo a 180 grados
int angulo;  

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);   //iniciamos la comunicacion serial con una tasa de 9600 bps (bits por segundo)
  miServo.attach(pinServo, pulsoMin, pulsoMax);
  //las entradas analñogicas se configuran automaticamente
}

void loop() {
  // put your main code here, to run repeatedly:

  miServo.write(0);
  delay(500);
  miServo.write(45);
  delay(500);
  miServo.write(90);
  delay(500);
   
   /*
    for (brillo = 0; brillo < 256 ; brillo++){
      analogWrite(led, brillo);
      Serial.print("brillo: ");
      Serial.println(brillo);  
      delay(10);
    }

    for (brillo = 256; brillo >= 0 ; brillo--){
      analogWrite(led, brillo);
      Serial.print("brillo: ");
      Serial.println(brillo);  
      delay(10);
    }
*/

}
