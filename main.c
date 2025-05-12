#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int fibonacci (){ //Função que efetua calculos para gerar a sequência de Fibonacci
int a = 0, b = 1, Fibo[50], N; //Declaração de variáveis
printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
scanf("%d", &N);
printf("Sequência de Fibonacci: %d %d ", a, b);
for(int i = 1; i < N; i++){ //o "for" é utilizado neste caso para repetir o calculo até a posição desejada pelo usuário
        Fibo[i] = a + b;
        a = b;
        b = Fibo[i];
        printf("%d ", Fibo[i]);
}
}

int main()
{
setlocale(LC_ALL, "Portuguese");

int escolha;

setlocale(LC_ALL, "Portuguese");
printf("===== MENU DE EXERCÍCIOS =====\n");
printf("1 - Sequência de Fibonacci;\n");
printf("2 - Fatoriais;\n");
printf("3 - Verificar Palíndromo;\n");
printf("4 - Verificar Substring.\n");
printf("Escolha o exercício: ");
scanf("%d", &escolha);

switch(escolha){ //Utiliza-se a função switch case para
    case 1:
        fibonacci();

}
//EXERCICIO 1 - SEQUÊNCIA DE FIBONACCI    
fibonacci(); //Declarando função para realizar os cálculos do exercicio
}

int main()
{
int j, i ,num;

    setlocale(LC_ALL, "Portuguese");

    int fatorial[num];
  printf("Digite um numero inteiro (1 a 20): ");
  scanf("%d", &fatorial[num]);

  for (i = 1; i < num; i++){
    for (j = 1; j >= i; j--){
        j = j * i
    }
    printf("%d! = ")
  }
    

}

