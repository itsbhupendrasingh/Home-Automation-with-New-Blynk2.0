// Chage These Credentials with your Blynk Template credentials 

#define BLYNK_TEMPLATE_ID "TMPLNCy_eIQB"
#define BLYNK_TEMPLATE_NAME "Home Automation with New Blynk"
#define BLYNK_AUTH_TOKEN "rgtysaTBsOtIIaWnWr8mqRs0h1-G7IX-"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "*************"; // Change your Wifi/ Hotspot Name
char pass[] = "*************"; // Change your Wifi/ Hotspot Password

#define Device1 D2
#define Device2 D5
#define Device3 D6
#define Device4 D7

BLYNK_WRITE(V0)
{
  digitalWrite(Device1, param.asInt());  
  Serial.println(String("V0 Data: ") + param.asInt());
  delay(10);
}
BLYNK_WRITE(V1)
{
  digitalWrite(Device2, param.asInt());
  Serial.println(String("V1 Data: ") + param.asInt());
  delay(10);
}
BLYNK_WRITE(V2)
{
  digitalWrite(Device3, param.asInt());
  Serial.println(String("V2 Data: ") + param.asInt());
  delay(10);
}
BLYNK_WRITE(V3)
{
  digitalWrite(Device4, param.asInt());
  Serial.println(String("V3 Data: ") + param.asInt());
  delay(10);
}

void setup() 
{
  Serial.begin(9600); //Start the serial output at 9600 baud
  pinMode(Device1, OUTPUT);
  pinMode(Device2, OUTPUT);
  pinMode(Device3, OUTPUT);
  pinMode(Device4, OUTPUT);
  digitalWrite(Device1, LOW);
  digitalWrite(Device2, LOW);
  digitalWrite(Device3, LOW);
  digitalWrite(Device4, LOW);

  Blynk.begin(auth, ssid, pass);//Splash screen delay
  delay(2000);
}

void loop() //Loop function
{
  Blynk.run();
}
