/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    
    int q;
    cin>> q;
    while(q--){
        int x;
        cin>> x;
        int ct=0;
        for(int i=0; i<n; i++){
            if(a[i]==x){
                ct++;
            }
        }
        cout<< ct<< endl;
    }

    return 0;
}
