#include<stdio.h>
#include<string.h>
int main(){
    char a[100] = "ramesh";
    char c[100];
    int i,b,j;
    b = strlen(a);
    for(i=b-1;i>=0;i--){
        c[j]=a[i];
        j++;
        



    }
    printf("\n%s",c);
    return 0;

}
