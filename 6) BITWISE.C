#include<stdio.h>

int main()
{

    int A, B;

    printf("OK, ENTER TWO INTEGER NUMBER(A,B) TO PERFORM BITWISE OPERATION ON THEM: ");
    scanf("%d %d",&A, &B);
    printf("--------------------------------------------------------------------------------\n\n");

    printf("5) BITWISE OPERATION IN C:\n");
    printf("--------------------------\n\n");


    printf("YOU ENTERD A = %d AND B = %d\n",A,B);
    printf("--------------------------------\n\n");

    printf("1) BITWISE AND  (&)  = (A & B) : (%d & %d)  =  %d\n",A,B,(A & B));
    printf("2) BITWISE OR   (|)  = (A | B) : (%d | %d)  =  %d\n",A,B,(A | B));
    printf("3) BITWISE EX-OR(^)  = (A & B) : (%d ^ %d)  =  %d\n",A,B,(A ^ B));
    printf("4) 1s COMPLEMENT(~)  = ( ~A )  :  ( ~%d )  =  %d\n",A,~A);
    printf("5) LEFT-SHIFT   (<<) = (A << 1): (%d << 1) =  %d\n",A,(A << 1));
    printf("6) RIGHT-SHIFT  (>>) = (B >>1) : (%d >> 1  =  %d\n",B,(B >> 1));

    printf("\n\t\t     ---------------------------------------------\n");
    printf("\t\t\t THIS IS THE END OF BITWISE OPERATION!\n");
    printf("\t\t     ---------------------------------------------");
    printf("\n---------------------------------------------------------------------------------------\n");


    return 0;
}
