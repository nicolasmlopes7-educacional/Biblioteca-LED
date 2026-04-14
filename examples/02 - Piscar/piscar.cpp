
/**
 *  Exemplo de uma das funções: piscar() o LED continuamente.
 *
 */

#include <Arduino.h>
#include <LED.h>

Led led(45);

void setup()
{
  led.piscar(); //* PISCA O LED CONTINUAMENTE
}

void loop()
{
  led.update();  //*  ATUALIZA SAÍDAS, SEMPRE CHAMADO NO LOOP().
}
