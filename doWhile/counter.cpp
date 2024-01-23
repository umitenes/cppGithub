#include <iostream>
using namespace std;
int main(){
    int x=1,num;
    cin>>num;
    
    do
    {
       cout<<x++;    
    } while (x<=num);
    
    return 0;
}