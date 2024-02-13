#include<iostream>
using namespace std;
int main()
{
    for(int i = 1; i<=4; ++i) {
        for(int s = 1; s <= 4-i; ++s) {
            cout <<" ";
        }
        for(int z=0; z<2*i-1; z++)
            cout<<"*";
        
        cout << endl;
    } 

    return 0;
}