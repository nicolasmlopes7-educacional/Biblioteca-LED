
/**
 *  Exemplo de uma das funções: acender() o LED continuamente.
 *
 */

#include <Arduino.h>
#include <LED.h>

Led led(45);

void setup()
{
  //* NÃO NECESSÁRIO.
}

void loop()
{
  led.update();  //*  ATUALIZA SAÍDAS, SEMPRE CHAMADO NO LOOP().
  led.acender(); //* ACENDE O LED CONTINUAMENTE.
}
