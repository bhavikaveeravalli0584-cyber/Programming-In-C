#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main(){

    
    struct Student s1;
    
    printf("Enter student name:");  
    scanf("%s",&s1.name);
     
    printf("Enter Roll no:");  
    scanf("%d",&s1.rollNo);
    
    printf("Enter marks:");  
    scanf("%f",&s1.marks);
    
    printf("\n -----Student Details-----\n");
    printf("Name:%s\n",s1.name);  
    printf("Roll no: %d\n",s1.rollNo);
    printf("Marks:%.2f\n",s1.marks);  

    
    return 0;
}

