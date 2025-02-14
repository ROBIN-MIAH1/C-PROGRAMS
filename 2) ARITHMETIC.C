#include<stdio.h>

int main()
{
    int A, B;

    printf("PLEASE ENTER TWO INTEGER NUMBER(A,B): ");
    scanf("%d %d",&A, &B);

    printf("\nARITHMETIC OPERATION IN C :\n");
    printf("---------------------------\n\n");
    printf("YOU ENTERD A = %d AND B = %d\n\n",A,B);
    printf("1) SUMMATION       : %d + %d = %d\n",A, B, A + B);
    printf("2) SUBTRACTION     : %d - %d = %d\n",A, B, A - B);
    printf("3) MULTIPLICATION  : %d * %d = %d\n",A, B, A * B);
    printf("4) DIVISION        : %d / %d = %d\n",A, B, A / B);
    printf("5) MODULUS         : %d %% %d = %d\n",A,B, A % B);

    printf("\n");

    printf("6) PRE-INCREMENT   : ++A  =  %d\n",++A);
    printf("7) POST-INCREMENT  : A++  =  %d\n",A++);
    printf("8) MEMORY VALUE    : A    =  %d\n",A);

    printf("\n");

    printf("6) PRE-DECREMENT   : --B  =  %d\n",--B);
    printf("7) POST-DECREMENT  : B--  =  %d\n",B--);
    printf("8) MEMORY VALUE    : B    =  %d\n",B);

    return 0;
}
