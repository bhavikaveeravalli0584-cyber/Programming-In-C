#include <stdio.h>


int main(){
    FILE *filePointer;
    filePointer = fopen( "student_info.txt", "w");


    if(filePointer == NULL ){
        printf("File cant be opened!\n");
        return 1;      
    }
    fprintf(filePointer, "Hello C programming!\n");
    fprintf(filePointer, "This data is written from files handling\n");
    
    fclose(filePointer);
    
    printf("Data is successfully saved\n");
    printf("Look there is a file named student_info.txt in your project directory\n");
    
    return 0 ;
}

