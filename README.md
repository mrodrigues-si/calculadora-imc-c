# 🏥 Calculadora de IMC em C

Calculadora de Índice de Massa Corporal (IMC) desenvolvida em linguagem C durante o 1º semestre de Sistemas de Informação na UFU. Inclui uma tabela de referência completa com as 6 classificações da OMS.

---

## 🎯 Funcionalidades

- Recebe nome, peso e altura do usuário
- Calcula o IMC automaticamente: `IMC = peso / (altura * altura)`
- Exibe **tabela de referência** com todas as classificações
- Classifica o resultado em 6 categorias:
  - 🔵 Abaixo do peso (IMC < 18.5)
  - 🟢 Peso normal (18.5 - 24.9)
  - 🟡 Sobrepeso (25.0 - 29.9)
  - 🟠 Obesidade Grau 1 (30.0 - 34.9)
  - 🔴 Obesidade Grau 2 (35.0 - 39.9)
  - ⚫ Obesidade Grau 3 (>= 40.0)

---

## 🛠️ Tecnologias

- Linguagem C
- Code::Blocks
- Compilador GCC (MinGW)

---

## 📖 Conceitos Aplicados

- Variáveis do tipo `float` e `char[]`
- Entrada e saída de dados (`scanf` / `printf`)
- Formatação de decimais (`%.2f`)
- Operações matemáticas
- Estruturas condicionais encadeadas (`if`, `else if`, `else`)
- Operadores lógicos (`&&` - E)
- Interface de texto formatada (tabela ASCII)

---

## ▶️ Como Executar

1. Compile o código com um compilador C (GCC, Code::Blocks, etc.)
2. Execute o programa
3. Digite seu nome, peso (kg) e altura (m)
4. Veja seu IMC e classificação!

---

## 💡 Exemplo de Uso

Digite o seu nome: Matheus Qual e o seu peso? (Ex: 76.7) 78 Qual e a sua altura? (Ex: 1.78) 1.80

+----------------+-------------------------+ | IMC | Classificacao | +----------------+-------------------------+ | < 18.5 | Abaixo do peso | | 18.5 - 24.9 | Peso normal | | 25.0 - 29.9 | Sobrepeso | | 30.0 - 34.9 | Obesidade Grau 1 | | 35.0 - 39.9 | Obesidade Grau 2 | | >= 40.0 | Obesidade Grau 3 | +----------------+-------------------------+

Seu IMC e: 24.07

Voce esta com o peso normal, parabens!


Copy code

---

## 🚀 Diferenciais do Projeto

- ✅ Tabela de referência visual integrada no terminal
- ✅ 6 níveis de classificação completos (padrão OMS)
- ✅ Mensagens personalizadas para cada faixa
- ✅ Valores formatados com 2 casas decimais
- ✅ Interface limpa e organizada com caracteres ASCII

---

## 👤 Autor

Feito por **Matheus Rodrigues** durante a graduação em Sistemas de Informação — UFU.

📎 [LinkedIn](https://www.linkedin.com/in/mrodrigues-si)  
💻 [GitHub](https://github.com/mrodrigues-si)
