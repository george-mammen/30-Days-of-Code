#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {   
        int n;
        scanf("%d",&n);
        
        for (int i = 0; i < n; i++) {
            int flag = 0;
            int num;
            scanf("%d", &num);
            
            if (num < 2) {
                printf("Not prime \n");
            }
            else {
                for (int i = 2; i <= sqrt(num) ; i++){
                    if ( num % i == 0){
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0){
                   printf("Prime \n");
                }
                else {
                   printf("Not prime \n");
                }
            }

        }
}

