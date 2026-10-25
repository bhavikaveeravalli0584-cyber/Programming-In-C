#include <stdio.h>

int main(){
    int num ;
    printf("Enter a number to calculate its factorial: ");

    scanf("%d",&num);

    unsigned long long factorial = 1;
    
    for ( int i = 1 ; i <= num ; i++){
        factorial *=i ;
    }

printf("Factorial of %d = %llu \n", num ,factorial);

return 0;

}