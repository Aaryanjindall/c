// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("ENTER THE NUMBERS ");
//     scanf("%d %d ",&a,&b);
//     printf("%d",a>b);
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int a = 5;
//     int b = 6;
//     int c = 8;
//     printf("%d\n",!(a<b)&&(b<c));
//     printf("%d",(a<b)||(b<c));
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a, b, c, max;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     max = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
//     printf("MAX NUMBER IS %d\n", max);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int age;
//     printf("ENTER AGE ");
//     scanf("%d", &age);
//     if(age>18){
//         printf("ADULT ");

//     }
//     else{
//         printf("NOT ADULT ");

//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("ENETR DAY INITIAL ");
//     scanf("%c",&ch);
//     switch(ch){
//         case 'M':
//         printf("MONDAY \n");
//         break;
//         case 'T':
//         printf("TUESDAY \n");
//         break;
//         case 'W':
//         printf("WEDNESDAY \n");
//         break;
//         case 'R':
//         printf("THURSDAY \n");
//         break;
//         case 'F':
//         printf("FRIDAY \n");
//         break;
//         case 'U':
//         printf("SATURDAY \n");
//         break;
//         case 'S':
//         printf("SUNDAY \n");
//         break;
//         default:
//         printf("NOT A VALID DAY ");
        

//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("ENTER N :");
//     scanf("%d",&n);
//     int i = 1;
//     while(i<=n){
//         printf("%d",i);
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("ENTER N : ");
//     scanf("%d",&n);
//     int i = 1;
//     while(i<=n){
//         if(i%2 == 0){
//             printf("%d\n",i);

//         }
//         i++;

//     }
//     return 0;
// }


//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("ENTER N :");
//     scanf("%d",&n);
//     int i = 1;
//     int sum = 0;
//     while(i<=n){
//         printf("%d\n",i);
//         sum += i;
//         i++;
        
        
//     }
//     printf("%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,sum=0,i;
//     printf("ENTER N :");
//     scanf("%d",&n);
//     while(n>0){
//         i = n%10;
//         n = n/10;
//         sum += i;
        


//     }
//     printf("%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,fact = 1;
//     printf("ENTER N :");
//     scanf("%d",&n);
//     while(n>=1){
//         fact = fact*n;
//         n--;


// }
//     printf("%d",fact);
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int n, revnum = 0, lastn;
//     printf("ENTER THE NUMBER : ");
//     scanf("%d",&n);
//     while(n>0){
//         lastn = n%10;
//         n = n/10;
//         revnum = revnum*10 + lastn;
        
//     }
//     printf("%d",revnum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n, revnum = 0, lastn,x;
//     printf("ENTER THE NUMBER : ");
//     scanf("%d",&n);
//     x = n;
//     while(n>0){
//         lastn = n%10;
//         n = n/10;
//         revnum = revnum*10 + lastn;
        
//     }
//     printf("%d",revnum);
    

//     if(revnum == x){
//         printf("\nNUMBER IS PALINDROME");

//     }
//     else{
//         printf("\nNOT PALINDROME");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i , sum = 0,x;
//     printf("ENTER THE VALUE: ");
//     scanf("%d",&i);
//     x = i;
//     while(i>0){
//         sum = sum + (i%10)*(i%10)*(i%10);
//         i = i/10;

//     }
//     printf("%d",sum);
//     if(sum == x){
//         printf("\nNUMBER IS ARMSTRONG" );
    
    
//     }
//     else{
//         printf("\nNUMBER IS NOT ARMSTRONG ");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n ;
//     printf("ENTER THE VALUE OF n:");
//     scanf("%d",&n);
//     int i = 1;
//     while(i<=n){
//         printf("%d * %d = %d\n",n,i,n*i);
//         i++;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i,j;
//     i = 1;
//     while(i<=5){
//         printf("\n");
//         j = 1;
//         while(j<=i){
//             printf("%d",j);
//             j++;
//         }
//         i++;
//     }
//     return 0;
     
// }

