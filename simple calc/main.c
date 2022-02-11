/*
Simple calculator
by eric oganda
Feb 2022
MIT     license
C89 compiler
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum,diff,product,modulus;
    float quotient;
    //capture inputs
    printf("Simple Calculator\n");
    printf("Enter two values");
    scanf("%d%d",&num1,&num2);
    //computations
    sum = num1+num2;
    diff = num1-num2;
    product = num1*num2;
    quotient = (float)num1/num2;
    modulus = num1%num2;
    //outputs
    printf("%d+%d=%d\n",num1,num2,sum);
     printf("%d-%d=%d\n",num1,num2,diff);
      printf("%d*%d=%d\n",num1,num2,product);
       printf("%d/%d=%f\n",num1,num2,quotient);
       printf("%d modulo %d=%d\n",num1,num2,modulus);
    return 0;
}
