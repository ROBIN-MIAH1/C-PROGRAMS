#include<stdio.h>

int main()
{
    int A, B;

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

    printf("\n\t\t     ---------------------------------------------\n");
    printf("\t\t\t THIS IS THE END OF LOGICAL OPERATION!\n");
    printf("\t\t     ---------------------------------------------");
    printf("\n---------------------------------------------------------------------------------------\n");


    return 0;
}
