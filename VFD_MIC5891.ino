/*
 hex table for prndl
 0xc2 = prnd123 on (both grids)
 0x90 = (P underlined)
 0x88 = (R underlined)
 0x84 = (n underlined)
 0X60 = (D underlined)
 0x50 = (1
 
 
 */

#define MIC_S        5
#define MIC_C        7
#define MIC_D        6
#define BTN        2



void setup() {
 pinMode(MIC_S, OUTPUT);
 pinMode(MIC_C, OUTPUT);
 pinMode(MIC_D, OUTPUT);
 pinMode(BTN, INPUT);

}

void screen(int value){
  digitalWrite(MIC_S, LOW);
  for (int i = 0; i <= 7; i++) {
   digitalWrite(MIC_D, bitRead(value, i));
   digitalWrite(MIC_C, HIGH);
   digitalWrite(MIC_C, LOW);
  }
  digitalWrite(MIC_S, HIGH);     
}

void pollbttn(){
 if (digitalRead(BTN) == HIGH){
    screen(0xC2);
    delay(650);
    }
 }
   
void loop() {
  long starttime = millis();
  long endtime = starttime;
  while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x90);
    delay(7);
     pollbttn();
    endtime = millis();
   }
  starttime = millis();
  endtime = starttime;
    while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x88);
    delay(7);
     pollbttn();
    endtime = millis();
  }
 starttime = millis();
  endtime = starttime;
    while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x84);
    delay(7);
     pollbttn();
    endtime = millis();
  }
 starttime = millis();
  endtime = starttime;
    while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x60);
    delay(7);
     pollbttn();
    endtime = millis();
  }
 starttime = millis();
  endtime = starttime;
    while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x50);
    delay(7);
     pollbttn();
    endtime = millis();
  }
 starttime = millis();
  endtime = starttime;
    while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x48);
    delay(7);
     pollbttn();
    endtime = millis();
  }
 starttime = millis();
  endtime = starttime;
    while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x44);
    delay(7);
     pollbttn();
    endtime = millis();
  }
 starttime = millis();
  endtime = starttime;
 while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x48);
    delay(7);
     pollbttn();
    endtime = millis();
   }
  starttime = millis();
  endtime = starttime;
    while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x50);
    delay(7);
     pollbttn();
    endtime = millis();
  }
 starttime = millis();
  endtime = starttime;
    while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x60);
    delay(7);
     pollbttn();
    endtime = millis();
  }
 starttime = millis();
  endtime = starttime;
    while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x84);
    delay(7);
     pollbttn();
    endtime = millis();
  }
 starttime = millis();
  endtime = starttime;
    while ((endtime - starttime) <=200) 
    {
    screen(0xC2);
    delay(7);
    screen(0x88);
    delay(7);
     pollbttn();
    endtime = millis();
  }
}
