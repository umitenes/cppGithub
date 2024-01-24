#include <iostream>
using namespace std;
int main()
{
    int num, init = 1, sum = 0;
    cin >> num;
    do
    {
        sum = sum + init;
        init++;
    } while (init <= num);

    cout << sum;

    return 0;
}