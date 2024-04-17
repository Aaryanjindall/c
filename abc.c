// #include<stdio.h>
// int main(){
//     printf("HELLO WORLD ");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a = 23;
//     printf("AGE IS %d  ", a );
//     return 0;

// // }

// #include<stdio.h>
// int main(){
//     float b = 56.6;
//     printf("AGE IS %f ", b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int age;
//     printf("ENTER THE AGE ");
//     scanf("%d",&age);
//     printf("YOUR AGE IS %d ",age);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b; 
//     printf("ENTER A");
//     scanf("%d",&a);

//     printf("ENTER B");
//     scanf("%d",&b);

//     printf("sum is %d",a+b);
//     return 0;

// }



// #include<stdio.h>

// int main() {
//     int radius;
//     printf("ENTER THE RADIUS: ");
//     scanf("%d", &radius);
//     printf("AREA OF CIRCLE OF RADIUS %d IS %f", radius, 3.14 * radius * radius);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int length ,breadth;
//     printf("ENTER THE THE LENGTH OF RECTANGLE: ");
//     scanf("%d",&length);
//     printf("ENTER THE BREADTH OF RECTANGLE: ");
//     scanf("%d",&breadth);
//     printf("PERIMETER OF RECTANGLE GIVEN OF LENGTH (%d) AND BREADTH (%d) IS (%d) ", length , breadth , 2*(length + breadth));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("ENTER THE NUMBER ");
//     scanf("%d",&n);
//     printf("%d",n>9&&n<100);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int age;
//     printf("ENTER AGE : ");
//     scanf("%d",&age);
//     if(age>18){
//         printf("ADULT \n");
//         printf("YOU CAN VOTE \n");
//         printf("THEY CAN DRIVE ");
//     }
//     else{
//         printf("NOT ADULT");
//     }
//     return 0;
    
// }

// #include<stdio.h>
// int main(){
//     int age;
//     printf("ENTER AGE ");
//     scanf("%d",&age);
//     age > 18 ? printf("ADULT "): printf("NOT ADULT");
//     return 0;
// }

#include<stdio.h>
int main(){
    char day;
    printf("ENTER THE DAY INITIAL");
    scanf("%d",&day);
    switch (day) {
        case 'm': printf("IT'S MONDAY");
                  break;
        case 't': printf("IT'S TUESDAY");
                  break;
        case 'w': printf("IT'S WEDNESDAY");
                  break;
        case 'su': printf("IT'S SUNDAY");
                   break;
        case 'th': printf("IT'S THURSDAY");
                   break;
        case 'f': printf("IT'S FRIDAY");
                  break;
        case 's': printf("IT'S SATURDAY");
                  break;
        default : printf("IT'S NOT A VALID DAY ");
              
    return 0;
    }
}


// #include<stdio.h>
// int main(){
//     for(int i=0; i<=10; i++){
//         printf("%d", i);
//         }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     for(int i=1; ;i++){
//         printf("%d", i);
//         }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i = 1;
//     while(i<=5){
//         printf("Hello world\n");
//         i++;

//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("ENTER THE NUMBER : ");
//     scanf("%d",&a);
//     int i=0;
//     while(i<=a){
//         printf("%d\n",i);
//         i++;

//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("ENTER THE NUMBER : ");
//     scanf("%d",&a);
//     int i=0;
//     int sum = 0;
//     while(i<=a){
//         printf("%d\n",i);
//         sum +=i;
//         i++;
        

//     }
//     printf("SUM OF NUMBERS IS %d",sum);

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("ENTER THE NUMBER : ");
//     scanf("%d",&a);
//     if (a%2 == 0){
//         printf("NUMBER IS DIVISIBLE BY 2 ");

//     }
//     else{
//         printf("NUMBER IS NOT DIVISIBLE BY 2 ");

//     }
//     return 0 ;

// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("ENTER THE NUMBER : ");
//     scanf("%d",&a);
//     for(int i=0 ; i<=10;i++ ){
//         printf("%d * %d = %d\n",a,i,a*i);
//     }
//     return 0;

// }


// #include<stdio.h>
// void printhello();
// int main(){
//     printhello();
//     printhello();
//     printhello();
//     return 0;

// }
// void printhello(){
//     printf("WORLD");
// }


// #include<stdio.h>
// void namaste();
// void bonjour();
// int main(){
//     printf("ENTER F FOR FRENCH & N FOR NAMASTE ");
//     char ch;
//     scanf("%c",&ch);
//     if(ch == 'N'){
//         namaste();

//     }
//     else{
//         bonjour();

    
//     }
//     return 0;



// #include <stdio.h>

// int x = 5;
// int *ptr = &x;

// int main() {
//     printf("%d\n", *ptr);
//     return 0;
// }


// #include<stdio.h>
// int main (){
//     float price[3];
//     printf("ENTER THE 3 PRICES : ");
//     scanf("%f",&price[0]);
//     scanf("%f",&price[1]);
//     scanf("%f",&price[2]);
    
//     printf("TOTAL PRICE 1:%f\n",price[0]+(0.18*price[0]));
//     printf("TOTAL PRICE 2:%f\n",price[1]+(0.18*price[1]));
//     printf("TOTAL PRICE 3:%f\n",price[2]+(0.18*price[2]));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int aadhar[5];
//     int *ptr = &aadhar[0];
//     for(int i = 0 ; i<=5 ; i++){
//         printf("%d index : ", i);
//         scanf("%d",(ptr+i));


//     }
//     for(int i = 0 ; i<=5 ; i++){
//         printf("%d index : ",%d\n , i , *(ptr+i));
//     }
//     return 0;
// }
    
// #include<stdio.h>
// int main(){
//     int a; 
       
//     printf("ENTER THE NUMBER ");
//     scanf("%d",&a);
//     int temp =  a;
//     int revnum = 0;
//     int lastdigit;
//     while(temp>0){
//         lastdigit = temp%10;
//         temp = temp/10;
//         revnum = revnum*10 + lastdigit;
        

//     }
//     printf("%d",revnum);
//     return 0;

// }


  // #include<stdio.h>
  // int main(){
  //   printf("HELLO WORLD");
  //   return 0;

  // }
  