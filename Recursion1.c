/* fac n number */
/*Tuthor : MD.ABU SAYED */
#include <stdio.h>
int fac(int n);
int main(){
    int n,f;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    f=fac(n);
    printf("Fac=%d",f);
}
int fac(int n){
    if(n<=1)
       return 1;
    else
       return n*fac(n-1);    /*self call  to function sum() */
}
