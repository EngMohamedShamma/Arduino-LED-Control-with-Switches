const int switch1Pin = 2;
const int switch2Pin = 3;
const int led1Pin = 4;
const int led2Pin = 5;
const int led3Pin = 6;
const int led4Pin = 7;
const int led5Pin = 8;
const int led6Pin = 9;

void setup() {
  // Set the switch pins as inputs
  pinMode(switch1Pin, INPUT);
  pinMode(switch2Pin, INPUT);

  // Set the LED pins as outputs
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
  pinMode(led5Pin, OUTPUT);
  pinMode(led6Pin, OUTPUT);
}

void loop() {
  // Read the state of the switches
  int switch1State = digitalRead(switch1Pin);
  int switch2State = digitalRead(switch2Pin);

  // Use conditional statements to control the LEDs
  if (switch1State == HIGH) {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, HIGH);
    digitalWrite(led3Pin, HIGH);
  } else {
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2Pin, LOW);
    digitalWrite(led3Pin, LOW);
  }

  if (switch2State == HIGH) {
    digitalWrite(led4Pin, HIGH);
    digitalWrite(led5Pin, HIGH);
    digitalWrite(led6Pin, HIGH);
  } else {
    digitalWrite(led4Pin, LOW);
    digitalWrite(led5Pin, LOW);
    digitalWrite(led6Pin, LOW);
  }
}