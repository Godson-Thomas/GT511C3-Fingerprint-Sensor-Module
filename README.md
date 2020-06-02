# Components Required :
## GT-511C3
<br>
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f2.jpg" width="300">  <br>
The GT-511C3 FPS (fingerprint scanner) is a small embedded module that consists of an optical sensor mounted on a small circuit board. The optical sensor scans a fingerprint and the microcontroller and software provides the modules functionality which automatically processes the scanned fingerprint. The module can be used in projects for identifying users.<br>

## Arduino UNO
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f4.jpeg" width="200">  <br>

# Hardware Interfacing :
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f3.png" width="400"> <br>

### Note: Refer the codes for connection of Rx/Tx<br>
* Pindiagram<br>
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f1.jpeg" width="400"><br>
## Library File

A GT-511C3 library will be required to run this sketch. [click here](https://roboindia.com/tutorial-content/arduino_code/FPS_GT511C3.zip) Copy this to your Arduino library folder.<br>
# Steps :
1. Upload the [Fingerprint_Enroll.ino](https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Fingerprint_Enroll.ino) to your arduino after connecting the GT-511C3 sensor.<br><br>
2. Open the Serial monitor in the Arduino IDE.Follow the displayed steps.Message will be displayed on your serial monitor if your fingerprint is registered successfully.<br><br>
3. Now upload the [Fingerprint_Identify.ino](https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Fingerprint_Identify.ino) to your arduino and open the Serial monitor.Place your registered finger on the sensor.Message will be displayed if the fingerprint is verified.
