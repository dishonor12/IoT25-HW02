const int buttonPin = 4;  
const int ledPin =  5;    
int buttonState = 0;

void setup() {
  Serial.begin(115200);  
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);  

  if (buttonState == LOW) {  
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}