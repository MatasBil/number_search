#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    print("Type a natural number: \n");
    if (scanf("%d", &d) != 1 || n <= 0)
    {
        printf("Error: Type a natural number!\n");
        return 1;
    }

    int *sk = malloc(n * sizeof *sk);
    if (sk == NULL)
        return 1;
    else
        printf("Memmory allocated!\n");

    for (int i = 0; i < n; i++)
    {
        if (scanf("Type a number: %d\n", sk[i]) != 1)
        {
            printf("Error: Type a number!\n");
            free(sk);
            return 1;
        }
    }
    
    free(sk);
    return 0;
}