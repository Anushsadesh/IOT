#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "1kC5JCZb1sPo1l4tcAZ39fd-b5-axxnC";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "sudalai";
char pass[] = "take the data";

void setup()
{
// Debug console
Serial.begin(9600);
digitalWrite(HIGH,D2);
digitalWrite(HIGH,D3);
digitalWrite(HIGH,D4);
digitalWrite(HIGH,D5);
 Blynk.begin(auth, ssid, pass);
}

void loop()
{
Blynk.run();
}
