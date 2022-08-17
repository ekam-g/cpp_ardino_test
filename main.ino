#include </home/carghai/Desktop/code/Blink/ultraSonicSensor.h>

UltraSonic sensor;

void setup() {
  Serial.begin(1200);
  pinMode(LED_BUILTIN, OUTPUT);
  sensor.start();
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print("Distance: ");
  Serial.println(sensor.data());
  Serial.println("cm");
  digitalWrite(LED_BUILTIN, LOW);   
  delay(600);
}


