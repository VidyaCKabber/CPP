/*
Print the integers of the array in the reverse order, space-separated on a single line.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    int arr[N];
    
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j=N-1;j >=0 ;j--){
        printf("%d ",arr[j]);
    }
    
    return 0;
}
