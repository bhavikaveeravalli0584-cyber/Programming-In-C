#include <stdio.h>

int main(){

    int a[5];
    int max , min ;

    printf("Enter 5 numbers :");

    for (int i = 0; i < 5 ; i++){
        scanf("%d",&a[i]);
    }

    max = a[0];
    min = a[0];

    for (int i = 0; i < 5 ; i++){
        if ( a[i] > max ){
            max = a[i];
        }
        if ( a[i] < min ){
            min = a[i];
        }


    }



    printf("\n Maximum = %d\n",max);
    printf("\n Minimum = %d\n",min);






    return 0;
}