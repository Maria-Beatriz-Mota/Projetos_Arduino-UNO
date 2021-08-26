int ledG = 13; //Green-->Verde
int ledY = 12; //Yellow-->Amarelo
int ledR = 11; //Red-->vermelho

void setup() {
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledR, OUTPUT);
}

void loop() 
  {
  digitalWrite(ledG, HIGH);
  delay(1500);
  digitalWrite(ledG, LOW);
  digitalWrite(ledY, HIGH);
  delay(1500);
  digitalWrite(ledY, LOW);
  digitalWrite(ledR, HIGH);
  delay(1500);
  digitalWrite(ledR, LOW);
 }
