#include <stdio.h>

int main(){
    FILE *filePointer;
    filePointer = fopen( "student_info.txt", "r");


    if(filePointer == NULL ){
        printf("File cant be opened!\n");
        return 1;      
    }

    char buffer[100];

    printf(" Data read from the file\n");

    while(fgets(buffer, 100, filePointer) != NULL){
        printf("%s",buffer);
    }

    fclose(filePointer);
    
    
    
    
    return 0 ;
}

