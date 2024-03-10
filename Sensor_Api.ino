const int sensorPin = 2;     
const int outputPin =  13;  
 
// variables will change:
int bacasensor = 0;   
 
void setup() {
  pinMode(outputPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}
 
void loop() {
  bacasensor = digitalRead(sensorPin);
 
  if (bacasensor == HIGH) {
    // turn LED on:
    digitalWrite(outputPin, HIGH);
    Serial.println("Terdeteksi Panas Api");
  } else {
    // turn LED off:
    digitalWrite(outputPin, LOW);
    Serial.println("Tidak Terdeteksi Panas Api");
    delay(100);
  }
}
