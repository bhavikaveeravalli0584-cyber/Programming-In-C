#include <stdio.h>
#include <string.h>

// Defining Structure for Student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

//Function declarations
void addStudent();
void viewStudents();
void searchStudent();

int main(){

    int choice;

    while (1){
        printf("\n    Student Record Management System     \n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter Your Choice:  \n");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Exiting program.....\n");
                return 0;
            default:
                printf("Invalid choice ! Please try again.\n");
            
        }

    }
    return 0;
}

// Function to add a new student record
void addStudent(){
    //Opening file in a append mode so new records are added at the end
    FILE *file = fopen("students.txt","a");
    if (file == NULL){
        printf("Error opening file!\n");
        return ;
    }

    struct Student s;
    printf("Enter Roll Number :");
    scanf("%d",&s.rollNo);
    printf("Enter Name :");
    scanf("%s", s.name);
    printf("Enter Marks :");
    scanf("%f",&s.marks);

    //Write student details to the file
    fprintf(file, "%d %s %.2f \n", s.rollNo , s.name , s.marks);
    fclose(file);

    printf("Student record added successfully! \n");
    
}

// Function to view all students records
void viewStudents(){
    //Open file in read mode

    FILE *file = fopen("students.txt","r");
    if (file == NULL){
        printf("No records found or file does not exist yet! \n");
        return ;
    }

    struct Student s;
    printf("\n   All Student Records  \n ");
    printf("Roll No\t\tName\t\tMarks\n");

    //Read record by record from the file
    while (fscanf(file, "%d %s %f" ,&s.rollNo ,s.name ,&s.marks) == 3){
        printf("%d\t\t %s\t\t%.2f\n", s.rollNo ,s.name , s.marks);
    }

    fclose(file);
}

// Function to search for a student by roll number
void searchStudent(){
    FILE *file = fopen("students.txt", "r");
    if (file == NULL){
        printf("No records found to search! \n");
        return;
    }

    int targetRoll, found = 0;
    printf("Enter Roll Number to search: ");
    scanf("%d", &targetRoll);

    struct Student s;
    // Search through the file for the matching roll number
    while(fscanf(file, "%d %s %f",&s.rollNo , s.name , &s.marks) == 3){
        if (s.rollNo == targetRoll){
            printf("\nStudent Found ! \n");
            printf("Roll No: %d\n" , s.rollNo);
            printf("Name : %s\n",s.name);
            printf("Marks : %.2f\n", s.marks);
            found = 1;
            break ;
        }
    }
    fclose(file);

    if (!found) {
        printf("Student with Roll Number %d not found.\n", targetRoll);
        printf("Enter Roll Number :");
    
    }
}
