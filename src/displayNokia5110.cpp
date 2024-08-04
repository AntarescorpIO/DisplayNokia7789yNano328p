#include <Arduino.h>
#include <Nokia5110.h>
#include <SoftwareSerial.h>

#define rst 8
#define CE 7
#define DC 6
#define DIn 5
#define CLK 4
#define BL 3
// LCD object
Nokia5110 lcd;

void setup() {
  //
  // Initialize LCD with your custom pin configurations
  // initLCD(CLK,DIN,DC,CE,RST)
  // CLK needs to be PWM enabled
  //
  lcd.initLCD(CLK,DIn,DC,CE,rst);
  
 
  // como debe de ser aqui es donde mandamos saludos al
  // follows:
  //Ingeniero Pacheco Mendoza
  //Blanco Godinez 
  //Gregorio Zamsa
  pinMode(BL,OUTPUT);
 digitalWrite(BL,HIGH);
  lcd.LcdXY(0,0);
  lcd.LcdWriteString("Nokia 5110");
  lcd.LcdXY(0,1);
  lcd.LcdWriteString("Display");
  lcd.LcdXY(0,2);
  lcd.LcdWriteString("de Iztapalapa");
  lcd.LcdXY(0,3);
  lcd.LcdWriteString("para Olimpicos");
  lcd.LcdXY(0,4);
  lcd.LcdWriteString("Francia 2024");

  // Camara no sean culos queremos Likes
  delay(30000);
  lcd.clearLCD();
}

void loop() {
  
}