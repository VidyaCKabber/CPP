/*
Input Format

The first line contains two space-separated integers denoting the respective values of
n (the number of variable-length arrays) and q (the number of queries).
Each line i of n the subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array ) and j (an index in the array referenced by a[i]) for a query.

Output :
For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index j of the array referenced by a[i]. There should be a total of q lines of output.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,q;
    cin>>n>>q;  
    vector< vector<int> > a(n);
        
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        
        for(int j=0; j<k; j++){
            int data;
            cin >> data;
            a[i].push_back(data);
        }
    }
    
    for(int b=0; b<q; b++){
        int i,j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}
