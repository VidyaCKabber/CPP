/*
The function is declared with a void return type, so there a is no value to return. Modify the values in memory so that contains their sum and b contains their absoluted difference.

a = a + b;
b = |a - b|
*/
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int c = *a;
    *a = *a + *b;
    *b = c - *b;
    if(*b < 0){
        *b = *b * -1;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
