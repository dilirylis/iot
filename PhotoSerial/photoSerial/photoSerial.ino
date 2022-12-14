#define led_pin 10
#define sensor_pin A3
int brightness;
int photocellReading; 
int stop = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin, OUTPUT);
}

void loop() {

  if (Serial.available() > 0){
    char message = Serial.read();
    if (message == 'u') {
      digitalWrite(led_pin, HIGH);
    } 
    else if (message == 'd'){
      digitalWrite(led_pin, LOW);
    }
    else if (message == 's'){ // выводит значения яркости

      photocellReading = analogRead(sensor_pin);
      Serial.println(photocellReading);
    }
    else if (message == 'c'){ // если ярко, то лампочка выключается
      while(true) {
        if (analogRead(sensor_pin) > 580) digitalWrite(led_pin, HIGH);
        else digitalWrite(led_pin, LOW); }
    }
    else if (message == 'e'){  // яркость в зависимости от освещения 
      while (message == 'e'){
        brightness = analogRead(sensor_pin);
        analogWrite(led_pin, map(brightness, 0, 1023, 255, 0));
        
    }
    }else {
      Serial.println("Unknow message");
    }
  }
}