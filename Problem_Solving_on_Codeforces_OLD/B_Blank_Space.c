#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int m;
        scanf("%d", &m);
        int a[m];
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[j]);
        }
        int count = 0;
        int bount = 0;
        int flag = 1;

        for (int k = 0; k < m; k++) {
            if (a[k] == 0) {
                count++;
            } else if (a[k] == 1) {
                if (count > bount) {
                    bount = count;
                }
                count = 0;
            }
        }
        if (count > bount) {
            bount = count;
        }
        printf("%d\n", bount);
    }

    return 0;
}