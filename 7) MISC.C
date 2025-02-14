#include<stdio.h>

int main()
{
    int A, B;

    printf("--------------------------------------------------------------------------------\n");
    printf("1) DISPALY MEMORY SIZE OF VARIABLES USING SIZEOF().\n");
    printf("2) DISPALY ADDRESS OF VARIABLES USING ADDRESS OF(&) OPERATOR.\n");
    printf("3) HOW POINTER(*) OPERATOR HOLDS ADDRESS OF ANOTHER VARIABLE.\n");
    printf("4) FIND OUT LARGEST NUMBER USING TERNARY OPERATOR.\n");
    printf("0) EXIT OUT FROM MISC OPERATOR.\n");
    printf("--------------------------------------------------------------------------------\n");


    printf("PLEASE ENTER CHOICE ACCORDING TO MENU: ");
    scanf("%d",&A);
    printf("--------------------------------------------------------------------------------\n\n");

    if(A >= 1 && A <= 4)
    {
        printf("6) MISC OPERATORS:\n");
        printf("------------------\n");

        if(A == 1)
        {
            printf(" 1)INTEGER  = %d BYTES.\n ", sizeof(int));
            printf("2)CHRACTER = %d BYTES.\n ", sizeof(char));
            printf("3)FLOAT    = %d BYTES.\n ", sizeof(float));
            printf("4)DOUBLE   = %d BYTES.\n ", sizeof(double));
            printf("5)BOOL     = %d BYTES.\n ", sizeof(bool));
        }
        if(A == 2)
        {
            printf("ADDRERSS OF A = %x\n", &A);
            printf("ADDRERSS OF B = %x\n", &B);
        }

        if(A == 3)
        {
            int M, N;
            int *PA, *PB;
            printf("PLEASE ENTER TWO INTEGER NUMBER TWO SEE THERE ADDRESS WHICH IS HOLD BY POINTER VARIABLE.");
            scanf("%d %d",&M, &N);
            printf("----------------------------------------------------------------------------------------\n");

            printf("\nYOU ENTERD M = %d  AND N = %d\n",M, N);
            printf("-----------------------------\n\n");

            printf("1) ADDRESS USING ADDRESS OF(&) OPERATOR:\n");
            printf("----------------------------------------\n");
            printf("ADDRESS OF M = %x\n",&M);
            printf("ADDRESS OF N = %x\n\n",&N);

            PA  = &M;
            PB  = &N;

            printf("2) ADDRESS USING POINTER VARIABLE:\n");
            printf("----------------------------------\n");
            printf("ADDRESS OF M = PA = %x\n", PA);
            printf("ADDRESS OF N = PB = %x\n\n", PB);
        }
        if(A == 4)
        {
            int P, Q, R;

            printf("PLEASE ENTER 3 DIFFRENT INTEGER NUMBER TWO SEE THE LARGEST AND SMALLEST NUMBER: ");
            scanf("%d %d %d",&P, &Q, &R);
            printf("----------------------------------------------------------------------------------------\n");

            printf("\nYOU ENTERD P = %d, Q = %d AND R = %d\n",P, Q, R);
            printf("-------------------------------------\n\n");

            int K = (P > Q && P > R) ? P :
                    (Q > R) ? Q : R;

            int L =  (P < Q && P < R) ? P :
                     (Q < R) ? Q : R;

            printf("LARGEST  NUMBER = %d\n",K);
            printf("SMALLEST NUMBER = %d\n\n",L);

        }
    }
    else
    {
        printf("INVALID CHOICE!\n");
    }


    return 0;
}
