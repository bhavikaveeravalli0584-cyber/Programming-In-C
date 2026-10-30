#include <stdio.h>

int addNumbers( int a, int b);

int main(){

    int num1 , num2, result ;

    printf("Enter two numbers : \n ");  
    
    scanf("%d %d",&num1 , &num2);
    
    result = addNumbers(num1,num2);
    
    printf("\n Addition output : %d\n",result);

    
    return 0;
}

int addNumbers(int a, int b){
    int sum = a + b;
    return sum;
}