#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Type a natural number: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("\nError: Type a natural number!\n");
        return 1;
    }


    int *sk = malloc(n * sizeof *sk);

    if (sk == NULL)
        return 1;
    else
        printf("Memmory allocated!\n");
    

    printf("Type the numbers: ");
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &sk[i]) != 1)
        {
            printf("Error: Type a number!\n");
            free(sk);
            return 1;
        }
        printf(" ");
    }


    free(sk);
    return 0;
}