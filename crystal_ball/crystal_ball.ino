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
    reply = random(8);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("The ball says: ");
    lcd.setCursor(0, 1);
    switch(reply){
      case 0:
      lcd.print("It is certain.");
      break;
      case 1:
      lcd.print("It is decidedly so.");
      break;
      case 2:
      lcd.print("Without a doubt.");
      break;
      case 3:
      lcd.print("Yes - definitely.");
      break;
      case 4:
      lcd.print("You may rely on it.");
      break;
      case 5:
      lcd.print("As I see it, yes.");
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
      lcd.print("Signs point to yes.");
      break;
      case 10:
      lcd.print("Reply hazy, try again.");
      break;
      case 11:
      lcd.print("Ask again later.");
      break;
      case 12:
      lcd.print("Better not tell you now.");
      break;
      case 13:
      lcd.print("Cannot predict now.");
      break;
      case 14:
      lcd.print("Concentrate and ask again.");
      break;
      case 15:
      lcd.print("Don't count on it.");
      break;
      case 16:
      lcd.print("My reply is no.");
      break;
      case 17:
      lcd.print("My sources say no.");
      break;
      case 18:
      lcd.print("Outlook not so good.");
      break;
      case 19:
      lcd.print("Very doubtful.");
      break;
    }
  }
  prevSwitchState = switchState;
}
