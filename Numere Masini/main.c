#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    char k = 'A';
    char l = 'A';
    char m = 'A';
    for (int j = 0; j <= 99; ++j) {
        if (k == 'Z' && l == 'Z' && m == 'Z' && i == 9 && j == 9) {
            printf("OT %d%d %c%c%c\n", i, j, k, l, m);
            break; // or return 0; -- i like break because return 0 is outside
        }
        if (j == 9) {
            if (i == 9) {
                printf("OT %d%d %c%c%c\n", i, j, k, l, m);
                ++m;
                i = 0;
                j = 0;
            }
            ++i;
            j = 0;
        }
        if (m == 'Z') {
            printf("OT %d%d %c%c%c\n", i, j, k, l, m);
            i = 1;
            j = 0;
            ++l;
            m = 'A';
        }
        if (l == 'Z') {
            printf("OT %d%d %c%c%c\n", i, j, k, l, m);
            i = 1;
            j = 0;
            ++k;
            m = 'A';
            l = 'A';
        }
        printf("OT %d%d %c%c%c\n", i, j, k, l, m);
    }

    return 0;
}
