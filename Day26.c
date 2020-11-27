#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int da, ma, ya, de, me, ye;
    int fine = 0;
    scanf("%d %d %d", &da,&ma,&ya);
    scanf("%d %d %d", &de,&me,&ye);
    
    if ( ya == ye) {
        if (ma == me & da > de) {
            fine = 15 * (da - de);
        }
        else if ( ma > me ) {
            fine = 500 * (ma - me);
        }
    }
    else if ( ya > ye ) {
        fine = 10000;
    }
    printf("%d",fine);
    
}
