// biblioteca do LCD
#include <LiqidCryatal.h>
// criar variavel do lcd
LiqidCryatal lcd (2,3,4,9,10,11,12);
int lcdlcd =13;

//metodo para capturar a distancia
//retornar numero quebrado longo
long distancia(int trigger, int echo);
//triguer porta de saida ;
pinMode(trigger
// echo porta de entrada

void setup()
{
 pinMode(ledlcd, OUTPUT);  //DEFINIR LEDLCD SAIDA
 digitalWrite(ledLcd, HIGH); // ligar os LEDs do LCD
 lcd.begin(16,2); // informar que o lcd tem 16 colunas e 2 linhas
 lcd.clear(); // iniciar o lcd limpo
  
}

void loop()
{
 lcd.setCursor(0,0); // iniciar a escrita na linha 0 coluna 0
 lcd.print("Ola Mundo");
 lcd.setCursor(0,1); // iniciar a escrita na linha 0 coluna 0
 lcd.print("Bom Dia!"); 
}