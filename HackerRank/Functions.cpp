/*
Input will contain four integers - a,b,c,d one per line.
Output : Return the greatest of the four integers. 
*/

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int e = a > b ? a : b;
    int f = c > d ? c : d; 
    int ans = e > f ? e : f;
    return ans;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
