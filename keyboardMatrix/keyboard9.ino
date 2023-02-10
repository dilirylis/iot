const int button_pin = 0;
int button_value = 0;
int button_number = 0;

void setup() {
  Serial.begin(9600);
  pinMode(button_pin, INPUT);

  attachInterrupt(0, buttons, RISING); // для прерывания при нажатии на кнопку, 
  // чтобы в основном цикле была возможность опрашивать другие датчики и т.д
}

void buttons(){
  button_value = analogRead(button_pin);

  if (button_value >= 1023){button_number = 9;}
  if (button_value >= 511 && button_value < 1023){button_number = 8;}
  if (button_value >= 341 && button_value < 511){button_number = 7;}
  if (button_value >= 256 && button_value < 341){button_number = 6;}
  if (button_value >= 205 && button_value < 256){button_number = 5;}
  if (button_value >= 171 && button_value < 205){button_number = 4;}
  if (button_value >= 146 && button_value < 171){button_number = 3;}
  if (button_value >= 128 && button_value < 146){button_number = 2;}
  if (button_value >= 114 && button_value < 128){button_number = 1;}
  Serial.println(button_number);
}

void loop() {
  // button_value = analogRead(button_pin); // для вычисления значений при нажатии на кнопку
  // Serial.println(button_value);
  // delay(50);
}