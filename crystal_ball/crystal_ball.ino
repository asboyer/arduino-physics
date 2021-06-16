#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;


void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Eric and Boyer's crystal ball!");
  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Crystal Ball!");
}

void loop() {
  switchState = digitalRead(switchPin);
  if(switchState != prevSwitchState && switchState == LOW){
    reply = random(17);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("The ball says: ");
    lcd.setCursor(0, 1);
    switch(reply){
      case 0:
      lcd.print("It is certain.");
      break;
      case 1:
      lcd.print("For sure");
      break;
      case 2:
      lcd.print("No doubt.");
      break;
      case 3:
      lcd.print("Definitely.");
      break;
      case 4:
      lcd.print("Perhaps.");
      break;
      case 5:
      lcd.print("Maybe.");
      break;
      case 6:
      lcd.print("Most likely.");
      break;
      case 7:
      lcd.print("Outlook good.");
      break;
      case 8:
      lcd.print("Yes.");
      break;
      case 9:
      lcd.print("Probably");
      break;
      case 10:
      lcd.print("Not sure");
      break;
      case 11:
      lcd.print("Try again.");
      break;
      case 12:
      lcd.print("Can't tell");
      break;
      case 13:
      lcd.print("Unpredictable.");
      break;
      case 14:
      lcd.print("Ask again.");
      break;
      case 15:
      lcd.print("Probably not.");
      break;
      case 16:
      lcd.print("No.");
      break;
    }
  }
  prevSwitchState = switchState;
}
