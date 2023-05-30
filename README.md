# GS - Sky Garden
Global Solution de Edge Computing e Computer Systems

Aline Fernandes Zeppelini - RM 97966
Camilly Breitbach Ishida - RM 551474
Jessica Witzler Costacurta - RM 99068
Julia Leite Galvão - RM 550201

    Sky Garden
   A fome é um problema urgente e global que afeta milhões de pessoas em todo o mundo. Em meio a essa realidade preocupante, surge a necessidade de buscar soluções inovadoras que garantam o acesso a alimentos saudáveis e nutritivos. O projeto Sky Garden surge como uma resposta a esse desafio, utilizando tecnologia e automação para criar um sistema eficiente de cultivo de verduras e legumes em ambientes urbanos.
  Atualmente, a produção de alimentos enfrenta diversos desafios, especialmente em áreas urbanas onde o espaço e os recursos são limitados. Além disso, as condições ambientais muitas vezes não são ideais para o crescimento saudável das plantas, resultando em desperdício e baixa produtividade. A falta de acesso a alimentos frescos e nutritivos também contribui para a má nutrição e a insegurança alimentar.
  O projeto propõe uma abordagem inovadora para enfrentar esses desafios. Utilizando sensores inteligentes interligados a um sistema de automação controlado por um microcontrolador Arduino, o ambiente de cultivo é monitorado e ajustado de acordo com as necessidades das plantas. Sensores de luminosidade, umidade do solo e temperatura garantem que as condições sejam otimizadas para o desenvolvimento das plantas, evitando o desperdício e maximizando a colheita.
  
    Funcionalidades do sistema:
  O sistema é composto por um conjunto de sensores interligados a um microcontrolador Arduino, que captam informações importantes para o desenvolvimento das plantas. As funcionalidades do sistema incluem:
  - Sensor de luminosidade (LDR): Mede a iluminação do ambiente. Quando os valores estão abaixo do ideal, um LED amarelo é acionado juntamente com um buzzer. O display mostra se o ambiente está "muito claro", "muito escuro" ou "ideal". 
  - Sensor de umidade do solo: Mede a umidade do solo em forma de porcentagem. Quando os valores estão abaixo do ideal, um LED azul é ligado. Se estiver muito baixo, um motor é ativado junto com um LED verde para realizar a irrigação automática. O display indica se a umidade está "baixa", "alta" ou "ideal", mostrando também a porcentagem e o status do motor.
  -  Sensor de temperatura: Mede a temperatura do ambiente. Quando os valores estão fora do ideal, um LED vermelho é acionado junto com um buzzer. O display mostra se a temperatura está "alta", "baixa" ou "ideal", exibindo também a própria temperatura em graus Celsius.

    Impactos e Resultados Esperados:
  Espera-se que a implementação desse sistema de hortas verticais inteligentes traga os seguintes resultados e impactos:
  - Redução do desperdício: Ao monitorar e controlar as condições ambientais, evitam-se desperdícios decorrentes de condições inadequadas para o crescimento das plantas, garantindo que elas se desenvolvam de forma saudável.
  -  Aumento da produtividade: Com o ambiente controlado e otimizado para o crescimento das plantas, espera-se um aumento significativo na colheita de verduras e legumes, contribuindo para suprir a demanda alimentar.
  -   Sustentabilidade: A implementação das hortas verticais inteligentes promove o uso eficiente dos recursos, como água e energia, além de incentivar a produção local de alimentos em áreas urbanas, reduzindo a dependência de longas cadeias de abastecimento. 
  -   Segurança alimentar: Com a produção local de alimentos, o acesso a verduras e legumes frescos e saudáveis pode ser facilitado, contribuindo para a segurança alimentar e melhorando a qualidade da dieta nas comunidades urbanas.

    Instruções de uso:
  Para utilizar o sistema, siga as instruções de montagem e configuração presentes na documentação do projeto. Certifique-se de ter os componentes e sensores adequados, além de configurar corretamente o microcontrolador Arduino. O código-fonte e o esquema de montagem estão disponíveis no repositório do projeto.

    Componentes:
  -   1: LCD 16 x 2
  -   1: Sensor de temperatura (TMP36)
  -   1: Piezo
  -   1: Fotorresistor
  -   1: Arduino Uno R3
  -   6: 220 Ω Resistor
  -   1: 10 kΩ Resistor
  -   1: Amarelo LED
  -   1: Verde LED
  -   1: Sensor de umidade do solo
  -   1: Laranja LED
  -   1: Azul LED
  -   1: Motor CC
  -   1: Transistor NPN (BJT)
  -   1: 330 Ω Resistor

    Link para o projeto no tinkercad:
https://www.tinkercad.com/things/luOCSH2Hr0Y
