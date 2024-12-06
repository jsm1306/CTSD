#include <stdio.h>

// Function to calculate GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find K-sized subset with maximum GCD
void findMaxGCDSubset(int N, int K) {
    // Choose the largest K elements to maximize the GCD
    int i;
    for (i = N; i >= N - K + 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        // Output the K-sized subset with maximum GCD
        findMaxGCDSubset(N, K);
    }

    return 0;
}

