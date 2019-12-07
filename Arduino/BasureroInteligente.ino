

/*
ULTRASONICO 1 (APERTURA DEL BASURERO) =  PIN VERDE = GND
                                         PIN NEGRO ( AL LADO DE VERDE ) = ECHO (11)
                                         PIN NEGRO ( AL LADO DE ROJO ) = TRIG (7)
                                         PIN ROJO = VCC
                                          
ULTRASONICO 2 (BASURERO LLENO O VACIO) = PIN AZUL = VCC                                         
                                         PIN AMARILLO = TRIG2 (9)
                                         PIN CAFÉ = ECHO2 (10)
                                         PIN VERDE = GND

PANTALLA LCD = PIN VERDE = GND                                          
               PIN NARANJA = VCC
               PIN ROJO DEL COSTADO = ANALOGO 5
               PIN ROJO DEL MEDIO = ANALOGO 4

*/

#include <Servo.h>
#include <Wire.h>                                                            
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo servo;
long tiempo;
int distancia;
int distancia2;
int triger = 7;   // triger, disparador
int echo = 11;      // echo, entrada
int triger2 = 9;
int echo2 = 10;
int buzzer = 6;

void setup(){
  servo.attach(5, 500, 1600); 
  lcd.init();
  lcd.backlight();
  pinMode(triger2, OUTPUT);
  pinMode(echo2, INPUT); 
  pinMode(triger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(6 , OUTPUT);
  Serial.begin(9600);
}

void loop(){
 digitalWrite(triger2, HIGH);
  delayMicroseconds(10);
 digitalWrite(triger2, LOW);
 tiempo = (pulseIn(echo2, HIGH)/2);  
 distancia2 = int(tiempo * 0.0343);
 Serial.print("Distancia de Sensor 2: ");
 Serial.print(distancia2);
 Serial.println(" cm");
 digitalWrite(triger, HIGH);
  delayMicroseconds(10);
 digitalWrite(triger, LOW);
 tiempo = (pulseIn(echo, HIGH)/2);  
 distancia = int(tiempo * 0.0343);
 Serial.print("Distancia de Sensor 1: ");
 Serial.print(distancia);
 Serial.println(" cm");
  delay(350);

if( distancia >= 7){
 servo.write(90);
 delay(10);
}else{
 servo.write(0);
  delay(2000);
}
if(distancia2 <= 5){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" ");
    lcd.print("BASURERO LLENO");
    lcd.print(" ");
    lcd.setCursor(0,1);
    lcd.print("   -");
    lcd.print("NO ABRIR");
    lcd.print("-   ");
     digitalWrite(buzzer, HIGH);
 }else{
    digitalWrite(buzzer, LOW);
    lcd.setCursor(0,0);             
    lcd.print("    ");
    lcd.print("BASURERO");
    lcd.print("    ");
    lcd.setCursor(0,1);
    lcd.print("  -");
    lcd.print("DISPONIBLE");
    lcd.print("-  ");
 }
 }
 
