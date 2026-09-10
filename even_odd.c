#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;

    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    num = atoi(argv[1]);

    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}
