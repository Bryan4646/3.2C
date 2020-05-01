
void setup() {

}


void loop() {
    String temp = String(random(0, 25)); //If value is larger than 15, then sun is considered up 
    //Spark.variable = temp();
    Particle.publish("temp", temp, PRIVATE);
    delay(5000);
}