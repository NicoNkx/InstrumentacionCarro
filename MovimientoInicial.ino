#include <Wire.h>
#include <MPU6050.h>
#include <I2Cdev.h>


// configuracion de motores
// motor derecho 
const int pwmA = 33;
const int Ain1 = 1;
const int Ain2 = 3;
// motor izquierdo
const int pwmB = 25;
const int Bin1 = 17;
const int Bin2 = 16;
// controlador
const int stby = 18;


void setup() {
  pinMode(pwmA, OUTPUT);
  pinMode(pwmB, OUTPUT);
  pinMode(Ain1, OUTPUT);
  pinMode(Ain2, OUTPUT);
  pinMode(Bin1, OUTPUT);
  pinMode(Bin2, OUTPUT);
  pinMode(stby, OUTPUT);
  // encender el controlador 
  digitalWrite(stby, 1);
}

void loop() {
  adelante();
  digitalWrite(pwmA, 200);
  digitalWrite(pwmB, 200);
  delay(3000);
  atras();
  digitalWrite(pwmA, 255);
  digitalWrite(pwmB, 255);
  delay(3000);
  stop();
  digitalWrite(pwmA, 0);
  digitalWrite(pwmB, 0);
  delay(200);

}
void adelante(){

  digitalWrite(Ain1, 1);
  digitalWrite(Ain2, 0);
  digitalWrite(Bin1, 1);
  digitalWrite(Bin2, 0);
  
}
void atras(){

  digitalWrite(Ain1, 0);
  digitalWrite(Ain2, 1);
  digitalWrite(Bin1, 0);
  digitalWrite(Bin2, 1);
  
}
void stop(){

  digitalWrite(Ain1, 0);
  digitalWrite(Ain2, 0);
  digitalWrite(Bin1, 0);
  digitalWrite(Bin2, 0);
  
}