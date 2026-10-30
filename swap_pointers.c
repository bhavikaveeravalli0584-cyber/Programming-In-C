#include <stdio.h>

void swap( int *a, int *b);

int main(){

    int x = 10, y = 20 ;

    printf("Before swapping : x = %d, y = %d \n ", x , y);  
    
    swap(&x , &y);
     
    printf("\n After swapping : x = %d, y = %d \n", x , y);
    
    return 0;
}

void swap(int *a, int *b){
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;
}