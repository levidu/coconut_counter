//make sure you include liquidCrystal library
#include <LiquidCrystal.h>

int button = 8;
const int led_built = 13;

long counter = 0L;

//Initialize the pins to establish connection (comprehensive version - go down)
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {


//set input and output
  pinMode(button,INPUT); 
  pinMode(led_built, OUTPUT);
  
  analogWrite(6,20);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

 


}

void loop() {
  

  if(digitalRead(button) == HIGH) {

    digitalWrite(led_built,HIGH);
    counter++;

    //For now set a delay because you are using a button as an input.
    delay(1000);
    }
    else {
     
      digitalWrite(led_built,LOW);
      }

  lcd.setCursor(0,0); 
  lcd.print("Coconut Counter");

  lcd.setCursor(0,1);
  lcd.print(String(counter));

}



/**
 * LCD Config
 * LCD Type:  LCD1602 Display
 * 
 * PIN 1 -> GND
 * PIN 2 -> 5V
 * PIN 3 -> ~6 (if you want to add a potentiometer to control the brightness = PIN 3 -> connect to the middle of the potentiometer)
 * PIN 4 -> 12
 * PIN 5 -> GND
 * PIN 6 -> ~11
 * PIN 7 -> 
 * PIN 8 -> 
 * PIN 9 ->
 * PIN 10 ->
 * PIN 11 -> ~5
 * PIN 12 -> 4
 * PIN 13 -> ~3
 * PIN 14 -> 2
 * PIN 15 -> 5V
 * PIN 16 -> GND
 */

 