// #include<stdio.h>
// int main(){
//     int i,j,b;
//     i = 1;
//     while(i<=5){
//         printf("\n");
//         b = 1;

//         while(b<= 5-i){
//             printf(" ");
//             b++;
//         }
        
//         j = 1;
//         while(j<=i){
//             printf("%d",j);
//             j++;
//         }
//         i++;
//     }
//     return 0;
     
// }


// #include<stdio.h>
// int main(){
//     int n,j;
//     printf("ENTER NO> OF ROWS ");
//     scanf("%d",&n);
//     while(n>0){
//         printf("\n");
//         j = 1;
//         while(j<=n){
//             printf("*");
//             j++;
//         }
//         n = n-1;


//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,j,b;
//     i = 5;
//     while(i>0){
//         printf("\n");
//         b = 0;
//         while(b<=5-b){
//             printf(" ");
//             b++;

//         }
//         j = 1;
//         while(j<=i){
//             printf("*");
//             j++;
//         }
//         i--;

//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a[10],i;
//     for(i=0;i<10;i++)
//     {
//         printf("\nENTER NUMBER:");
//         scanf("%d",&a[i]);
//     }
//     printf(("\nARRAY ELEMENTS ARE: "));
//     for(i=0;i<10;i++){
//         printf("\n%d",a[i]);

//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a[10],i,sum=0;
//     for(i=0;i<10;i++){
//         printf("\nEnter number: ");
//         scanf("%d",&a[i]);

//     }
//     for(i=0;i<10;i++){
//         sum = sum +a[i];
        
