# Z-Alert

## Descrição do Projeto

O **Z-Alert** é um sistema integrado de monitoramento e alerta para situações de emergência e desastres naturais, especialmente projetado para localizar pessoas ou detectar possíveis alagamentos em áreas de risco.

Este projeto faz uso de um botão de emergência (socorro) e um sensor de umidade do solo para acionar alertas. Quando o botão é pressionado, ou quando o sensor detecta umidade excessiva no solo (simulando chuva forte/enchente), o sistema envia um alerta via Arduino para o Node-RED, onde um dashboard exibe informações do evento em tempo real.

## Funcionalidades

- Monitoramento do solo via sensor analógico de umidade
- Botão físico para pedido de socorro
- LED para indicar estado de alerta
- Envio de dados em formato JSON via porta serial para o Node-RED
- Dashboard web (Node-RED) mostrando:
  - Umidade do solo (gauge)
  - Estado do botão de emergência (gauge)
  - Situação/Alerta textual

## Componentes Utilizados

- Arduino Uno
- Sensor de umidade de solo (analógico)
- Botão de pressão
- LED
- Resistores (220Ω para LED, 10kΩ para pull-down do botão, se necessário)
- Jumpers
- Protoboard
- Node-RED (software para dashboard)

## Como Funciona

1. **Sensor de Solo**: Mede a umidade. Valores altos simulam solo seco, valores baixos simulam alagamento.
2. **Botão de Socorro**: Ao pressionar, o LED acende e o Arduino envia alerta para o Node-RED.
3. **Arduino**: Lê o sensor e o botão, gera um JSON e envia pela porta serial.
4. **Node-RED**: Recebe o JSON, exibe em um dashboard amigável para fácil acompanhamento em tempo real.

## Link do video:

https://youtu.be/9uuS2EG5LlU