// Code
#include <FPS_GT511C3.h>
#include <SoftwareSerial.h>
uint8_t getFingerprintEnroll(uint8_t id);

FPS_GT511C3 fps(5,4); // (Rx,Tx)



void setup() 
{
  Serial.begin(9600);
 
  delay(100);
  fps.Open();
  fps.SetLED(true);
  Enroll();
}




void Enroll(){
  // Enroll test will repeat just once each time Reset button is pressed

  // find open enroll id, will repeat process each time Reset button is pressed

  int enrollid = 0;
  bool okid = true;
  while (okid == true)
  {
    okid = fps.CheckEnrolled(enrollid);
    if (okid==true) enrollid++;
  }
  fps.EnrollStart(enrollid);

  // enroll
  Serial.print("Please press finger to Enroll #");
  Serial.println(enrollid);
  while(fps.IsPressFinger() == false) delay(100);
  bool bret = fps.CaptureFinger(true);
  int iret = 0;
  if (bret != false)
  {
    Serial.println("Please remove finger");
    fps.Enroll1();
    while(fps.IsPressFinger() == true) delay(100);
    Serial.println("Please press same finger again");
    while(fps.IsPressFinger() == false) delay(100);
    bret = fps.CaptureFinger(true);
    if (bret != false)
    {
      Serial.println("Please remove finger");
      fps.Enroll2();
      while(fps.IsPressFinger() == true) delay(100);
      Serial.println("Please press same finger yet again");
      while(fps.IsPressFinger() == false) delay(100);
      bret = fps.CaptureFinger(true);
      if (bret != false)
      {
        Serial.println("Please remove finger");
        iret = fps.Enroll3();
        if (iret == 0)
        {
          Serial.println("Enrolling Successfull");
        }   
        else
        {
          Serial.print("Enrolling Failed with error code:");
          Serial.println(iret);
        }
      }
      else Serial.println("Sorry, unable to capture third finger");
    }
    else Serial.println("Sorry, unable to capture second finger");
  }
  else Serial.println("Sorry, unable to capture first finger");
}
void loop()
{
  delay(3000);
}
