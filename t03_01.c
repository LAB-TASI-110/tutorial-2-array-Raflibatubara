// 12S25008-Rafli Batubara
#include <stdio.h>

int main() {
    int n;
    int current_num;
    int min_val;
    int max_val;

    scanf("%d", &n);

    if (n > 0) {
        scanf("%d", &current_num);
        min_val = current_num;
        max_val = current_num;

        for (int i = 1; i < n; i++) {
            scanf("%d", &current_num);

            if (current_num < min_val) {
                min_val = current_num;
            }

            if (current_num > max_val) {
                max_val = current_num;
            }
        }

        printf("%d\n", min_val);
        printf("%d\n", max_val);
    }

    return 0;
}