//     }
//     printf("%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i, even=0 ,odd=0 , a[10];
//     for(i=0;i<10;i++){
//         printf("\nEnter number: ");
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<10;i++){
//         if (a[i]%2==0){
//             even++;
//         }
//         else{
//             odd++;
//         }
        
//     }
//     printf("ODD NUMBERS ARE %d AND EVEN NUMBERS ARE %d",odd, even );


// }

// #include<stdio.h>
// int main(){
//     int even, odd , a[10],i,sum = 0,product = 1;
//     for(i=0;i<10;i++){
//         printf("\nENTER THE NUMBER ");
//         scanf("%d",&a[i]);

//     }
//     for(i=0;i<10;i++){
//         if(a[i]%2==0){
//             sum = sum + a[i];
//         }
//         else{
//             product = product * a[i];
//         }

//     }
//     printf("SUM OF EVEN NUMBERS IS %d AND PRODUCT OF ODD NUMBERS IS %d ",sum , product );
//     return 0;


// }

// #include<stdio.h>
// int main(){
//     int a[10],i;
//     for(i=0;i<10;i++){
//         printf("\nENTER NUMBER ");
//         scanf("%d",&a[i]);


//     }
//     for(i=0;i<10;i+=2){
//         printf("\n%d",a[i]);

//     }
//     return 0;

// }


// #include<stdio.h>
// int main(){
//     int a[10],i;
//     for(i=0;i<10;i++){
//         printf("\nENTER NUMBER:");
//         scanf("%d",&a[i]);

//     }
//     for(i=9;i>0;i--){
//         printf("\n%d",a[i]);
//     }
//     return 0;


// }


// #include<stdio.h>
// int main(){
//     int a[10],flag =0,i, key ,pos;
//     for(i=0;i<10;i++){
//         printf("\nENTER NUMBER ");
//         scanf("%d",&a[i]);

//     }
//     printf("\nENTER NUMBER TO SEARCH ");
//     scanf("%d",&key);

//     for(i=0;i<10;i++){
//         if(a[i]==key){
//             pos=i+1;
//             flag=1;
//             break;
//         }

//     }
//     if(flag==1){
//         printf("\nNUMBER FOUND AT %d POSITION ",pos);
//     }
//     else{
//         printf("\nNUMBER NOT FOUND ");
//     }
//     return 0;
    
//     }


// #include<stdio.h>
// int main(){
//     int a[10],i,flag =0,key;
//     for(i=0;i<10;i++){
//         printf("\nENTER NUMBER ");
//         scanf("%d",&a[i]);

//     }
//     printf("\nENTER TO SEARCH AND COUNT ");
//     scanf("%d",&key);
//     for(i=0;i<10;i++){
//         if(key == a[i]){
//             flag++;
             
            
//         }
        
//     }
//     printf("\nFREQUENY OF GIVEN NUMBER IS %d ",flag);
//     return 0;

// }


// #include<stdio.h>
// int main(){
//     int max,i,a[10];
//     for(i=0;i<0;i++){
//         printf("\nENTER NUMBER ");
//         scanf("%d",&a[i]);

//     }
//     max =a[0];
//     for(i=1;i<10;i++){
//         if(a[i]>max){
//             max = a[i];
//         }
//     }
//     printf("\nMAX NUMBER IS %d",&max);
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int a[10],i,j,t;
//     for(i=0;i<10;i++){
//         printf("\nENTER NUMBER ");
//         scanf("%d",&a[i]);

//     }
//     for(i=0;i<9;i++){
//         for(j=i+1;j<10;j++){
//             if(a[i]>a[j]){
//                 t=a[i];
//                 a[i]=a[j];
//                 a[j]=t;
//             }
//         }
//     }
//     printf("\nARRAY AFTER SORTING IS ");
//     for(i=0;i<10;i++){
//         printf("\n%d",a[i]);
//     }
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int a[10],i,j,t,key,index;
//     for(i=0;i<10;i++){
//         printf("\nENTER NUMBER ");
//         scanf("%d",&a[i]);

//     }
//     printf("\nENTER NUMBER TO REMOVE ELEMENT ");
//     scanf("%d",&key);
//     index = 9;
//     for(i=0;i<=index;i++){
//         if(a[i]==key){
//             for(j=i+1;j<=index;j++){
//                 a[j-1]=a[j];
                
//             }
//              i--;
//                 index--;
//         }
//     }
//     printf("\nAFTER REMOVING ");
//     for(i=0;i<=index;i++){
//         printf("\n%d\n",a[i]);
//     }
//     return 0;

// }



#include <stdio.h>

int main() {
    int arr[10],i;
    int num, pos;

    // Input 10 numbers into the array
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number ");
        scanf("%d", &arr[i]);
    }

    // Input number to insert and position
    printf("\nEnter the number to insert: ");
    scanf("%d", &num);
    printf("Enter the position to insert (0-9): ");
    scanf("%d", &pos);

    // Shift elements to make space for the new number
    for (i = 9; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the number at the specified position
    arr[pos] = num;

    // Display the updated array
    printf("\nArray after insertion:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}




// #include<stdio.h>
// int main(){
//     int a[3][3],i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER VALUE FOR 2D ARRAY ");
//             scanf("%d",&a[i][j]);

//         }
//     }
//     printf("\n2D ARRAY ELEMENTS ARE ");
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",a[i][j]);

//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[3][3],i,j,even=0,odd=0;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER VALUE FOR 2D ARRAY ");
//         scanf("%d",&a[i][j]);

//         }
//     }    
//         for(i=0;i<3;i++){
//             printf("\n");
//             for(j=0;j<3;j++){
//                 printf("%d\t",a[i][j]);
//                 if(a[i][j]%2==0){
//                     even++;
//                 }
//                 else{
//                     odd++;
//                 }
//             }

//         }
    
//     printf("\nTOTAL EVEN %d AND TOTAL ODD %d ",even,odd);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a[3][3],i,j,sum=0,product=1;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER VALUES FOR 2D ARRAY ");
//             scanf("%d",&a[i][j]);

//         }
//     }
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t
         
//             ",a[i][j]);
//             if(a[i][j]%2==0){
//                 sum = sum + a[i][j];
//             }
//             else{
//                 product = product * a[i][j];

//             }
//         }
//     }
//     printf("\nSUM OF ALL ELEMENTS IS %d AND PRODUCT OF ODD NUMBERS IS %d",sum,product);




// }



// #include<stdio.h>

// int main() {
//     int a[3][3], i, j, key, found = 0; // added found variable to track if element is found
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("\nENTER 2D ARRAY ELEMENTS ");
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (i = 0; i < 3; i++) {
//         printf("\n");
//         for (j = 0; j < 3; j++) {
//             printf("%d\t", a[i][j]);
//         }
//     }
//     printf("\nENTER ELEMENT TO SEARCH ");
//     scanf("%d", &key);
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             if (a[i][j] == key) {
//                 printf("\nELEMENT FOUND AT a[%d][%d]", i, j);
//                 found = 1; // update found status
//             }
//         }
//     }
//     if (!found) // if element is not found
//         printf("\nELEMENT NOT FOUND ");
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][3],c[3][3],i,j;
    
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER VALUES FOR FIRST MATRIX : ");
//             scanf("%d",&a[i][j]);
            
            

//         }
        
//     }
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",a[i][j]);

//         }
//     }
// // this is for a


    
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER VALUES FOR SECOND MATRIX : ");
//             scanf("%d",&b[i][j]);
            
            

//         }
        
//     }
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",b[i][j]);
//         }
//     }



//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("\nADDITION OF MATRIX IS : ");
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",c[i][j]);

//         }
//     }
//     return 0;

    
// }



// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][3],c[3][3],i,j,k;
    
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER VALUES FOR FIRST MATRIX : ");
//             scanf("%d",&a[i][j]);
            
            

//         }
        
//     }
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",a[i][j]);

//         }
//     }
// // this is for a


    
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER VALUES FOR SECOND MATRIX : ");
//             scanf("%d",&b[i][j]);
            
            

//         }
        
//     }
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",b[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             c[i][j]=0;
//             for(k=0;k<3;k++){
//                 c[i][j] += a[i][k]*b[k][j];

//             }

//         }
//     }
//     printf("\nMULTIPLICATION OF MATRIX IS : ");
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",c[i][j]);
//         }
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a[3][3],i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER VALUES FOR ARRAY ");
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\nORIGINAL MATRIX IS: ");
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",a[i][j]);
//         }
// }
// printf("\nMATRIX AFTER TRANSPOSE IS: ");
// for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",a[j][i]);
//         }
// }
// return 0;
// }



// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][3],i,j,flag=0;
//     printf("\nENTER ELEMENTS FOR FIRST MATRIX: ");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER VALUE: ");
//             scanf("%d",&a[i][j]);

//         }
//     }
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",a[i][j]);
//         }  
//     }
//     printf("\nENTER ELEMENTS FOR SECOND MATRIX: ");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER VALUE: ");
//             scanf("%d",&b[i][j]);

//         }
//     }
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",b[i][j]);
//         }
//     }
// for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if(a[i][j]!=b[i][j]){
//                 flag = 1 ;

//             }
//         }

// }
// if(flag == 1 ){
//     printf("\nMATRIX ARE NOT IDENTICAL ");

// }
// else{
//     printf("\nMATRIX ARE IDENTICAL ");
// }
// return 0 ;
// }


// #include<stdio.h>
// int main(){
//     int a[3][3],i,j,flag = 0;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\nENTER NUMBER: ");
//             scanf("%d",&a[i][j]);

//         }
//     }
//     for(i=0;i<3;i++){
//         printf("\n");
//         for(j=0;j<3;j++){
//             printf("%d\t",a[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             if((i>j)&&a[i][j]!=0){
//                 flag = 1;
//             }
//         }
//     }
//     if(flag == 1 ){
//         printf("\nNOT AN UPPER TRIANGULAR MATRIX ");

//     }
//     else{
//         printf("\nAN UPPER TRIANGULAR MATRIX ");
//     }
        






//     return 0;


            
// }


// #include<stdio.h>
// int main(){
//     char a[50];
//     printf("ENTER YOUR NAME : ");
//     gets(a);
//     printf("\nYOUR NAME IS %s",a);
//     return 0 ; 
// }


// #include<stdio.h>
// int main(){
//     char a[50];
//     int i = 0; 
//     printf("\nENTER YOUR NAME ");
//     gets(a);
//     for(;a[i]!=0;){
        

//         i++;

//     }
//     printf("\nTOTAL NUMBERS OF CHARACTERS = %d",i);
//     return 0;
//     }



//  #include<stdio.h>
//  int main(){
//     int i = 0,word = 1 ;
//     char a[100];
//       printf("\nENTER YOUR NAME ");
//       gets(a);
//     for(;a[i]!='\0';){
//         if((a[i]==' ')){

//             word++;

//         }
        
        

//         i++;

//     }
//     printf("\nTOTAL WORDS OF CHARACTERS = %d",word );
//     printf("\nTOTAL NUMBERS OF CHARACTERS = %d",i);
//     return 0;
//     }

    
// #include<stdio.h>
// int main(){
//     char a[50];
//     int i,vow=0,cons=0;
//     printf("ENTER SOMETHING ");
//     gets(a);
//     while(a[i]!='\0'){
//         if((a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122)){
//             if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u'|| a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U'){
//                 vow++;
//             }
//             else{
//                 cons++;
//             }

//         }
//         i++;
//     }
//     printf("\nNO OF VOWELS ARE %d AND CONSONANTS ARE %d",vow,cons);
//     return 0;
// }



// #include<stdio.h>

// int main() {
//     char a[50], b[50];
//     int i = 0;
    
//     printf("ENTER NUMBER: ");
//     gets(a);
    
//     while (a[i] != '\0') {
//         b[i] = a[i];
//         i++;
//     }
//     b[i] = '\0'; // Terminate the copied string with null character
    
//     printf("\nCOPIED STRING IS %s", b); // Print the entire copied string

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[100]="ramerh";
//     int i ;
//     printf("len of string is %d",strlen(s1));
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s2[100]="ramesh";
//     char s1[100];
//     strcpy(s1,s2);
//     printf("ANSWER IS %s",s1);
//     return 0;

// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s2[100]="ramesh ";
//     char s1[100] = "kumar";

//     strcat(s2,s1);
//     printf("ANSWER IS %s",s2);
//     return 0;

// }



// #include<stdio.h>
// int main(){
//     char a[50];
//     int i=0;
//     printf("\nENTER STRING : ");
//     gets(a);
//     while(a[i]!='\0'){
//         a[i] = a[i]- 32;
//         i++;
//     }
//     printf("\nSTRING IN UPPER CASE IS: %s ",a);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     char a[50];
//     int i=0;
//     printf("\nENTER STRING : ");
//     gets(a);
 
//     printf("\nSTRING IN UPPER CASE IS: %s ",strupr(a));
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[50],b[50];
//     printf("\nENTER FIRST STRING ");
//     gets(a);
//     printf("\nENTER SECOND STRING ");
//     gets(b);
//     if(strcmp(a,b)==0){
//         printf("\nEQUAL STRINGS ");

//     }
//     else if(strcmp(a,b)>0){
//         printf("\nFIRST STRING IS GREATER ");
//     }
//     else{
//         printf("\nSECOND IS GREATER ");
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[50],b[50];
//     printf("\nENTER FIRST STRING ");
//     gets(a);
//     printf("\nENTER SECOND STRING ");
//     gets(b);
//     if(strcmpi(a,b)==0){
//         printf("\nEQUAL STRINGS ");

//     }
//     else if(strcmpi(a,b)>0){
//         printf("\nFIRST STRING IS GREATER ");
//     }
//     else{
//         printf("\nSECOND IS GREATER ");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     char a[50];
//     int i=0;
//     printf("\nENTER STRING : ");
//     gets(a);
 
//     printf("\nSTRING IN UPPER CASE IS: %s ",strlwr(a));
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[100] = "ramesh";
//     printf("%s",strupr(strrev(a)));
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[100] = "ramesh";
//     char c[100];
//     int i,b,j;
//     b = strlen(a);
//     for(i=b-1;i>=0;i--){
//         c[j]=a[i];
//         j++;
        



//     }
//     printf("\n%s",c);
//     return 0;

// }








