#include <iostream>
using namespace std;
int main(){
    int x=1,num,sum=0;
    cin>>num;
    
    do
    {  sum=sum+x;
       x++;    
    } while (x<=num);
    cout<<sum;
    return 0;
}