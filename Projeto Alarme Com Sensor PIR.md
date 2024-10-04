## Projeto Alarme com Sensor PIR

Este projeto foi desenvolvido dentro do Tinkercard, na disciplina de Internet das Coisas(IOT), para a criação de um protótipo com arduino que 
simula um alarme com sensores PIR e emite sons todas as vezes quer for ativado.

## Componentes Usados

* 1 Arduino Uno
* 1 Placa de Ensaio
* Sensor PIR
* 1 Piezo
* 5 Jumper Macho-macho
* 2 Jumper Macho-feminino

## Montagem do Circuito

![imagem](alarmecomsensorpir.png)


## Explicação do Código

int sensorPIR =3;
int buzzer= 5;


void setup()
{
  pinMode(sensorPIR, INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  int detectarPresenca= digitalRead(sensorPIR);
  if(detectarPresenca == 1){
    tone(buzzer,264);
  }else{;
    noTone(buzzer);
 }
  
}
 
