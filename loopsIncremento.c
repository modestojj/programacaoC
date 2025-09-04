#include <stdio.h>
// loop de multiplas variaveis
int main()
{
    // o i vai de 0 a 4 e o j de 10 a 6
    for (int i = 0, j = 10; i < j; i++, j--)
    {
        printf("i = %d j = %d\n", i, j);
    }

    /*
    i = 0 j = 10
    i = 1 j = 9
    i = 2 j = 8
    i = 3 j = 7
    i = 4 j = 6
    */

    printf("\n");
    printf("\n");
    // o loop prosegue se ambas as condições forem verdadeiras

    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--)
    {
        printf("i = %d j = %d\n", i, j);
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("\n");
    // continue pula a iteração e break termina o loop
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue; // Pula a iteração quando i é 5
        if (i == 8)
            break; // Sai do loop quando i é 8
        printf("%d ", i);
    }
    printf("\n");
    printf("\n");


    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    for (int i = 1; i <= numero; i++)
    {
        printf("%d\n", i);
    }

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (int y = num; y >= 1; y--)
    {
        printf("%d\n", y);
    }

    int n, soma = 0;
    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }

    printf("A soma é: %d\n", soma);

    int N;
    printf("Digite um número: ");
    scanf("%d", &N);

    for (int t = 0; t <= N; t += 3)
    {
        printf("%d\n", t);
    }
}