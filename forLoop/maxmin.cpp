#include <iostream>
using namespace std;
int main(){
    int num,x,y,sum=0,maxnr=0,minnr;
    cin>>num;
    for(int i=1; i<=num;i++){
        cin>>x;
        y=x;
        while(x>0)
        {
            sum=sum+x%10;
            x=x/10;
        }
        if(sum%2==1 && y>maxnr)
            maxnr=y;
        if(sum%2==1 && y<minnr)
            minnr=y;
        sum=0;
    }
    cout<<maxnr<<" "<<minnr;
    
    return 0;
}