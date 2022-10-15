/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

const int N = 1e7+10;
int hsh[N];

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
        hsh[a[i]]++;
    }
    
    
    
    int q;
    cin>> q;
    while(q--){
        int x;
        cin>> x;
        
        cout<< hsh[x]<< endl;
    }

    return 0;
}
