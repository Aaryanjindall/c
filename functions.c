// #include<stdio.h>
// void greet(){
//     printf("HOW ARE YOU \n");
//     printf("GOOD MORNING \n");
//     return;
// }
// int main(){
//     greet();
//     greet();
//     greet();
//     return 0;
// }



// #include<stdio.h>
// int add(int x,int y){
//     printf("%d",x+y);
//     return ;

// }
// int main(){
//     int a = 5;
//     int b = 6;
//     add(a,b);
//     return 0;

// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("ENTER A NUMBER ");
//     scanf("%d",&a);
//     float root = sqrt(a);
//     printf("the root is %f",root);
//     return 0;
// }


// #include <stdio.h>

// int factorial(int x) {
//     int fact = 1;
//     int i;
    
//     for (i = 1; i <= x; i++) {
//         fact = fact * i;
//     }
//     return fact;
     
// }

// int main() {
//     int n;
//     printf("Enter N: ");
//     scanf("%d", &n);
//     int facte = factorial(n);
//     printf("%d\n", facte);
//     return 0;
// }


#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return ;
}

int main(){
    int a ,b;
    
    printf("ENTER a \n");
    scanf("%d",&a);
    printf("ENTER b \n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d\n",a);
    printf("%d",b);
    return 0;

}


// #include<stdio.h>
// int min(int a,int b){
//     if(a<b)
//         return a;
//     else return b;

// }
// int gcd (int a , int b){
//     int hcf;
//     int i;
//     for(i=min(a,b);i>1;i--){
//         if(a%i==0 && b%i==0){
//             hcf = i;
//             break;
//         }
//     }
//     return hcf;
// }
// int main(){
//     int x,y;
//     printf("ENTER 1 number ");
//     scanf("%d",&x);
//     printf("ENTER 2 number ");
//     scanf("%d",&y);
//     int hcf = gcd(x,y);
//     printf("%d",hcf);
//     return 0;

// }