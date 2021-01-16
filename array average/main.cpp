#include <iostream>
using namespace std;
int main()
{
    float a[100],avg,s=0.0;
    int i,n;
    cout << "how many numbers?\n";
    cin >> n;
    if(n>100)
    {
        cout << "input size is too large";
    }
    cout << "enter values\n";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        s= s+a[i];
    }
    avg=s/n;
    cout << "average= " << avg;
    return 0;
}
