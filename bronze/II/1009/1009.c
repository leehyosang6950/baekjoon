#include <stdio.h>
int main(){
    int T, t;
    scanf("%d", &T);
    for(int i= 0 ; i< T; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        int result = 1;
        for(int j = 0; j < b; j++){
            result = (result * a) % 10;
        }
        if(result == 0) result = 10;
        printf("%d\n", result);
    }
    return 0;
}
//아니 잔디 안올라감