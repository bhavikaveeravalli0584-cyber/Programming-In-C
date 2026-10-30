#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    int length, ispalindrome = 1 ;

    printf("Enter a word : ");  
    scanf("%s",&str) ;

    length = strlen(str) ;
    
    for (int i = 0; i < length / 2 ; i++){
        if( str[i] != str[length - 1 - i]){
            ispalindrome = 0 ;
            break;
        }
    }
    if(ispalindrome){
        printf("\n  %s is a Palindrome. \n ",str);
    }
    else{
        printf("\n  %s is not a Palindrome. \n ",str);
    }
    
    
    
    return 0;
}