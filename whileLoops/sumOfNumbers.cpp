#include <iostream>
using namespace std;
int main(){
    int num, first=1, sum=0;
    cin>>num;
    while (first<=num){
        sum=sum+first;
        first++;
    }
    cout<<sum;

    return 0;
}