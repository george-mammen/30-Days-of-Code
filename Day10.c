// Maximum number of 1's in a Number when converted to binary

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int max = 0,sum = 0; 

    while (n > 0) {
        if (n % 2 == 1) {
            sum++;
            if (sum > max) {
                max = sum;
            }
        } else {
            sum = 0;
        }
        n = n / 2;
    }
    printf("%d",max);
}   
