#include <stdio.h>

int main(void) {
    int s[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d",&s[i]);
    }

    int best = s[0];
    for (int i = 1; i < 5; i++) {
        if (s[i] > best) {
            best = s[i];
        }
    }
    printf("%d\n", best);

    return 0;
    }
