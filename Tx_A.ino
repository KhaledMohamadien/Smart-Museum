//TX_A code.

void setup()
{
    Serial.begin(9600);
}

void loop() 
{
    Serial.println(1);                 //send it to the TX LED.
    delay(1000);                          //send data every second.
}
