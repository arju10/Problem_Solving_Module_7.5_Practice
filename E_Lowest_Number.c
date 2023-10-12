#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d ",&A[i]);
    }

    int minNumber = A[0];
    int minPosition = 1;
    for(int i = 1; i<N; i++){
        if(A[i] < minNumber ){
            minNumber = A[i];
            minPosition = i + 1;
        }
    }
    printf("%d %d\n",minNumber, minPosition);

    return 0;
}