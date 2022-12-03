<<<<<<< HEAD
#define sensor_pin 2

void setup()
{
    pinMode(sensor_pin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int val = int(analogRead(sensor_pin) / 10.24);
    Serial.write(val);
    delay(100);
}
=======
#define sensor_pin 2

void setup()
{
    pinMode(sensor_pin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int val = int(analogRead(sensor_pin) / 10.24);
    Serial.write(val);
    delay(100);
}
>>>>>>> f36a535adc9a16df88b3c1f8f46e47b493a7c9cb
