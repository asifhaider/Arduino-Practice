int value, led = 13;

void setup()
{
pinMode (A0, INPUT);
pinMode (led, OUTPUT);
Serial.begin (9600);
}

void loop(){
  value = analogRead(A0);
  Serial.println (value);
  digitalWrite (led, HIGH);
  delay (value);
  digitalWrite (led, LOW);
  delay (value);
}

