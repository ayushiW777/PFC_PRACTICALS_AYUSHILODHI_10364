#include <stdio.h>
int main() {
     // Ayushi Lodhi
    // 10364
    // output :
    // Enter the number : 5
    // Sum of even numbers = 6
    int n, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
    if(i % 2 != 0) continue;   
    sum += i;                  
    }
    printf("Sum of even numbers = %d\n", sum);
    return 0;
}