// C++ code
//

#define LEDVERMELHO 10
#define LEDVERDE 9

void setup()
{
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);
  
}

void loop()
{
  //ATIVAÇÃO LED VERMELHO
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(500);

  //ATIVAÇÃO LED VERDE
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);

}