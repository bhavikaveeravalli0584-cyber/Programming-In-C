#include <stdio.h>

int main()
{
    
    int b = 1 ;
    
    
    for( int a = 0 ; a <= 100 ;){
        printf("%d,",a) ;
        int c = a + b ;
        a = b ;
        b = c ;
        
    }
    return 0 ;
}