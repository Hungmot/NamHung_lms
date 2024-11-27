#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int n, m;
        
        scanf("%d %d", &n, &m);
        
        int *A = (int *)malloc(n * sizeof(int));
        int *B = (int *)malloc(m * sizeof(int));
        int *C = (int *)malloc((n + m) * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < m; i++) {
            scanf("%d", &B[i]);
        }
        for (int i = 0; i < n; i++) {
            C[i] = A[i];
        }
        for (int i = 0; i < m; i++) {
            C[n + i] = B[i];
        }
        qsort(C, n + m, sizeof(int), compare);
    	for (int i = 0; i < n + m; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
        free(A);
        free(B);
        free(C);
    }
    
    return 0;
}

