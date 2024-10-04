## Projeto Umoidade Do Solo
 Este projeto foi desenvolvido dentro do Tinkercard, na disciplina de Internet das Coisas(IOT), para a criação de um sensor que 
 é a capaz de medir certa temperatura de determinado ambiente.

 ## Componentes Usados

 * 1 Arduino uno
 * 1 Sensor de Umidade solo
 * 3 Jumpers Macho-macho

## Montagem do Circuito

![imagem](UMIDADEDOSOLO.png)

## Explicação do Código
#include <SoftwareSerial.h>

 BIBLIOTECA PARA CONEXÃO SERIAL DO SENSOR
#include <SoftwareSerial.h>
 VARIAVEL DO SENSOR
int sensor=A0;
 
  
void setup()
{
   DEFINIR O SENSOR COMO ENTRADA
  pinMode (sensor, INPUT);
   INICIALIZANDO O MONITOR SERIAL
  serial.begin(96000);
  
}

void loop()
{
  GUARDAR O VALOR LIDO PELO SENSOR
  int umidade = analogRead(sensor);
   IMPRIMIDO O VALO LIDO
  serial.println("Umidade do solo");
  serial.println(umidade);
  delay(10000);  ESPERE 10 SEGUNDOS
  
}
