#include<stdio.h>

int main()
{
    int n;

    printf("ENTER A NUMBER TO CHECK WHETHER IT'S EVEN OR ODD: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("%d IS A EVEN NUMBER\n\n", n);
    }
    else
    {
         printf("%d IS A ODD NUMBER\n\n", n);
    }

    return 0;
}
