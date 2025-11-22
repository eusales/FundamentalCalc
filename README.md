## FundamentalCalc

🎓 Projeto de Conclusão de Curso: Calculadora Simples em C
Este projeto é a implementação de uma **Calculadora de Linha de Comando (CLI)** básica, desenvolvida em linguagem C. Foi criado como **projeto final** para a conclusão de um curso de Linguagem C, com o objetivo principal de consolidar os fundamentos da programação, focando em **controle de fluxo**, **validação de entrada robusta** e manipulação eficiente de funções.

---

### 🌟 Funcionalidades Principais

O programa opera em um *loop* contínuo, oferecendo um menu interativo e garantindo a **resiliência do sistema** por meio de validações rigorosas:

* **Operações Aritméticas:**
    * **Adição** (`+`)
    * **Subtração** (`-`)
    * **Multiplicação** (`x`)
    * **Divisão** (`/`)

* **Validação de Entrada (Robustez - Requisito 1):**
    * Implementa um sistema de **limpeza de *buffer*** (`limpar_buffer`) no menu principal para evitar travamentos (`scanf` em *loop*).
    * Trata eficientemente entradas **não numéricas** ou opções de menu inválidas.

* **Suporte a Decimais:**
    * Permite a entrada e o cálculo com números inteiros e de ponto flutuante (`double`).

* **Tratamento de Erros e Continuidade (Requisito 2):**
    * Detecção e manuseio de **divisão por zero**, exibindo a mensagem de erro.
    * Em seguida, o programa imediatamente pergunta ao usuário se deseja realizar outra operação.

* **Loop de Continuação (`s/n` - Requisito 3):**
    * Após cada cálculo (ou erro), o usuário é questionado se deseja realizar outra operação (`s/n`).
    * Se a resposta for 's', o programa retorna ao menu inicial.
    * Se a resposta for 'n', o programa encerra com uma mensagem de despedida.
