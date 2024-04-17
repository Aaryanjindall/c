#include<stdio.h>
#include<string.h>
int main() {
    struct  data
    {
        int rollno;
        int marks;
    };
    struct data student[5];
    for(int i=0; i<5; i++){
    scanf("%d", &(student[i].rollno));
    scanf("%d", &(student[i].marks));
    }

    for (int i=0; i<5;i++)
    {
        printf("%d", (student[i].rollno));
        printf("%d", (student[i].marks));
    }
    
}
