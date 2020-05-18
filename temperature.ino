#include "Adafruit_DHT.h" //using Adafruit_DHT library

#define DHTPIN 2 //DHT connected to pin 2
#define DHTTYPE DHT22 //DHT 22 Model (AM2302)

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
    dht.begin();
    
}

void loop()
{
    delay(5000); //5 second intervals between readings

    int t = dht.getTempCelcius();
    Particle.publish("temp", String(t), PRIVATE);
}



   