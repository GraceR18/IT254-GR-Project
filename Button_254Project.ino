// This code turns the led on and off when the button is pressed 

#define LED_PIN 8
#define BUTTON_PIN 2

byte lastButtonState = LOW;
byte ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  Serial.begin(9600); 
}

void loop() {
  byte buttonState = digitalRead(BUTTON_PIN);
  if (buttonState != lastButtonState) {
    lastButtonState = buttonState;
    if (buttonState == LOW) {
    if (ledState == HIGH) {
        ledState = LOW;
    } else {
        ledState = HIGH;
    }
    digitalWrite(LED_PIN, ledState);
}
    if (ledState == HIGH){
      Serial.println("LED_ON");
    }
    else {
      Serial.println("LED_OFF");
    }
    }
  }

