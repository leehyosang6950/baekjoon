#include<stdio.h>
int main(void){
    int sum = 0;
    int n, total, thing, count;
    scanf("%d", &total);
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &thing, &count);
        sum += thing * count;
    }
    if(sum == total) printf("Yes");
    else printf("No");
    return 0;
}