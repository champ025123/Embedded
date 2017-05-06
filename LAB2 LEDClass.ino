int pinLed1 = 2;
int pinLed2 = 3;
int pinLed3 = 4;
int pinLed4 = 5;
int pinLed5 = 6;
int pinLed6 = 7;
int pinLed7 = 8;
int buttonPin = 9;
int buttonState;
long ran;
int time = 2000;

void setup ()
{
  pinMode (pinLed1, OUTPUT);
  pinMode (pinLed2, OUTPUT);
  pinMode (pinLed3, OUTPUT);
  pinMode (pinLed4, OUTPUT);
  pinMode (pinLed5, OUTPUT);
  pinMode (pinLed6, OUTPUT);
  pinMode (pinLed7, OUTPUT);
  pinMode (buttonPin, INPUT);
  randomSeed(analogRead(0));
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    ran = random(1, 7);
    if (ran == 1) {
      digitalWrite (pinLed4, HIGH);
      delay (time);
    }
    if (ran == 2) {
      digitalWrite (pinLed3, HIGH);
      digitalWrite (pinLed5, HIGH);
      delay (time);
    }
    if (ran == 3) {
      digitalWrite (pinLed1, HIGH);
      digitalWrite (pinLed4, HIGH);
      digitalWrite (pinLed7, HIGH);
      delay (time);
    }
    if (ran == 4) {
      digitalWrite (pinLed1, HIGH);
      digitalWrite (pinLed2, HIGH);
      digitalWrite (pinLed6, HIGH);
      digitalWrite (pinLed7, HIGH);
      delay (time);
    }
    if (ran == 5) {
      digitalWrite (pinLed1, HIGH);
      digitalWrite (pinLed2, HIGH);
      digitalWrite (pinLed6, HIGH);
      digitalWrite (pinLed7, HIGH);
      digitalWrite (pinLed4, HIGH);
      delay (time);
    }
    if (ran == 6) {
      digitalWrite (pinLed1, HIGH);
      digitalWrite (pinLed2, HIGH);
      digitalWrite (pinLed6, HIGH);
      digitalWrite (pinLed7, HIGH);
      digitalWrite (pinLed5, HIGH);
      digitalWrite (pinLed3, HIGH);
      delay (time);
    }
  }
  digitalWrite (pinLed1, LOW);
  digitalWrite (pinLed2, LOW);
  digitalWrite (pinLed3, LOW);
  digitalWrite (pinLed4, LOW);
  digitalWrite (pinLed5, LOW);
  digitalWrite (pinLed6, LOW);
  digitalWrite (pinLed7                      , LOW);
}
