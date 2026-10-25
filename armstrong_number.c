#include <stdio.h>
#include <math.h>

// 1^3 + 5^3 + 3^3 =  153 --- Armstrong number

int main(){
    int original, num, remainder, n = 0;
    double result = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    original = num ;

    int temp = num;
    do {
        ++n;
        temp /= 10;
    } while (temp != 0);

    temp = num;
    do {
        remainder = temp % 10 ;
        result += pow(remainder, n);
        temp /= 10;
    } while (temp != 0);

    if ((int)result == original){
        printf("%d is an Armstrong number\n",original );
    }
        else{
            printf("%d is not an Armstrong number\n",original);
        }
    return 0 ;
}

