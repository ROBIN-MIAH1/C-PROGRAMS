#include<stdio.h>

int main()
{
    int n;

    printf("ENTER A NUMBER TO CHECK WHETHER IT'S POSITIVE, NEGATIVE OR ZERO: ");
    scanf("%d", &n);

    if(n == 0)
    {
        printf("THE NUMBER IS ZERO.\n\n");
    }
    else if(n > 0)
    {
        printf("%d IS A POSITIVE NUMEBR.\n\n", n);
    }
    else if(n < 0)
    {
         printf("%d IS A NEGATIVE NUMEBR.\n\n", n);
    }

    return 0;
}
