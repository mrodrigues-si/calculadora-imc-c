#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nome [50];
   float peso, altura, imc;

   printf("Digite o seu nome: ");
   scanf("%s", nome);

   printf("Qual e o seu peso? (Ex: 76.7) ");
   scanf("%f", &peso);

   printf("Qual e a sua altura? (Ex: 1.78) ");
   scanf("%f", &altura);

   imc = peso / (altura * altura);

   printf("\n");
   printf("+----------------+-------------------------+\n");
   printf("|     IMC        |      Classificacao      |\n");
   printf("+----------------+-------------------------+\n");
   printf("| < 18.5         | Abaixo do peso          |\n");
   printf("| 18.5 - 24.9    | Peso normal             |\n");
   printf("| 25.0 - 29.9    | Sobrepeso               |\n");
   printf("| 30.0 - 34.9    | Obesidade Grau 1        |\n");
   printf("| 35.0 - 39.9    | Obesidade Grau 2        |\n");
   printf("| >= 40.0        | Obesidade Grau 3        |\n");
   printf("+----------------+-------------------------+\n\n");

   printf(" Seu IMC e: %.2f\n\n ", imc);

   if (imc < 18.5) {
    printf("Voce esta abaixo do peso, coma mais!\n");
       }

    else if (imc >= 18.5 && imc <= 24.9) {
    printf("Voce esta com o peso normal, parabens!\n");
    }

    else if (imc > 24.9 && imc <= 29.9) {
    printf("Voce esta acima do peso, faca uma caminhada e pratique esportes!\n");
    }

    else if (imc > 29.9 && imc <= 34.9) {
    printf("Voce esta com obesidade grau 1, faca um dieta e pratique execicios fisicos!\n");
    }

    else if (imc > 34.9 && imc <= 39.9) {
    printf("Voce esta com obesidade grau 2, procure um nutricionista!\n");
    }

    else {
    printf("Voce esta com obesidade grau 3, procure ajuda especializada o quanto antes!\n");
    }

    return 0;
}
