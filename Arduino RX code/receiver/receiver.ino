 
/*
 SD card connection:
 VCC to 5V
 GND to GND
 CS to pin 4
 SCK to pin 13
 MOSI to pin 11
 MISO to pin 12

 Speaker connection:
 VCC to pin 9
 GND to GND
 */
#include <SD.h>                           //include SD module library
#include <TMRpcm.h>                       //include speaker control library

#define SD_ChipSelectPin 4                //define CS pin

TMRpcm tmrpcm;                            //crete an object for speaker library

void setup() 
{
    Serial.begin(9600);
    tmrpcm.speakerPin = 9;                    //define speaker pin. 
                                          //you must use pin 9 of the Arduino Uno and Nano
                                          //the library is using this pin
  
  if (!SD.begin(SD_ChipSelectPin)) {      //see if the card is present and can be initialized
    
    return; }                              //don't do anything more if not
}

void loop() 
{
      
    if(Serial.available())
    {
      String msg="";

      while(Serial.available())    //read data coming from the RX module. 
      {   
        msg+=(char)Serial.read();    
      }

      Serial.print(msg);           //Send data via serial port to the computer.
      if(msg == "0")
      {tmrpcm.setVolume(6);                    //0 to 7. Set volume level
       tmrpcm.play("LisaE.wav"); }        //the sound file name will play each time the arduino powers up, or is reset
    else if(msg == "1")
    {tmrpcm.setVolume(6);
     tmrpcm.play("Arab.wav");
      }
    }

    //delay(10);
}
