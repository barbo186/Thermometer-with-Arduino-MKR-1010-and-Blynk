//Feel free to use, Freedom is love!
#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "YourTemplateID"
#define BLYNK_DEVICE_NAME "YourDeviceID"                 //PROJECT INFORMATION FOR THE ARDUINO TO BLYNK CONNECTION
#define BLYNK_AUTH_TOKEN "YourAuthToken"
//////////////////////////////////////////////////////
#include <SPI.h>
#include <WiFiNINA.h>             //Libraries for Blynk
#include <BlynkSimpleWiFiNINA.h>
#include <DHT.h>                  //Libraries for DHT
#include <DHT_U.h>
//////////////////////////////////////////////////////
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "YourWiFiName";             //INFORMAZIONE CONNESSIONE
char pass[] = "YourWiFiPassword";

BLYNK_CONNECTED()
{
  Blynk.setProperty(V3, "offImageUrl", "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations.png");
  Blynk.setProperty(V3, "onImageUrl",  "https://static-image.nyc3.cdn.digitaloceanspaces.com/general/fte/congratulations_pressed.png");
  Blynk.setProperty(V3, "url", "https://docs.blynk.io/en/getting-started/what-do-i-need-to-blynk/how-quickstart-device-was-made");
}
BlynkTimer timer;
//////////
#define DHTpin 2          //SENSOR PIN
#define DHTTYPE DHT11     //IF YOU'RE USING ANOTHER TYPE OF SENSOR, CHANGE THIS PART.
DHT dht(DHTpin,DHTTYPE);
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  ///////////////////////
  pinMode(DHTpin, INPUT);
}

void loop()
{
  Blynk.run();
  timer.run();
  dht.begin();
  //PROGRAM START//
  unsigned long startmillis = 0;
  const long delay = 1000;  //"Delay"
  unsigned long actualtime = millis();
  if (actualtime - startmillis >= delay){
  actualtime = millisiniziale;  
  //THERMOMETER//
  float umid=dht.readHumidity();    //Measure humidity and temperature
  float temp=dht.readTemperature();
    Serial.println(temp);          //Test measures
    Serial.println(umid);
    Blynk.virtualWrite(V1, temp);  //Dashboard variables
    Blynk.virtualWrite(V2, umid);
  }
}
