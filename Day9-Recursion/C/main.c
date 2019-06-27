#include <stdio.h>

int factorial(int n){
    
    return (n == 1) ? 1 : n * factorial(n - 1);
    
};

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}