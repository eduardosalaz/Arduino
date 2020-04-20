#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(switchPin, INPUT);
  lcd.print("Preguntale a");
  lcd.setCursor(0, 1);
  lcd.print("La caracola!");
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState)
  {
    if (switchState == LOW)
    {
      reply = random(8);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("La caracola dice: ");
      lcd.setCursor(0, 1);

      switch(reply)
      {
        case 0: 
        lcd.print("Si");
        break;

        case 1:
        lcd.print("Muy probable");
        break;

        case 2:
        lcd.print("Seguramente");
        break;
        
        case 3:
        lcd.print("Favorable");
        break;

        case 4:
        lcd.print("Quizas no");
        break;

        case 5:
        lcd.print("Otra pregunta");
        break;

        case 6:
        lcd.print("Poco probable");
        break;

        case 7:
        lcd.print("No");
        break;
      }
      
    }
  }
  prevSwitchState = switchState;
}
