#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, temp;
    int tomb[10] = {2, 3, 4, 7, 6, 5, 10, 9, 8, 1};
    printf("Az eredeti tomb:\n");
    for (i = 0; i < 10; ++i) {
        printf("%d ",tomb[i]);
    }
    printf("\nA rendezett tomb:\n");
    for (i = 0; i < 9; ++i) {   // Legfeljebb 9-szer kell a szomszédcseréket végrehajtani,
                                // utána már biztos, hogy sorban lesznek az elemek. (Lehet,
                                // hogy kevesebb menet is elég, de biztos ami biztos.
        for (j = 0; j < 9; ++j) {   // 10 elem esetén 9 pár lesz, amit cserélhetünk
            if (tomb[j] > tomb[j+1]) {
                temp = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = temp;
            }
        }
    }
    for (i = 0; i < 10; ++i) {
        printf("%d ",tomb[i]);
    }

    return 0;
}