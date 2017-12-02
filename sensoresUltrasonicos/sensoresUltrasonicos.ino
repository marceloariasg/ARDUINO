/*
sensor hc-sr04 con arduino
https://www.youtube.com/watch?v=IF1eN0WK3bU
*/


#define Pecho 6
#define Ptrig 7
long duracion, distancia;

void setup() {

  Serial.begin(9600);   //iniciamos la comunicacion serial con una tasa de 9600 bps (bits por segundo)
  pinMode(Pecho, INPUT);  //Define el pin 6 como entrada (echo) 
  pinMode(Ptrig, OUTPUT);  //Define el pin 7 como salida (triger)
  //pinMode(13,1);          //Define el pin 13 como salida (led)
  
}

void loop() {

  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;  //calcula la ditancia en centimetros

  if (distancia >= 500 || distancia <= 0 ) {  //si la distancia es mayor a 500cm o menor a 0cm no mide nada
      Serial.println("---");
    }
   else {
      Serial.print(distancia);
      Serial.println("cm");
      digitalWrite(13,0);
    }

  if (distancia <= 10 && distancia >= 1 ) {  //en alto el led se la ditancia es menor a 10 y mayor igual a 1 
      Serial.println("---");
      digitalWrite(13,1);
      Serial.println("Alarma......");      
    }
    delay(400);   //espera 4 segundos para que se logre ver la distancia

}
