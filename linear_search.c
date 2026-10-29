#include <stdio.h>

int main(){

    int a[5];
    int key , found = 0  ;

    printf("Enter 5 numbers :");

    for (int i = 0; i < 5 ; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter a number you want to search :");
    scanf("%d",&key);

    for (int i = 0; i < 5 ; i++){
        if ( a[i] == key ){
            printf("\n Index of a Number %d is %d",key,i);
            found = 1;
            break ;
        }
        }

        if ( found == 0 ){
            printf("\n Sorry , The number doesn't match. \n");
    }

    return 0;
}