#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int maxDominoes = (M * N) / 2;         // formula to calculate total number of dominoes placed
    
    printf("%d\n", maxDominoes);
    return 0;
}
