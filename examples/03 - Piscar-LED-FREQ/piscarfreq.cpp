
/**
 *  Exemplo de uma das funções: piscar(float freq) o LED continuamente em uma certa frequência em Hz.
 *
 */

#include <Arduino.h>
#include <LED.h>

Led led(45);

void setup()
{
  led.piscar(2.0f); //* PISCA O LED CONTINUAMENTE EM UMA FRÊQUENCIA DEFINIDA EM Hz.
}

void loop()
{
  led.update();  //*  ATUALIZA SAÍDAS, SEMPRE CHAMADO NO LOOP().
}
