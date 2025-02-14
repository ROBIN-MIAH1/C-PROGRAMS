#include<stdio.h>
#include<stdlib.h>
#define p printf
int A, B;

void ProgramMenu();
void Arithmetic();
void Assignment();
void Relational();
void Logical();
void Bitwise();
void Misc();
int main()
{

    int choice;
    ProgramMenu();
    while(1)
    {

        if(choice >= 0 || choice <= 6)
        {
            printf("PLEASE ENTER YOUR CHOICE: ");
            scanf("%d",&choice);


            switch(choice)
            {
            case 1:
                Arithmetic();
                break;
            case 2:
                Assignment();
                break;
            case 3:
                Relational();
                break;
            case 4:
                Logical();
                break;
            case 5:
                Bitwise();
                break;
            case 6:
                Misc();
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("INVALID CHOICE! PLEASE TRY AGAIN.\n");
            }
        }
        else
        {
            printf("INVALID CHOICE! PLEASE TRY AGAIN.\n");
        }
    }
    return 0;
}
//FUNCTION-00:
void ProgramMenu()
{

    p("1) ARITHMETIC OPERATION IN C.\n");
    p("2) ASSIGNMENT OPERATION IN C.\n");
    p("3) RELATIONAL OPERATION IN C.\n");
    p("4) LOGICAL    OPERATION IN C.\n");
    p("5) BITWISE    OPERATION IN C.\n");
    p("6) MISC       OPERATION IN C.\n");
    p("0) ENTER 0 TO EXIT THE PROGRAM.\n");
    p("--------------------------------\n");
}
//FUNCTION-01:
void Arithmetic()
{
    while( 1)
    {

        printf("--------------------------------------------------------------------------------\n");
        printf("OK, ENTER TWO INTEGER NUMBER(A,B) TO PERFORM ARITHMETIC OPERATION ON THEM: ");
        scanf("%d %d",&A, &B);
        printf("--------------------------------------------------------------------------------\n");

        if(B == 0)
        {
            printf("SOMETHING/0 = UNDEFINED. SO 2ND INTEGER CAN'T BE ZERO(0)\n");
        }
        else
        {

            printf("\n1) ARITHMETIC OPERATION IN C :\n");
            printf("-----------------------------\n\n");

            printf("YOU ENTERD A = %d AND B = %d\n",A,B);
            printf("-----------------------------\n\n");
            printf("1) SUMMATION       : %d + %d = %d\n",A, B, A + B);
            printf("2) SUBTRACTION     : %d - %d = %d\n",A, B, A - B);
            printf("3) MULTIPLICATION  : %d * %d = %d\n",A, B, A * B);
            printf("4) DIVISION        : %d / %d = %0.2f\n",A, B, (float)A / B);
            printf("5) MODULUS         : %d %% %d = %d\n",A,B, A % B);

            printf("\n");

            printf("6) PRE-INCREMENT   : ++A  =  %d\n",++A);
            printf("7) POST-INCREMENT  : A++  =  %d\n",A++);
            printf("8) MEMORY VALUE    : A    =  %d\n",A);

            printf("\n");

            printf("6) PRE-DECREMENT   : --B  =  %d\n",--B);
            printf("7) POST-DECREMENT  : B--  =  %d\n",B--);
            printf("8) MEMORY VALUE    : B    =  %d\n",B);

            printf("\n\t\t\t THIS IS THE END OF ARITHMETIC OPERATION!\n");
            printf("\t\t     ------------------------------------------------");
            printf("\n---------------------------------------------------------------------------------------\n");
            break;
        }
    }
}
//FUNCTION-02:
void Assignment()
{

    printf("--------------------------------------------------------------------------------\n");
    printf("OK, ENTER TWO INTEGER NUMBER(A,B) TO PERFORM ASSIGNMENT OPERATION ON THEM: ");
    scanf("%d %d",&A, &B);
    printf("--------------------------------------------------------------------------------\n");

    printf("\n2) ASSIGNMENT OPERATION IN C :\n");
    printf("------------------------------\n\n");

    int j = A;
    printf("YOU ENTERD A = %d AND B = %d :\n",A,B);
    printf("-----------------------------\n\n");

    printf("1) ASSIGNMENT              :          A = %d  & B = %d\n",A, B);
    printf("2) ADD AND ASSIGNMENT      : (A+=B) || (A = A + B)  OR A = %d + %d = %d\n",j, B, A += B);

    int k = A;
    printf("3) SUBTRACT AND ASSIGNMENT : (A-=B) || (A = A - B)  OR A = %d - %d = %d\n",k, B, A -= B);

    int l = A;
    printf("4) MULTIPLAY AND ASSIGNMENT: (A*=B) || (A = A * B)  OR A = %d * %d = %d\n",l, B, A *= B);

    int m = A;
    printf("5) DIVIDE AND ASSIGNMENT   : (A/=B) || (A = A / B)  OR A = %d/%d = %0.2f\n",m, B,(float)(A/=B));

    int n = A;
    printf("5) MODULUS AND ASSIGNMENT  : (A%%=B) || (A = A %% B)  OR A = %d %% %d = %d\n",n,B, A %= B);

    printf("\n\t\t\t THIS IS THE END OF ASSIGNMENT OPERATION!\n");
    printf("\t\t     ------------------------------------------------");
    printf("\n---------------------------------------------------------------------------------------\n");

}
//FUNCTION-03:
void Relational()
{
    printf("--------------------------------------------------------------------------------\n");
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

    printf("\n\t\t\t THIS IS THE END OF RELATIONAL OPERATION!\n");
    printf("\t\t     ---------------------------------------------");
    printf("\n---------------------------------------------------------------------------------------\n");
}
//FUNCTION-04:
void Logical()
{

    printf("--------------------------------------------------------------------------------\n");
    printf("OK, ENTER TWO INTEGER NUMBER(A,B) TO PERFORM LOGICAL OPERATION ON THEM: ");
    scanf("%d %d",&A, &B);
    printf("--------------------------------------------------------------------------------\n\n");

    printf("4.LOGICAL OPERATION IN C:");
    printf("\n------------------------\n\n");

    printf("YOU ENTERD A = %d AND B = %d\n",A,B);
    printf("--------------------------------\n\n");

    printf("a) LOGICAL AND (&&) OPERATION:\n");
    printf("------------------------------\n");
    printf("1) LOGICAL AND (&&) : (A == B) && (A =! B) : (%d == %d) && (%d != %d) : = (%d && %d) = %d\n",A,B,A,B,(A == B),(A != B),(A == B) && (A != B));
    printf("2) LOGICAL AND (&&) : (A >  B) && (A =! B) : (%d  > %d) && (%d != %d) : = (%d && %d) = %d\n",A,B,A,B,(A >  B),(A != B),(A >  B) && (A != B));
    printf("3) LOGICAL AND (&&) : (A <  B) && (A =! B) : (%d  < %d) && (%d != %d) : = (%d && %d) = %d\n",A,B,A,B,(A <  B),(A != B),(A <  B) && (A != B));

    printf("\n");

    printf("b) LOGICAL OR (||) OPERATION:\n");
    printf("-----------------------------\n");
    printf("1) LOGICAL  OR (||) : (A == B) || (A >= B) : (%d == %d) || (%d >= %d) : = (%d || %d) = %d\n",A,B,A,B,(A == B),(A >= B),(A == B) ||(A >= B));
    printf("2) LOGICAL  OR (||) : (A >  B) || (A <= B) : (%d  > %d) || (%d <= %d) : = (%d || %d) = %d\n",A,B,A,B,(A  > B),(A <= B),(A  > B) ||(A <= B));
    printf("3) LOGICAL  OR (||) : (A <  B) || (A != B) : (%d  < %d) || (%d != %d) : = (%d || %d) = %d\n",A,B,A,B,(A  < B),(A != B),(A  < B) ||(A != B));

    printf("\n");

    printf("c) LOGICAL NOT (!) OPERATION:\n");
    printf("------------------------------\n");
    printf("1) LOGICAL  OR (||) : !(A >= B) : !(%d >= %d) : !(%d) = %d\n",A,B,(A >= B),!(A >= B));
    printf("2) LOGICAL  OR (||) : !(A <= B) : !(%d <= %d) : !(%d) = %d\n",A,B,(A <= B),!(A <= B));
    printf("3) LOGICAL  OR (||) : !(A >  B) : !(%d  > %d) : !(%d) = %d\n",A,B,(A >  B),!(A >= B));

    printf("\n\t\t\t THIS IS THE END OF LOGICAL OPERATION!\n");
    printf("\t\t     ---------------------------------------------");
    printf("\n---------------------------------------------------------------------------------------\n");

}
//FUNCTION-05:
void Bitwise()
{
    printf("--------------------------------------------------------------------------------\n");
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

    printf("\n\t\t\t THIS IS THE END OF BITWISE OPERATION!\n");
    printf("\t\t     ---------------------------------------------");
    printf("\n---------------------------------------------------------------------------------------\n");

}
void Misc()
{


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
            printf("--------------------------------------------------------------------------------\n");
        }
        if(A == 2)
        {
            printf("ADDRERSS OF A = %x\n", &A);
            printf("ADDRERSS OF B = %x\n", &B);
            printf("--------------------------------------------------------------------------------\n");
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
            printf("--------------------------------------------------------------------------------\n");
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

            printf("--------------------------------------------------------------------------------\n");

        }
    }
    else
    {
        printf("INVALID CHOICE!\n");
        printf("--------------------------------------------------------------------------------\n");
    }

}
