#include <stdio.h>

int main(){

// Pattern - 1

    int rows ;
    printf("Enter no.of rows for pattern 1 :  ");
    scanf("%d",&rows);
    for ( int i = 1; i <= rows  ; i++) {
        for ( int j = 1; j<=i ; j++){
            printf("*  ");
        }
        printf(" \n");
    }

// Pattern - 2


int row ;
printf("Enter no.of rows for pattern 2:  ");
scanf("%d",&row);

for( int k = row ; k >= 1 ; k--){
    for (int l = 1 ; l <= k; l++ ){
        printf("*  ");

    }

    printf(" \n");
}

// Pattern - 3


int r ;
    printf("Enter no.of rows for pattern 3 :  ");
    scanf("%d",&r);
    for ( int i = 1; i <= r  ; i++) {
        for ( int j = 1; j<=i ; j++){
            printf("*  ");
        }
        printf(" \n");
    }

    for( int k = r-1  ; k >= 1 ; k--){
    for (int l = 1 ; l <= k; l++ ){
        printf("*  ");

    }

    printf(" \n");
}


// Pattern - 4

int rowss ;

printf("Enter no.of rows for pattern 4 : ");
scanf("%d",&rowss);

for ( int i = 1 ; i <= rowss ; i++){
    for ( int space = 1 ; space <= rowss - i ; space++ ){
        printf("  ");
    }

    for (int j = 1 ; j <= i ; j++ ){
        printf(" * ");

    }

    printf("\n ");
}



    return 0;
}
 

