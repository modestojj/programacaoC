#include <stdio.h>
// decrementar o valor mais facil
void recursivo(int numero)
{
    if (numero > 0)
    {
        // quando meu numero for maior que 0
        // ele funciona e diminui 1 ate acabar
        recursivo(numero - 1); //se colocar primero o numero - 1
        //ele printa do 10 ate o 1

        
        printf("%d\n", numero);//se colocar ele primeiro 
        //o valor vai de 10 ate 1
    }
    //===============================================
}
void imprimirMensagem()
{

    printf("Olá, Mundo !!\n");
}

int main()
{

    int quantidade = 10;

    printf("Contagem regressiva: \n");
    recursivo(quantidade);

    imprimirMensagem();

    return 0;

    // chamei no main a função de cima
}