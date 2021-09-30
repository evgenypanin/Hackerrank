#include <stdio.h>
#include <cstdlib>

void update(int *a,int *b) {
    // Complete this function
    int t1, t2;
    t1 = *a + *b;
    t2 = *a - *b;
    *a = t1;
    *b = abs(t2);
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
