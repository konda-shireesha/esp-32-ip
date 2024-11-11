#include <Arduino.h>
#include <ESP8266WiFi.h>

const char* ssid = "Prapad-Pat";        // Replace with your network credentials
const char* password = "#Prapad@23#";

void setup() {
  // Start Serial Monitor
  Serial.begin(115200);
  
  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  Serial.print("Connecting to Wi-Fi");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  // Wi-Fi connected
  Serial.println("");
  Serial.println("WiFi connected");

  // Print the local IP address
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Add any loop code here if needed
}
