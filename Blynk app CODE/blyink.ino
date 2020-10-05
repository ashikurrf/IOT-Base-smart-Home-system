///

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266_SSL.h>
char auth[] = "592c725ea65c4a50add270b7cd314dc0";
char ssid[] = "Wifi name ";
char pass[] = "password";
void setup()
{
  //Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
