#include<stdio.h>
int main(void){
    int n, a, b, sum = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        a += b;
        printf("%d\n", a);
    }
    return 0;
}