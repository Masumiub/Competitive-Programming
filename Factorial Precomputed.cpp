/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];

int main()
{
    fact[0] = fact[1] =1;
    for(int i=2; i<N; i++){
        fact[i] = fact[i-1]*i;
    }
    
    int t;
    cin>> t;
    
    while(t--){
        int n;
        cin>> n;
        cout<< fact[n] << endl;
    }

    return 0;
}
