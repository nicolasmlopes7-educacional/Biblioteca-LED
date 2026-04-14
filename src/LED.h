#ifndef LED_h
#define LED_h

#include <Arduino.h>

/**
 *@class Led
 * @brief Classe para controle não bloqueante de um LED.
 *
 * Permite ligar, desligar, ligar por um tempo,
 * piscar continuamente e piscar por quantidade definida.
 *
 * @note O método update() deve ser chamado continuamente dentro do loop().
 */
class Led
{
private:
    uint8_t pino;
    bool estado;

    bool apagarNoTempo;
    uint32_t apagarNoMomento;
    bool estadoPiscar;

    uint32_t tempoEspera;
    uint32_t tempoAnteriorPiscar;
    uint16_t repeticoes;

    /**
     * @brief Processa o desligamento temporizado.
     */
    void funcaoApagarNoTempo();

    /**
     * @brief Processa a lógica de piscada do LED.
     */
    void funcaoPiscar();

public:
    /**
     * @brief Constrói um objeto Led.
     * @param pin Número do pino digital onde o LED está conectado.
     */
    Led(uint8_t pin);

    /**
     * @brief Liga o LED continuamente.
     */
    void acender();                    
    
    /**
     * @brief Liga o LED por um tempo determinado.
     * @param tempoLigado Tempo, em millissegundos, que o LED ficará ligado.
     */
    void acender(uint32_t tempoLigado);

    /**
     * @brief Desliga o LED e cancela modos automáticos.
     */
    void desligar();

    /**
     * @brief Piscar o LED continuamente um Hertz.
     */
    void piscar();

    /**
     * @brief Pisca o LED em uma frequência de Hertz definida.
     * @param freq Frequência em Hertz.
     */
    void piscar(float freq);

    /**
     * @brief Pisca o LED em uma frequência de Hertz definida e determina quantas vezes o LED vai piscar.
     *@param freq Frequência em Hertz.
     *@param repeticoes Quantas vezes o LED vai piscar.
     */
    void piscar(float freq, uint16_t repeticoes);

    /**
     * @brief Inverte o estado do LED.
     */
    void alternar();

    /**
     * @brief Define manualmente o estado do LED.
     * @param estado  true para ligado, false para desligado.
     */
    void setEstado(bool estado); 

    /**
     * @brief Retorna o número do pino que foi inicializado.
     */
    uint8_t getPino();

    /**
     * @brief Atualiza a lógica interna da classe e escreve no pino.
     * 
     * @note Deve ser chamado repetidamente dentro da função loop().
     */
    void update();
};

#endif