int analogPin = 0; // The analog pin your sensor is connected to
int val = 0; // variable to store the value read

void setup() {
Serial.begin(9600); // setup serial communication
}

void loop() {
val = analogRead(analogPin); // read the input pin
Serial.println(val); // Write value to serial console
delay(100);
}
