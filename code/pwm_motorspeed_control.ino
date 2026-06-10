int buttonPin = 2;
int motorPin = 9;
int potPin = A0;

bool motorState = false;
bool lastButton = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Read button
  bool currentButton = digitalRead(buttonPin);

  // Toggle logic
  if (lastButton == HIGH && currentButton == LOW) {
    motorState = !motorState;
    delay(200); // debounce
  }

  lastButton = currentButton;

  // Read potentiometer
  int potValue = analogRead(potPin);
  int speed = map(potValue, 0, 1023, 0, 255);

  // Control motor
  if (motorState) {
    analogWrite(motorPin, speed);
  } else {
    analogWrite(motorPin, 0);
  }
}
