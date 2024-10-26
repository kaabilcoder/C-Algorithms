#include <stdio.h>

int countPaths(int m, int n) {
    if (m == 1 || n == 1)
        return 1; // Only one way to reach the destination

    return countPaths(m - 1, n) + countPaths(m, n - 1); // Move down or right
}

int main() {
    int m = 3; // Number of rows
    int n = 3; // Number of columns
    printf("Number of unique paths: %d\n", countPaths(m, n));
    return 0;
}
