#include <LiquidCrystal.h>
LiquidCrystal lcd( 4, 6, 10, 11, 12, 13 );

void setup() {
     Serial.begin(9600) ; 
     lcd.begin( 16, 2 );
}

void loop() {
    lcd.clear();
    lcd.setCursor(0, 0);
  
     float tmp1,tmp2,ans;
     tmp1 = 0.0;
     tmp2 = 0.0;

     for (int i=0; i <= 4; i++){
        tmp1 = analogRead(0);
        tmp1 = tmp1 * 5 / 1024.0 *100;
        tmp2 = tmp2+ tmp1;
        delay(30);
     }

     ans = tmp2 /5;
     lcd.print(ans);
     delay(5000) ;              
tmp2 = 0;
}
