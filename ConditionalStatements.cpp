/*
Given a positive integer, do the following:
If 1<=n<=9 print the lowercase English word corresponding to the number (e.g., one for , two for
, etc.).
If n > 9 print Greater than 9.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // Write Your Code Here
    
    if(n <= 9){
        if(n==1){
            printf("one");
        }
        else if(n==2){
            printf("two");
        }
        else if(n==3){
            printf("three");
        }
        else if(n==4){
            printf("four");
        }
        else if(n==5){
            printf("five");
        }
        else if(n==6){
            printf("six");
        }
        else if(n==7){
            printf("seven");
        }
        else if(n==8){
            printf("eight");
        }
        else if(n==9){
            printf("nine");
        }
    } else if(n >= 9) {
        printf("Greater than 9");
    } else {
        printf("Zero input has given ");
    }
    
    return 0;
}
