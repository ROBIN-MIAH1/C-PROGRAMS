#include<stdio.h>

int main()
{
    int a, b, c;

    printf("ENTER 3 DIFFRENT INTEGER TO DISPLAY LARGEST AND SMALLEST AMONG THEM: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\n");

    if(a > b && a > c)
    {
        printf("lARGEST  = %d\n", a);
    }
    else if(b > c)
    {
        printf("lARGEST  = %d\n", b);
    }
    else
    {
        printf("LARGEST  = %d\n", c);
    }

    // SMALLEST CALCUALATE
    if(a < b && a < c)
    {
        printf("SMALLEST = %d\n", a);
    }
    else if(b < c)
    {
        printf("SMALLEST = %d\n", b);
    }
    else
    {
        printf("SMALLEST = %d\n", c);
    }


    return 0;
}
