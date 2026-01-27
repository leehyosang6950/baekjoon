#include <stdio.h>
int main() {
    int n, m, temp;
    scanf("%d %d", &n, &m);
    
    int arr[n + 1];
    for (int i = 1; i <= n; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}