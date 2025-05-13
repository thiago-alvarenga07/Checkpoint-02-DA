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


//Exercicio 2 - Fatoriais com vetores
int main()
{
    int i ,num;

    setlocale(LC_ALL, "Portuguese");

    int fatorial[num];
    printf("Digite um numero inteiro (1 a 20): ");
    scanf("%d", &num);

    printf("Fatoriais:\n");
    for (i = 0; i < num; i++)
    {
        if(i == 0) //if usado pois a formula usada no else não consegue calcular o fatorial da primeira posição
        {
          fatorial[i] = 1;
        }
        else
        {
            fatorial[i] = (i + 1) * fatorial[i - 1]; //Formula utilizada para calcular o valor do fatorial de acordo com a posição no vetor
        }
        printf("%d! = %d\n", i + 1, fatorial[i]);
    }

}

