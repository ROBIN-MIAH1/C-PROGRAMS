#include<stdio.h>

int main()
{
    int A, B;

    printf("OK, ENTER TWO INTEGER NUMBER(A,B) TO PERFORM ASSIGNMENT OPERATION ON THEM: ");
    scanf("%d %d",&A, &B);
    printf("--------------------------------------------------------------------------------\n");

    printf("\n2) ASSIGNMENT OPERATION IN C :\n");
    printf("------------------------------\n\n");

    int j = A;
    printf("YOU ENTERD A = %d AND B = %d :\n",A,B);
    printf("-----------------------------\n\n");

    printf("1) ASSIGNMENT              :       A = %d  & B = %d\n",A, B);
    printf("2) ADD AND ASSIGNMENT      : (A+=B) || (A = A + B)  OR A = %d + %d = %d\n",j, B, A += B);

    int k = A;
    printf("3) SUBTRACT AND ASSIGNMENT : (A-=B) || (A = A - B)  OR A = %d - %d = %d\n",k, B, A -= B);

    int l = A;
    printf("4) MULTIPLAY AND ASSIGNMENT: (A*=B) || (A = A * B)  OR A = %d * %d = %d\n",l, B, A *= B);

    int m = A;
    printf("5) DIVIDE AND ASSIGNMENT   : (A/=B) || (A = A / B)  OR A = %d/%d = %0.2f\n",m, B,(float)(A/=B));

    int n = A;
    printf("5) MODULUS AND ASSIGNMENT  : (A%%=B) || (A = A %% B)  OR A = %d %% %d = %d\n",n,B, A %= B);


    printf("\n\t\t     ------------------------------------------------");
    printf("\n\t\t\t THIS IS THE END OF ASSIGNMENT OPERATION!\n");
    printf("\t\t     ------------------------------------------------");
    printf("\n---------------------------------------------------------------------------------------\n");


    return 0;
}
