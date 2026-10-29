#include <stdio.h>

int main(){

    int arr[5];
    
    printf("Enter 5 numbers :");

    for (int i = 0; i < 5 ; i++){
        scanf("%d",&arr[i]);

    }

    printf("\nThe numbers you have given :\n");

    for (int i = 0 ; i < 5 ; i++){
        printf("Element at index %d: %d\n",i,arr[i]);
    }





    return 0;
}