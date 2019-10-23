// Author: Gowtham MS gowtham10ms@gmail.com

#include <ESP8266WiFi.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);                                  //Serial connection
  WiFi.begin("Gowtham MS OnePlus", "9940424392");   //WiFi connection
  while (WiFi.status() != WL_CONNECTED) {  //Wait for the WiFI connection completion
    delay(500);
    Serial.println("Waiting for connection");
  }
  Serial.println("Connected to WIFI");
  Serial.print("IP Address:");
  Serial.println(WiFi.localIP());
}

void loop() {
 if(WiFi.status()== WL_CONNECTED){
  Serial.println("Connected to WIFI");
  Serial.print("IP Address:");
 }
 delay(1000); 
}
