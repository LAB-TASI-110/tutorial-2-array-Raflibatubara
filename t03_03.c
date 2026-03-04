// 12S25008-Rafli Batubara
#include <stdio.h>

int main() {
    int n;
    int current_num;
    int min_val;
    int max_val;
    int prev_num;
    double lowest_avg_pair;
    double highest_avg_pair;
    int i;

    scanf("%d", &n);

    if (n > 0) {
        scanf("%d", &current_num);
        min_val = current_num;
        max_val = current_num;
        prev_num = current_num;

        for (i = 1; i < n; i++) {
            scanf("%d", &current_num);

            if (current_num < min_val) {
                min_val = current_num;
            }

            if (current_num > max_val) {
                max_val = current_num;
            }

            double current_pair_avg = (double)(prev_num + current_num) / 2.0;

            if (i == 1) {
                lowest_avg_pair = current_pair_avg;
                highest_avg_pair = current_pair_avg;
            } else {
                if (current_pair_avg < lowest_avg_pair) {
                    lowest_avg_pair = current_pair_avg;
                }
                if (current_pair_avg > highest_avg_pair) {
                    highest_avg_pair = current_pair_avg;
                }
            }
            
            prev_num = current_num;
        }

        printf("%d\n", min_val);
        printf("%d\n", max_val);

        if (n < 2) {
            printf("0.00\n");
            printf("0.00\n");
        } else {
            printf("%.2f\n", lowest_avg_pair);
            printf("%.2f\n", highest_avg_pair);
        }
    }

    return 0;
}
