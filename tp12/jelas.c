#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int k;
        scanf("%d", &k);

        for (int j = 0; j < k; j++) {
            char kata[100];  // asumsi panjang maksimum kata adalah 100 karakter
            scanf("%s", kata);
            if (j == k - 1) {
                printf("%s\n", kata);
            } else {
                printf("%s ", kata);
            }
        }
    }

    return 0;
}
