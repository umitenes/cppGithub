#include <iostream>
using namespace std;
int main()
{
int n, nr, sum, max, min, copy;
max = 0;
min = 2000000;
cout<<"How many numbers will you type?"<<endl;
cin>>n;
for(int i = 1; i <= n; i++){
sum = 0;
cin>>nr;
copy = nr;
while (nr > 0){
sum += nr % 10;
nr = nr / 10;
}
if (sum % 2 != 0){
if (sum > max){
max = copy;
}
if (sum < min){
min = copy;
}
}
}
cout << "max = "<< max<<endl;
cout << "min = "<< min<<endl;
return 0;
}