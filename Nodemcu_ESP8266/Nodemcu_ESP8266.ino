/*
Configurar Nodemcu ESP8266 en Arduino
https://www.youtube.com/watch?v=tCx9Byn36jw&list=PLw_hyusX2ghYbPmsGD_EsdVHKHHe57w8n

*/
const int D1 = 5;
const int D2 = 4;
const int D5 = 14;
int tiempo = 100;

void setup() {

  Serial.begin(9600);   //iniciamos la comunicacion serial con una tasa de 9600 bps (bits por segundo)
  pinMode(D1, OUTPUT);  //usamos el pin D1 LED VERDE
  pinMode(D2, OUTPUT);  //usamos el pin D2 LED AMARILLO
  pinMode(D5, OUTPUT);  //usamos el pin D5 LED ROJO
  
}

void loop() {

    Serial.println("encendemos el led Verde");
    digitalWrite(D1, HIGH);
    delay(tiempo);   //espera 1 segundo
    Serial.println("apagamos el led Verde");
    digitalWrite(D1, LOW);
    //delay(1000);   //espera 1 segundo
    Serial.println("encendemos el led Amarillo");
    digitalWrite(D2, HIGH);
    delay(tiempo);   //espera 1 segundo
    Serial.println("apagamos el Amarilo");
    digitalWrite(D2, LOW);
    //delay(1000);   //espera 1 segundo
    Serial.println("encendemos el Rojo");
    digitalWrite(D5, HIGH);
    delay(tiempo);   //espera 1 segundo
    Serial.println("apagamos el Rojo");
    digitalWrite(D5, LOW);
    //delay(1000);   //espera 1 segundo
    
    
}
