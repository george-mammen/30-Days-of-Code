/*Task :
Given an integer, , perform the following conditional actions:

If  is odd, print Weird
If  is even and in the inclusive range of  to , print Not Weird
If  is even and in the inclusive range of  to , print Weird
If  is even and greater than , print Not Weird */

#include <math.h>
#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    if(n % 2 == 1){
        printf("Weird");
    }
    else if(n % 2 == 0 && n>=2 && n<=5){
        printf("Not Weird");
    } 
    else if(n % 2 == 0 && n>=6 && n<=20 ){
        printf("Weird");
    }
    else if(n % 2 == 0 &&  n > 20 ){
        printf("Not Weird");
    }
}
