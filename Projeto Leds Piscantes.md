# projeto Leds Piscantes 

este projeto foi desenvolvido dentro do Tinkercard, na disciplina de Internet das Coisas (IOT),para a criação de leds piscantes nas cores pedidas.

# Componentes Usados

* 12 Leds
* 1 Placa de Ensaio
* 6 Resistores de 1 KOhms

# Montagem do Circuito
  ![Leds piscantes](arquivo.png)



# Explicação do Código

 variaveis do led 
int ledVerde = 2
int ledVermelho = 2  
int ledAzul = 2
  
void setup()
{  definir leds como saida
pinMode(ledVerde,OUTPUT);  
pinMode(ledVermelho,OUTPUT);
pinMode(ledAzul,OUTPUT);  
}

void loop()
{
  digitalWrite(ledVerde,HIGH); ligar verde
  digitalWrite(ledVermelho,HIGH);ligar vermelho
  digitalWrite(ledAzul,HIGH);ligar azul
  delay(5000); esperar 5 segundos
  digitalWrite(ledAzul,HIGH);ligar 2 azuis
  digitalWrite(ledVerde,HIGH);ligar 2 verdes
  delay(5000); esperar 5 segundos
  digitalWrite(ledVerde,HIGH);ligar 1 led verde
  digitalWrite(ledVermelho,HIGH);ligar 2 vermelhos
  digitalWrite(ledAzul,HIGH);ligar 1 azul
  delay(5000);
 
}
