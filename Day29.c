int main(){
    int n,a,b;
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        scanf("%d %d",&a,&b);
        int max = 0;
        
        for(int i = 1;i < a; i++){
            for(int j = i + 1;j <= a;j++){
                if ((i & j) < b && (i & j) > max){
                    max = i & j;
                }
            }
        }
        printf("%d\n", max);
    }
}
