#include <iostream>
using namespace std;
int main(){
    
    cout<<"\tKph \t Mph "<<endl;
    for(double i=60; i<=130;i+=10){
        cout<<"\t"<<i<<" \t"<<i*0.6214<<endl;
    }
    cout<<endl;

    return 0;
}