# Meloclick
Teclado eletrônico para atender pessoas com diferentes graus de inabilidade motora:
* Baixo custo
* Velocidade de reprodução ajustável
* 5 melodias pré-programadas

![flyer_meloclick](https://github.com/1lucas1gabriel/Meloclick/blob/main/utilities/Meloclick.png)

As tecnologias assistivas agem visando melhorar a vida e a independência de pessoas
com algum tipo de deficiência. O conceito de tecnologia assistiva engloba produtos, recursos,
metodologias e estratégias, todos com o objetivo de melhorar a qualidade de vida das pessoas
com certas inabilidades.

Existem diversos tipos de recursos disponíveis para atender as necessidades dessas
pessoas: brinquedos, equipamentos de comunicação, computadores adaptados, acionadores,
chaves, aparelhos auditivos, entre outros. No entanto, muitas vezes os custos de tais recursos
acabam tornando a aquisição de tais recursos inviável.

O protótipo justifica-se pela importância de desenvolver um aparelho eletrônico de custo 
acessível para aprimorar a coordenação motora, a força, o tônus muscular, exercitar a memória 
e outras habilidades sensoriais (audição, tato, visão) de pessoas com paralisia cerebral ou 
outra inabilidade motora.

## Hadware
* Arduino Uno;
* Módulo Bluetooth Serial HC-06;
* 8 Metros de Fio;
* 7 Botões de Pressão;
* 8 LEDs de Cores Variadas;
* Alto-Falante 3W e 4Ω
* Meia Chapa de MDF 3mm;
* Fonte de Alimentação 5V - 1,5A;
* Plug de Alimentação para Arduino;
* Resistores Diversos;

## Modo de Funcionamento
1. O responsável pela atividade envia comandos de voz com um aplicativo (via bluetooth) para o *Meloclick*
1.1 Pode-se utilizar qualquer aplicativo da Google Play Store que realize comunicação com módulo bluetooth HC-06.
2. O *Meloclick* executa a melodia com as respectivas notas e aciona o led de cor correspondente.
3. O *Meloclick* entra em modo de teclado e espera o acionamento de algum botão (Nota Musical).
