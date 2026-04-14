# Biblioteca LED

Biblioteca simples para controle não bloqueante de LED com Arduino e ESP32.

A classe `Led` permite:

- ligar o LED continuamente
- ligar por um tempo determinado
- desligar o LED
- alternar o estado 
- piscar continuamente
- piscar uma quantidade definida de vezes 
- piscar com uma frêquencia definida 

O funcionamento é não bloqueante, usando `millis()`.
Por isso, o método `update()` deve ser chamado repetidamente dentro do `loop()`.

---

## Estrutura da biblioteca 

```text
Biblioteca-LED/
├── examples/
├── src/
│   ├── LED.cpp
│   └── LED.h
├── library.json
├── LICENSE
└── README.md

