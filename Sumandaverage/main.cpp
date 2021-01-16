#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    float avg;
    cout << "enter 3 integers\n";
    cin >> a >> b >> c;
    sum= a+b+c;
    avg= float(sum)/3;
    cout << "sum= " << sum << "average= " << avg << endl;
    return 0;
}

