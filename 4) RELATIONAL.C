#include<stdio.h>

int main()
{
        int A, B;

        printf("OK, ENTER TWO INTEGER NUMBER(A,B) TO PERFORM RELATIONAL OPERATION ON THEM: ");
        scanf("%d %d",&A, &B);
        printf("--------------------------------------------------------------------------------\n\n");

        printf("\n2) ASSIGNMENT OPERATION IN C :\n");
        printf("------------------------------\n\n");

        printf("YOU ENTERD A = %d AND B = %d\n",A,B);
        printf("------------------------------\n");

        printf("1) EQUAL TO                 : (%d == %d) = %d\n",A, B, A == B);
        printf("2) NOT EQUAL TO             : (%d != %d) = %d\n",A, B, A != B);
        printf("3) GREATER THAN             : (%d  > %d) = %d\n",A, B, A  > B);
        printf("4) LESS THAN                : (%d  < %d) = %d\n",A, B, A  < B);
        printf("5) GREATER THAN OR EQUAL TO : (%d >= %d) = %d\n",A, B, A >= B);
        printf("5) LESS THAN OR EQUAL TO    :( %d <= %d) = %d\n",A, B, A <= B);

        printf("\n\t\t     -----------------------------------------------\n");
        printf("\t\t\t THIS IS THE END OF RELATIONAL OPERATION!\n");
        printf("\t\t     -----------------------------------------------");
        printf("\n---------------------------------------------------------------------------------------\n");

    return 0;
}
