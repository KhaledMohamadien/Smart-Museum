//TX_M code.

void setup()
{
    Serial.begin(9600);
}

void loop() 
{
    Serial.println(0);                 //send it to the TX LED.
    delay(1000);                          //send data every second.
}
