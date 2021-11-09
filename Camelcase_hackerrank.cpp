#include <bits/stdc++.h>
using namespace std;

int camelcase(string s) {
    int count=0;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]>=65 && s[i]<=90){
            count++;
        }
    }
    return count+1;
}

int main()
{
    string s;
    cin>>s;
    cout<< camelcase(s)<< endl;
    return 0;
}
