#include <stdio.h>

int main(){

    int arr[5];
    int sum = 0 ;
    float avg ;

    printf("Enter 5 numbers :");

    for (int i = 0; i < 5 ; i++){
        scanf("%d",&arr[i]);
        sum += i ;
    }

    avg = (float)sum / 5 ;


    printf("\n Sum = %d\n",sum);
    printf("\n Average = %.2f\n",avg);






    return 0;
}