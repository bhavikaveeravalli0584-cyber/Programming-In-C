#include <stdio.h>

int main(){

    int a[5];
    int temp ;

    printf("Enter 5 numbers :");

    for (int i = 0; i < 5 ; i++){
        scanf("%d",&a[i]);
    }

    
    for (int i = 0; i < 5 - 1 ; i++){
        for (int j = 0 ; j < 5 - i - 1; j++){

            if ( a[j] > a[ j + 1 ] ){
                temp = a[j] ;
                a[j] = a[j + 1];
                a[j + 1] = temp ;
            }
        }
    }
        printf("\n After sorting :\n");

        for (int i = 0; i < 5 ; i++){
        printf("%d",a[i]);
    }
        printf("\n");

    return 0;
}