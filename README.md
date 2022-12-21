  >Thermometer with Arduino MKR-1010 and Blynk.
  
  A DHT11 sensor is used for this project.
  ## Virtual Pin list:
  - V1 (Temperature)
  - V2 (Humidity)
  
  ## Libraries
  - DHT Library.
  - WiFiNINA Library.
  - Blynk Library.
  
  ## Before starting
  You need to have a Blynk account and connect the Arduino MKR 1010.
  After connecting the device you will receive:
  - Template ID.
  - Device name.
  - Authentication token.
  
  And we'll need them for the beginning of the code:
  ```ino
  #define BLYNK_TEMPLATE_ID "YourTemplateID"
  #define BLYNK_DEVICE_NAME "YourDeviceName"                 
  #define BLYNK_AUTH_TOKEN "YourAuthToken"
  ```
  
  ## Wiring diagram
 <a href="https://ibb.co/0hXTRpx"><img src="https://i.ibb.co/Wg3Z4NL/Wiring-diagram.png" alt="Wiring-diagram" border="1"></a>
 
 **Note:** Connections vary according to the type of sensor being used.
 
**MADE BY barbo186**
