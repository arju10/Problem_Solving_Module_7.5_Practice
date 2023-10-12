#include<stdio.h>
int main(){
    long long int N;
    scanf("%lld",&N);
    int A[N];
    
    for(int i = 0; i<N; i++){
        scanf("%d",&A[i]);
    }

    long long int sum = 0;
    for(int i = 0; i<N; i++){
        sum = sum + A[i];
    }
    if(sum < 0 ){
        sum = sum*-1;
        printf("%lld",sum);
    }
    else{
        printf("%lld",sum);
    }
    return 0;
}