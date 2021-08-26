int ledvermelho = 11;
int ledamarelo = 12;
int ledverde = 13;
int sensorluz = A2;
int luz = 0;

void setup() {
  pinMode(ledverde, OUTPUT);
  pinMode(ledamarelo, OUTPUT);
  pinMode(ledvermelho, OUTPUT);
}
void loop() 
  {
  luz = (sensorluz);
  if (luz <750)
  {
  digitalWrite(ledverde, HIGH);
  delay(1500);
  
  digitalWrite(ledverde, LOW);
  digitalWrite(ledamarelo, HIGH);
  delay(1500);
  
  digitalWrite(ledamarelo, LOW);
  digitalWrite(ledvermelho, HIGH);
  delay(1500);
  
  digitalWrite(ledvermelho, LOW);
  }
  else 
  {
  digitalWrite(ledverde, LOW);
  digitalWrite(ledamarelo, LOW);
  digitalWrite(ledvermelho, LOW);
  }
  }
