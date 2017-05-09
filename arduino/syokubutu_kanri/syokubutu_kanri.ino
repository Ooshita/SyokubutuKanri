/*
  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
*/
double sensorValue;
void setup(){ 
    Serial.begin(57600);
}

void loop(){
  sensorValue=analogRead(A0); 
  Serial.println(sensorValue);
  delay(1000);
  
}
