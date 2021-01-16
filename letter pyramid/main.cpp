#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch='C';
    int i,j,k,m;
    for(i=1;i<=9;i++)
    {
        for(j=9;j>=i;j--)
            cout << "";
        for(k=1;k<=i;k++)
            cout << ch++;
            ch--;
        for(m=1;m<i;m++)
            cout << --ch;
            cout << "\n";
            ch='C';
    }
    return 0;
}
