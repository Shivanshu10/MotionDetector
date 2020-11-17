void setup()
{
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(8, LOW);
  if (digitalRead(7) == HIGH)
  {
  	digitalWrite(8, HIGH);
    delay(2000);
    digitalWrite(8, LOW);
  }
}
