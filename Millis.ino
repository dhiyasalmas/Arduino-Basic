unsigned long waktu;
 
void setup(){
  Serial.begin(9600);
}
void loop(){
  Serial.print("Milis: ");
  waktu = millis();
 
  Serial.println(waktu);    //menampilkan waktu dalam milidetik yang terhitung
  delay(1000);             // menunggu 1 detik supaya waktu tidak terbaca secara massif
}
