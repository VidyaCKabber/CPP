#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    vector<int>v;
    int N,num;
    cin >> N;
    
    for(int i=0 ; i< N ; i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    
    for (auto x : v)
        cout << x << " ";
        
    return 0;
 
}
