int Do = 3;
int Re = 4;
int Mi = 5;
int Fa = 6;
int Sol = 7;
int La = 8;
int Si = 9;

int buzzer = 12;

void setup() {
  pinMode(Do,INPUT);
  pinMode(Re,INPUT);
  pinMode(Mi,INPUT);
  pinMode(Fa,INPUT);
  pinMode(Sol,INPUT);
  pinMode(La,INPUT);
  pinMode(Si,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
int b1= digitalRead(Do);
int b2= digitalRead(Re);
int b3= digitalRead(Mi);
int b4= digitalRead(Fa);
int b5= digitalRead(Sol);
int b6= digitalRead(La);
int b7= digitalRead(Si);
  if(b1 == 1){
  tone(buzzer,262,200);
}
  if(b2 == 1){
  tone(buzzer, 292,200);
}
  if(b3 == 1){
  tone(buzzer,330,200);
}
  if(b4 == 1){
  tone(buzzer,349,200);
}
  if(b5 == 1){
  tone(buzzer,392,200);
}
  if(b6 == 1){
  tone(buzzer,440,200);
}
  if(b7 == 1){
  tone(buzzer,494,200);
}
  delay(100);
}
