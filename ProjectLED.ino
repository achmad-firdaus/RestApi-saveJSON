//Bre semangat bre, by achmad

#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>

#define led D5 
#define led2 D6 
const char* ssid = "resource";
const char* password = "cabebawang_5";
String url = "http://njse.herokuapp.com/apv1/secret";
String parent = "ach";
String token = "ccaaa902-4641-4c77-b75c-c19204cedd5a";
String id = "60a5d4839d07b0001524e0e6";

StaticJsonBuffer<10000> jsonBuffer;

void setup() {
  Serial.begin(115200);
  delay(10);
  pinMode(led, OUTPUT); 
  pinMode(led2, OUTPUT); 
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  delay(9000);
  GET_Lampu();
}
void GET_Lampu() {
  if ((WiFi.status() == WL_CONNECTED)) {
    String urli = url + "/" + token + "/" + parent + "/" + id;
    WiFiClient client;
    HTTPClient http;
    http.begin(client, urli);  
    int httpCode = http.GET();
    Serial.print(httpCode);
    if (httpCode > 0) {
       const String& payload = http.getString();
       JsonObject& root = jsonBuffer.parseObject(payload);
       if (!root.success()) {
         Serial.println("parseObject() failed");
         return;
       } else {
           String getData = root["response"]["ledbiru"];
           String getData2 = root["response"]["ledmerah"];
           if (getData == "1" ){
              digitalWrite(led, 1);
           } else {
              digitalWrite(led, 0);
            }
           if (getData2 == "1" ){
              digitalWrite(led2, 1);
           } else {
              digitalWrite(led2, 0);
            }
           jsonBuffer.clear();
       }
    } else {
       Serial.println("Connetion time out");
    }
    http.end();
  }
}
