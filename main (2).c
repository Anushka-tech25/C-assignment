#include <stdio.h>
#include "header.h" 

int main() {
    int n,a,l;
    printf("Enter number to check even/odd :-\n");
    scanf("%d",&l);
    if(evenodd(l)==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }

    printf("Enter number to find factorial :- ");
    scanf("%d",&n);
    printf("%d\n",factorial(n));

    printf("Enter number to check prime :- ");
    scanf("%d",&a);
    if (prime(a)==1){
        printf("prime");
    }
    else{
        printf("Not");
    }

}
