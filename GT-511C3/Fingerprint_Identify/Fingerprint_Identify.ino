// Code
#include <FPS_GT511C3.h>
#include <SoftwareSerial.h>
uint8_t getFingerprintEnroll(uint8_t id);

FPS_GT511C3 fps(5,4);




void setup() 
{
  Serial.begin(9600);
 
 
  delay(100);
  fps.Open();
  fps.SetLED(true);
}



void loop(){
  // Identify fingerprint test, will continue to repeat while FPS is active
        // We will create a cap that covers the scanner, and opening the cap will
        // activate the scanner to run.
  if (fps.IsPressFinger())
  {
    fps.CaptureFinger(false);
    int id = fps.Identify1_N();
    if (id <200)
    {
      
      
       delay(1000);
      Serial.print("Hello! Fingerprint has been verified:");
      Serial.println(id);
                        
       delay(2000);
                        
    }
    else
    {
      Serial.println("Sorry, Your Fingerprint was not found in  our Database");
    }
  }
  else
  {
    Serial.println("Please Place Your Finger!!!");
  }
  delay(2000);
 
}
