//variaveis
int led =3;
int sensorluminosidade= A0;
// variavel para capturar a luminosidade
int luz =0;

void setup()
{
 pinMode(led,OUTPUT);//led e de saida
  // sensor e de entrada
  pinMode(sensorluminosidade,INPUT);
}


void loop()
{
  // capturar o que o sensor leu no ambiente
  // analogicgRead e usado para leitura analogica
  
 luz = analogRead(sensorluminosidade); 
 /* as portas analogicas capturam dados que variam
 de 0 ate 1023*/
  
  // se estiver com pouca luz no ambiente
  if(luz<500){
    digitalWrite(led,HIGH); // ligar led
  }else{ // se tiver luz
    digitalWrite(led,LOW); // desligar led  
 }
  
}  