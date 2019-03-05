const byte LEDs[]={20,10,11,12,13,14,15,16,17};
const byte total =sizeof(LEDs);
byte index =1;
void setup() {
  for(byte i=0;i<total;i++){
    pinMode(LEDs[i],OUTPUT);
  }
}
void loop() {
  for(;index<total;index++)
  {
    digitalWrite(LEDs[index],HIGH);
    delay(100);
    digitalWrite(LEDs[index],LOW);
  }
  for(;index>=1;index--)
  {
    digitalWrite(LEDs[index],HIGH);
    delay(100);
    digitalWrite(LEDs[index],LOW);
  }
  
}
