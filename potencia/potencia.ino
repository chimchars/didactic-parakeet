#include <Servo.h>

//entrada de interruptores deslizables determina la potencia
#define pinSwitch1 13
#define pinSwitch2 12
#define pinSwitch3 11
#define pinSwitch4 10
#define pinSwitch5 9
#define pinSwitch6 8
#define pinSwitch7 7
#define pinSwitch8 6
//motor AC (frec 60Hz)
Servo myServo;
const byte pinServo = 5;
//switch paro
#define switchParo 4
//switch inicio de ciclo
#define switchInicioCiclo 3
//pin de salida
#define pinSalida 2 

byte potencia = 0;

void setup() {
  //pin del servo:
  myServo.attach(pinServo);
  //los 8 switches:
  pinMode(pinSwitch1, INPUT); //pot 0%
  pinMode(pinSwitch2, INPUT); //pot 10%
  pinMode(pinSwitch3, INPUT); //pot 25%
  pinMode(pinSwitch4, INPUT); //pot 40%
  pinMode(pinSwitch5, INPUT); //pot 50%
  pinMode(pinSwitch6, INPUT); //pot 65%
  pinMode(pinSwitch7, INPUT); //pot 80%
  pinMode(pinSwitch8, INPUT); //pot 90%
  //definimos interruptor de paro de emergencia
  pinMode(switchParo, INPUT); 
  //input pin microcontrolador para leer inicio de cada ciclo
  pinMode(switchInicioCiclo, INPUT);
  //salida de pin digital sincronizado con la entrada
  pinmode(pinSalida, OUTPUT);
  analogWrite(pinSalida, potencia);

}

//cambio de potencia es cada 10 ciclos
//inicio cada ciclo: pin microcontrolador
void loop() {
  // put your main code here, to run repeatedly:

}
