int x, angka;
int led=11;
void setup()
{
Serial.begin(9600);
pinMode(led,OUTPUT);
Serial.println("LED berkedip");
Serial.print("kedipan : ");
}
void loop()
{
while(Serial.available()==0)
{}
angka=Serial.read()-'0';
Serial.println(angka);
for (x=1; x<=angka; x++)
{
digitalWrite(led, HIGH);
delay(200);
digitalWrite(led, LOW);
delay(200);
}
angka=0;
Serial.print("kedipan : ");
Serial.flush();
}
