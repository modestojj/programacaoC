#include <stdio.h>

int main()
{

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    /*saida esperada:
    1
    2 2
    3 3 3
    4 4 4 4 */

    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    /*saida esperada:
    1
    1 2
    1 2 3
    1 2 3 4 */
}