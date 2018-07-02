#include <LiquidCrystal.h>
LiquidCrystal lcd(4,6,10,11,12,13);
char s[16];
const int SensorPIN = A0;

void setup() {
     Serial.begin(9600) ;
     lcd.begin(16,2);
}

void loop() {
    float tmp1 = 0.0,tmp2 = 0.0,ans;

    lcd.clear();
    lcd.setCursor(0,0);

    //Calculate mean value of tempareture
     for (int i=0; i <= 4; i++){
        tmp1 = analogRead(SensorPIN);
        tmp1 = tmp1 * 5.0 / 1024.0 * 100; //convert to voltage
        tmp2 += tmp1;
        delay(30);
     }
    ans = tmp2 / 5.0;

    lcd.print("Temp:");
    lcd.print(ans);
    sprintf(s, "[%cC]", 0b11011111);
    lcd.print(s);
    delay(2500);
}
