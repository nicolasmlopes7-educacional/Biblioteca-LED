
/**
 *  Exemplo de uma das funções: acender(tempoLigado) o LED em um tempo determinado em millis().
 *
 */

#include <Arduino.h>
#include <LED.h>

Led led(45);

void setup()
{
  led.acender(10000); //* ACENDE O LED CONTINUAMENTE EM UM TEMPO DETERMINADO.
}

void loop()
{
  led.update();  //*  ATUALIZA SAÍDAS, SEMPRE CHAMADO NO LOOP().
}
