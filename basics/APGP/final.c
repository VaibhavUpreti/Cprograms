#include <stdio.h>
#include <math.h>
int main() {
    int a, r, n, c, sum=0, i;
    printf("Enter number of terms in AP&GP series\n");
    scanf("%d", &n); 
    printf("Enter first term and common ratio(or common diff) of AP& GP series\n");
    scanf("%d %d", &a, &r);
    c = a;
    printf("GP SERIES\n");
    for(i = 0; i < n; i++) {
        printf("%d ", c);
        sum += c;
        c = c * r;
    }
    c = a;
    printf("AP SERIES  \n");
    for(i = 0; i < n; i++) {
        printf("%d ", c);
        sum += c;
        c = c + r;
    }
    printf("\nSum of AP till %d terms is %d\n", n, sum);
    printf("\nSum of the GP series till %d terms is %d\n", n, sum);

    return 0;
}
