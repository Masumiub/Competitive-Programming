/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6};
    
    for(int i=0; i<6; i++){
        cout<< a[i]<< " ";
    }
    int x;
    cin>> x;
    int index;
    for(int i=0; i<6; i++){
        if(a[i]==x){
            index = i;
        }
    }
    int sum = 0;
    for(int i=0; i<6; i++){
        if(i>=index){
            sum+=a[i];
        }
    }
    
cout<< sum<<endl;
    return 0;
}
