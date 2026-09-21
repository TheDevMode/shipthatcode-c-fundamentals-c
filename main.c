#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    // Loop and sum, then print.
    long long results = 0;
    for (int i = 1; i <= n; i++) {
        results += i;
    }
    printf("%lld\n", results);
    return 0;
}
