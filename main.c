#include <stdio.h>

int main(){
    // Euler #1
    int ans1 = 0;
    for (int i = 3; i < 1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            ans1 += i;
        }        
    }
    printf("Euler 1: %d \n", ans1);

    // Euler #2
    int num1 = 1;
    int num2 = 2;
    int ans2 = 0;
    while (num2 < 4000000){
        if (num2 % 2 == 0){
            ans2 += num2;
        }
        int temp = num2;
        num2 = num1 + num2;
        num1 = temp;
    }
    printf("Euler 2: %d \n", ans2);

    // Euler #3
    long long n = 600851475143;
    long long i = n;
    for (i = 3; n > 1; i += 2)
        while (n % i == 0)
            n /= i;
    printf("Euler 3: %lld \n", i - 2);

    return 0;
}
