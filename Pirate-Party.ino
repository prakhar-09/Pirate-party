#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // sets the interfacing pins

void setup()
{
 lcd.begin(16, 2);  // initializes the 16x2 LCD


double pulse;

pinMode(10,INPUT);
pinMode(13,OUTPUT);
pinMode(8,OUTPUT);  
}

void loop()
{


  

   
  lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Aye Aye Hackers"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Treasure Finder");     // prints HELLO WORLD
  delay(5000);
  lcd.clear();





   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Click Start &"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("find hidden");     // prints HELLO WORLD
  delay(2000);
  lcd.clear();

double pulse;
digitalWrite(13,HIGH);
delayMicroseconds(5000);
digitalWrite(13,LOW); 
delayMicroseconds(100);
pulse = pulseIn(11,HIGH,5000);

   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("___TREASURES___"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("_____AYE-AYE_____");     // prints HELLO WORLD
  delay(3000);
  lcd.clear();

   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("--V--------V--V--"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("__-_Starting_-__");     // prints HELLO WORLD
  delay(500);
  lcd.clear();

   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("V--V----V----V--"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("__-_Starting_-__");     // prints HELLO WORLD
  delay(500);
  lcd.clear();

   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("----V------V-V--"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("__-_Starting_-__");     // prints HELLO WORLD
  delay(500);
  lcd.clear();

   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("V--V----V-----V-"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("__-_Starting_-__");     // prints HELLO WORLD
  delay(500);
  lcd.clear();

     lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("--V--------V--V--"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("__-_Starting_-__");     // 
  delay(500);
  lcd.clear();

   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("V--V----V----V--"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("__-_Starting_-__");     // 
  delay(500);
  lcd.clear();

   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("----V------V-V--"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("__-_Starting_-__");     // 
  delay(500);
  lcd.clear();

   lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("V--V----V-----V-"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("__-_Starting_-__");     // 
  delay(500);
  lcd.clear();
if(pulse < 920)
{
tone(8, 1);
delay(3000);
noTone(8);

  lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Move detector"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("No-Signal-Found");     // prints HELLO WORLD
  delay(1000);
  lcd.clear();

  lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Move detector"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("_Finding Signal_");     // prints HELLO WORLD__
  delay(500);
  lcd.clear();
}


if(pulse > 920 && pulse < 1080)
{
tone(8, 1);
delay(3000);
noTone(8);


  lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Move detector"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Sig Found - Low");     // 
  delay(3000);
  lcd.clear();
}

if(pulse > 1080 && pulse < 1200)
{
tone(8, 1);
delay(3000);
noTone(8);

    lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Move Slow"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Sig Found - Mid");     // 
  delay(3000);
  lcd.clear();
}
   if(pulse > 1200)
{
tone(8, 1);
delay(3000);
noTone(8);


      lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Stay still"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Sig Found - High");     // 
  delay(3000);
  lcd.clear();

}if(pulse > 1250)
{
tone(8, 1);
delay(3000);
noTone(8);

      lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("Stay still"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Tresure Found");     // 
  delay(3000);
  lcd.clear();


        lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("DIG-IN__v__v__v_"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Tresure Found");     // 
  delay(500);
  lcd.clear();

  
        lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("__DIG-IN__v__v__"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Tresure Found");     // 
  delay(500);
  lcd.clear();

  
        lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("_v__DIG-IN__v__v"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Tresure Found");     // 
  delay(500);
  lcd.clear();

  
        lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("v__v__DIG-IN__v_"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Tresure Found");     // 
  delay(500);
  lcd.clear();

  
        lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("__v__v__DIG-IN__"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Tresure Found");     //
  delay(500);
  lcd.clear();

  
        lcd.setCursor(0,0);           //sets the cursor at row 0 column 0
  lcd.print("_v__v__v__DIG-IN"); // prints 16x2 LCD MODULE
  lcd.setCursor(0,1);           //sets the cursor at row 1 column 2
  lcd.print("Tresure Found");     // 
  delay(500);
  lcd.clear();

}
  
}
