#include<stdio.h>
//fibonacci sequence for this algorithm: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610...

int fib(int n) {
    int a, b, c;
    a = 0;
    b = 1;
    c = 0;
    for (int i = 0; i < n-1; i++) {
        a = b+c;
        b = c;
        c = a;
    }
    return a;
}



int main(void){
    int n;
    printf("Enter the # of the fibonacci number in sequence:");
    scanf("%d", &n);
    int r = fib(n);
    printf("%d\n", r);

}