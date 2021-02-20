#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {   
    int N,Q,num,inputs;
    vector<int>arr; 
    vector<int>::iterator is_ele_present,lower;
    
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        arr.push_back(num);        
    }
    
    cin >> Q;
    sort(arr.begin(), arr.end());
    for(int j=0; j<Q; j++){
        cin >> inputs;
        is_ele_present = find (arr.begin(), arr.end(), inputs); 
        
        int pos = is_ele_present - arr.begin();
        
        if ( pos >= arr.size()){
            lower = lower_bound(arr.begin(), arr.end(), inputs);  
            cout << "No " << (lower - arr.begin()+1) << endl;
        } else {
            cout << "Yes "<< pos+1 << endl;
        }     
    }
    return 0;
}
