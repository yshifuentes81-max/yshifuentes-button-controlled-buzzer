const int button=2, buzzer=9;
void setup(){ pinMode(button,INPUT_PULLUP); }
void loop(){
 if(digitalRead(button)==LOW) tone(buzzer,500);
 else noTone(buzzer);
}
