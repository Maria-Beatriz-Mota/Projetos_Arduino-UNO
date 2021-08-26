//Declara a porta do LED
int LED = 11;

void setup()
{
  //Define a porta do led como saida
  pinMode(LED, OUTPUT);
}
 
void loop()
{
  //Acende o led
  digitalWrite(LED, HIGH);
   
  //Aguarda intervalo de tempo em milissegundos
  delay(1000);
   
  //Apaga o led
  digitalWrite(LED, LOW);
   
  //Aguarda intervalo de tempo em milissegundos
  delay(1000);
}
