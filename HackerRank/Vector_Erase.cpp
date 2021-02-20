1 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int N,num,input_1,input_2,input_3;
    cin >> N;
    
    for(int i=0;i<N;i++){
        cin >> num;
        v.push_back(num);
    }
    
    cin >> input_1;
    
    v.erase(v.begin()+input_1);
        
    cin >> input_2;
    cin >> input_3;
    --input_2;
    --input_3;
   
    v.erase(v.begin()+input_2,v.begin()+input_3);
    
    cout << v.size() << endl;
    for(int j= 0 ; j<v.size(); j++){
        cout << v[j] << " ";
    }
    return 0; 
}
