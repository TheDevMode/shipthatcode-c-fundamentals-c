#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[100];
    fgets(buf, sizeof buf, stdin);

    /* TODO: fgets kept the newline it stopped on. If buf still ends with
       one, overwrite that character with '\0' so strlen stops before it. */
    if (buf[strlen(buf) - 1] == '\n') {
        buf[strlen(buf) - 1] = '\0';
    }


    printf("%zu\n", strlen(buf));
    return 0;
}
