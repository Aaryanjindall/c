#include<stdio.h>
int main(){
    int a,b,c;
    char operator;
    printf("ENTER THE FIRST NUMBER ");
    scanf("%d",&a);
    printf("ENTER THE SECOND NUMBER ");
    scanf("%d",&b);
    printf("SELECT THE OPERATOR + - * / ");
    scanf(" %c",&operator);
    if(operator == '+'){
        c= a+b;
        printf("%d",(c));

    }
    else if(operator == '-'){
        c = a-b;
        printf("%d",(c));

    }
    else if(operator == '*'){
        c = a*b;
        printf("%d",(c));

    }
    else{
        c = a/b;
        printf("%d",(c));
    }
    return 0;
}

    
//     #include<stdio.h>

// int main() {
//     int a, b, c;
//     char operator;
    
//     printf("ENTER THE FIRST NUMBER ");
//     scanf("%d", &a);
    
//     printf("ENTER THE SECOND NUMBER ");
//     scanf("%d", &b);
    
//     printf("SELECT THE OPERATOR + - * / ");
//     scanf(" %c", &operator); // Corrected scanf format for char
    
//     if (operator == '+') {
//         c = a + b;
//         printf("%d", c);
//     } else if (operator == '-') {
//         c = a - b;
//         printf("%d", c);
//     } else if (operator == '*') {
//         c = a * b;
//         printf("%d", c);
//     } else if (operator == '/') {
//         if (b != 0) { // Check for division by zero
//             c = a / b;
//             printf("%d", c);
//         } else {
//             printf("Error: Division by zero");
//         }
//     } else {
//         printf("Invalid operator");
//     }
    
//     return 0;
// }

