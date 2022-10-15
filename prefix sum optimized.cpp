#include <iostream>
const N = 1e5+10;
int a[N];
int pf[N];
using namespace std;

int main()
{
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> a[i];
        pf[i] = pf[i-1]+a[i];
    }
    int q;
    cin>> q;
    while(q--){
        int l, r;
        cin>> l>>r;
        cout<< pf[r]-pf[r-1]<< endl;
    }

    return 0;
}
