#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup () {
  // initialize serial communication at 9600 bits per second:
  Serial.begin (9600);}
void loop() {
  // read the input on analog pin 0:
  int value = analogRead(A0);
  lcd.setCursor(0, 7);
  if (value > 420) {
    Serial.println("UWAGA! it's REALLY wet...");
    lcd.print("Very heavy rain");}
  else if ((value > 300) && (value <= 400)) {
    Serial.println("Caution: it's wet...");
//lcd.print("Average Rain");
//lcd.print("       "); 
}
  else{
    Serial.println("Don't worry it's not dry ;)");
// lcd.print("Dry Wather");
 //   lcd.print("          ");
 }
  delay(200);}

