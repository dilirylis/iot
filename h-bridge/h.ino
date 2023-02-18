const int epin1 = 10;
const int epin2 = 9;

void setup() {
  pinMode(epin1, OUTPUT);
  pinMode(epin2, OUTPUT);
}

void loop() {
  	start_engine(255, true);
    delay(2000);
  	start_engine(128, false);
  	delay(2000);
}

void start_engine(byte speed, bool is_clockwise) {
  if (is_clockwise) {
    analogWrite(epin1, speed);
    analogWrite(epin2, 0);
  } else {
    analogWrite(epin1, 0);
    analogWrite(epin2, speed);
  }
}
