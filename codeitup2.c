// #include<stdio.h>
// int main(){
//     int a,*p;
//     printf("\nENTER NUMBER TO CHECK FOR ODD/ EVEN ");
//     scanf("%d",&a);
//     p = &a;
//     printf("%d\n",*p);
//     printf("%d\n",p);
//     printf("%d\n",a);
//     if(*p%2==0){
//         printf("\nNUMBER IS EVEN ");

//     }
//     else{
//         printf("\nODD");
//     }
//     return 0;
// }




// #include <stdio.h>
// int main() {
//     int n,*p, i, fact = 0;

//     printf("\nENTER NUMBER: ");
//     scanf("%d", &n);
//     *p = n;

//     for (i = 1; i <= *p ; i++) {
//         if (*p % i == 0) {
//             fact++;
//         }
//     }

//     if (fact == 2) {
//         printf("\nPRIME\n");
//     } else {
//         printf("\nNOT PRIME\n");
//     }

//     return 0;
// }



// #include<stdio.h>
// struct employee

// {
//     int emp_code;
//     char emp_name[50];
//     char desig[50];
//     float salary;

//     /* data */
// };
// int main(){
//     struct employee a;
//     printf("\nENTER EMPLOYEE CODE ");
//     scanf("%d",&a.emp_code
//     );
//     printf("\nENTER EMPLOYEE NAME: ");
//     gets(a.emp_name);
//     printf("\nENTER DESIGNATION ");
//     gets(a.desig);
//     printf("\nENTER SALARY ");
//     scanf("%f", & a.salary);
//     printf("\nCODE = %d",a.emp_code);
//     printf("\nNAME = %s",a.emp_name);
//     printf("\nDESIGNATION = %s",a.desig);
//     printf("\nSALARY = %f",a.salary);
//     return 0;

// }

#include<stdio.h>
struct employee 
{
    int code;
    char name[50];
    float salary;

    /* data */
};
int main(){
    struct employee a[10];
    int key , pos , flag = 0  , i;
    for(i=0;i<10;i++){
        printf("\nENTER CODE FOR EMPLOYEE :");
        scanf("%d",&a[i].code);
        // printf("\nENTER NAME : ");
        // scanf("%s",&a[i].name);
        printf("\nENTER SALARY : ");
        scanf("%f",&a[i].salary);


    }
    printf("\nENTER EMPLOYEE CODE TO SEARCH : ");
    scanf("%d",&key);
    for(i=0;i<10;i++){
        if(a[i].code == key){
            flag == 1;
            pos = i;
            break;
        }

    }
    if(flag == 1){
        printf("\nCODE = %d",a[pos].code);
        // printf("\nNAME = %s",a[pos].name);
        printf("\nSALARY = %f",a[pos].salary);
    }
    else{
        printf("\nSEARCH VALUE NOT FOUND ");
    }
    return 0;
}



