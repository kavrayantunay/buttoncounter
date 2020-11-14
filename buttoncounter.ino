int ledPin= 11;
int buttonPin= 5;
int butonDurum= 0;
int ledDurum= 0;
int buttonValue= 0;

void setup(){

  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  
}

void loop(){
  ledPin= digitalRead(buttonValue);
  for (int buttonValue= 0; buttonValue = 10; buttonValue ++) {
    digitalWrite(ledDurum, buttonValue);
    if (buttonValue = 10) digitalWrite (ledDurum, HIGH);
    
  }
 
  
}
