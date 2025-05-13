#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

//Nome / RM
//Diego Mendes: 565509
//Thiago Alvarenga: 562695

//Exercicio 1 - Fibonacci
void fibonacci (){ //Função que efetua calculos para gerar a sequência de Fibonacci
int a = 0, b = 1, Fibo[50], N; //Declaração de variáveis

printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
scanf("%d", &N);

if(N == 1){
    printf("Sequência de Fibonacci: %d", a);
}
else if(N == 0){
    printf("Número inválido, tente novamente");
}
else{
    printf("Sequência de Fibonacci: %d %d ", a, b);
}
for(int i = 1; i < N-1; i++){ //o "for" é utilizado neste caso para repetir o calculo até a posição desejada pelo usuário
        Fibo[i] = a + b;
        a = b;
        b = Fibo[i];
        printf("%d ", Fibo[i]);
}}
//Exercicio 2 - Fatoriais com vetores
void fatoriais()
{
    int i ,num;

    printf("Digite um numero inteiro (1 a 20): ");
    scanf("%d", &num);
    int fatorial[num];

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

//Exercicio 3 - palindromo

void palindromo() {

  int verificacao, i, tamanho, tamanhofor;

  char palavra[101]; // string com no maximo 100 caracteres

  printf("Digite uma string: ");
  scanf("%s", palavra);

  tamanho = strlen(palavra); //aderir o tamanho da string ou seja quantas letras tem a string na variavel tamanho

  tamanhofor =  tamanho; //nova varivavel para nao alterar o valor do tamanho no for
  tamanho--;

  for(i = 0; i != tamanhofor / 2; i++) //for para executar o comando até terminar de verificar a palavra para ver se ela é um palindromo
  {
    if (palavra[i] == palavra[tamanho]) //if para comparar a letra armazenada na posição i com a letra armazenda na posição tamanho se forem iguais a verificação = 1 se não verificação = 0
    {
      verificacao = 1;
    }
    else
    {
        verificacao = 0;
    }
    tamanho--;
  }
  if (verificacao == 1) //if para analisar se a verificação se manteve = 1 se sim a palavra é um palindromo se não, a palavra não é um palindromo
  {
      printf("A palavra é um palindromo");
  }
  else
  {
      printf("A palavra não é um palindromo");
  }
}



//Exercicio 4 - verificar substring
void substring(){
char palavra1[101], palavra2[101]; //declarando as variaveis para cada string, podendo conter até 100 caracteres
int i, x, y, z, verificacao = 0;

printf("Digite a primeira string: ");
scanf("%100s", palavra1);

printf("Digite a segunda string: ");
scanf("%100s", palavra2);

for(i = 0; palavra1[i] != '\0'; i++){
    palavra1[i] = toupper(palavra1[i]);
}
for(i = 0; palavra2[i] != '\0'; i++){
    palavra2[i] = toupper(palavra2[i]);
}

int tam1 = strlen(palavra1), tam2 = strlen(palavra2);

for(z = 0; z <= tam1 - tam2; z++){
    for(x = 0, y = z; x < tam2 && palavra1[y] == palavra2[x]; x++, y++);
    if(x == tam2){
        verificacao = 1;
        break;
}}

if(verificacao == 1){
    printf("A segunda string está contida na primeira.");
}
else{
    printf("A segunda string NÃO está contida na primeira.");
}}

int main()
{
setlocale(LC_ALL, "Portuguese");

int escolha;

printf("===== MENU DE EXERCÍCIOS =====\n");
printf("1 - Sequência de Fibonacci;\n");
printf("2 - Fatoriais;\n");
printf("3 - Verificar Palíndromo;\n");
printf("4 - Verificar Substring.\n");
printf("Escolha o exercício: ");
scanf("%d", &escolha);

switch(escolha){ //Utiliza-se a função switch case para
        case 1:
                fibonacci(); //Exercicio 1 - Fibonacci
                break;
        case 2:
                fatoriais(); //Exercicio 2 - Fatoriais com vetores
                break;
        case 3:
                palindromo(); //Exercicio 3 - palindromo
                break;
        case 4:
                substring(); //Exercicio 4 - verificar substring
                break;
        default:
                printf("Opção ínvalida");
        }
}

