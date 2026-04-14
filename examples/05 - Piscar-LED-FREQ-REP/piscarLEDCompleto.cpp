
/**
 *  Exemplo de uma das funções: piscar(float freq, uint16_t repeticoes) o LED em uma determina frequência com uma quantidade de repetições.
 *
 */

#include <Arduino.h>
#include <LED.h>

Led led(45);

void setup()
{
  led.piscar(2.0f, 15); //* PISCA O LED NUMA DETERMINADA FREQUÊNCIA COM UMA QUANTIDADE MÁXIMA DE REPETIÇÕES.
}

void loop()
{
  led.update();  //*  ATUALIZA SAÍDAS, SEMPRE CHAMADO NO LOOP().
}
