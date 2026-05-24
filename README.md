# SalvÁgua - Calculadora de Consumo e Diagnóstico de Vazamentos 💧

## 🔍 Sobre o Projeto
Este projeto foi desenvolvido como parte do **PROJETO SÓCIO-COMUNITÁRIO (Módulo 2) da disciplina de Algoritmos e Programação da Pós graduação em Desenvolvimento WEB e Aplicativos Móveis do IFSP Capirari, ministrada pela Profa. Ma. Adriana Belon**. O objetivo é aplicar os conceitos fundamentais de algoritmos e programação em Linguagem C (utilizando estritamente estrutura sequencial e comandos condicionais) para resolver um problema real de impacto social.

O **SalvÁgua** é uma ferramenta interativa pensada para comunidades e famílias de baixa renda. O seu propósito é monitorizar o consumo de água residencial, estimar o impacto financeiro real na fatura (incluindo a taxa de esgoto) e diagnosticar se os gastos da casa provêm de **hábitos abusivos** (comportamental) ou de **vazamentos crónicos** na infraestrutura hídrica (físico).

---

## 🛠️ Funcionalidades do Programa
* **Entrada Dinâmica e Segura:** Captura o número de moradores e valida se o utilizador inseriu texto por engano.
* **Flexibilidade Monetária:** Permite digitar a tarifa local por m³ utilizando tanto ponto `.` quanto vírgula `,` como separador decimal, tratando o buffer de memória para evitar travagens no terminal.
* **Métricas Reais de Consumo:** Calcula o consumo mensal detalhado por setores (banho, torneira da cozinha/lavagem de loiça e máquina de lavar roupa).
* **Faturação Realista:** Calcula o valor do consumo de água e adiciona automaticamente a tarifa de esgoto (100% sobre o valor da água), refletindo a cobrança real das concessionárias de saneamento.
* **Diagnóstico Automatizado (Metas da ONU):** Avalia a média diária de litros por pessoa com base no teto de 110L recomendado pela Organização das Nações Unidas.

---

## 🧠 Lógica de Triagem (Condicionais)
O algoritmo utiliza estruturas `if / else if / else` para classificar o consumo per capita em três faixas e isolar a raiz do problema:
1. **Consumo Consciente (Até 110 L/dia por pessoa):** Parabeniza a residência e incentiva a partilha de boas práticas na associação de moradores.
2. **Hábito Abusivo / Consumo Elevado (Entre 110 L e 220 L/dia por pessoa):** O sistema identifica que a infraestrutura está correta, mas o comportamento dos moradores precisa de ajuste (como reduzir o tempo de banho).
3. **Vazamento Crónico / Alerta Crítico (Mais de 220 L/dia por pessoa):** Matematicamente, este volume ultrapassa o dobro da meta da ONU para uma rotina comum. O programa emite um alerta de urgência para perdas invisíveis na rede física (como
