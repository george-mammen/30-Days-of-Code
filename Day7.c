/* 
Task : Given an array, , of  integers, print 's elements in reverse order as a single line of space-separated numbers.
*/

#include <stdio.h>
#include <string.h>


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i < n ; i++) {
        scanf("%d",&arr[i]);
        
    }
    for (int i = 0;i < n ; i++) {
        printf("%d ",arr[n-1-i]);
    }

}
