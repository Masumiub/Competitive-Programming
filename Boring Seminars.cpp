#include<map>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    string name[n];
    int time[n];

    string x;
    for(int i=0; i<n;i++){
        cin>> name[i];
        cin>> time[i];
    }
    cin>> x;

    int sum = 0;
    for(int i=0; i<n;i++){
        if(name[i]==x){
            for(int j=i+1; j<n; j++){
                sum +=time[j];
            }
        }
        //cout<< name[i]<< " "<< time[i]<< endl;
    }
    cout<< sum<< endl;
}

/*
int main(){
    int n;
    cin>> n;

    map<string, int>s;

    string x;
    while(n--){
        string semName;
        int time;
        cin>> semName>> time;
        s.insert({semName, time});
    }
    cin>> x;
    map<string, int>:: iterator itr;

    int sum = 0;
    int k = distance(s. begin(), s. find(x));

    for(itr=s.begin(); itr!=s.end();itr++){
        sum += (*itr).second;
        if((*itr).first == x){
            cout<< (*itr).second<< endl;
        }
        //cout<< (*itr).first<< " "<< (*itr).second<< endl;
    }
    cout<< "index: "<< k<< endl;
    cout<< sum<< endl;
    return 0;
}*/
