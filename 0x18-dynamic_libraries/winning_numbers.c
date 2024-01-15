#include <stdio.h>

unsigned int rand(void) {
    static unsigned int numbers[] = {9, 8, 10, 24, 75, 9};
    static int count = 0;

    if (count < 6) {
        return numbers[count++];
    } else {
        return 1; /* Default value after winning numbers */
    }
}
