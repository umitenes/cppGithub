#include <iostream>
using namespace std;
int main(){
    int counter=0,num,a;
    cin>>num;
    for(int x=1; x<=num; x++)
    {
        cin>>a;
        if(a>9 && a<100)
            counter++;
    }
    cout<<counter;


    return 0;
}