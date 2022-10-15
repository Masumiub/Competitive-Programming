/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

const int M = 1e9+7;

int main()
{
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        long long fact = 1;
        for (int i=2; i<=n; i++){
            fact = (fact*i)% M;
        }
        cout<< fact << endl;
    }

    return 0;
}
