#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int *int_ptr = NULL;
    int_ptr = new int;
    cout << int_ptr <<endl;
    cout << *int_ptr <<endl;
    *int_ptr = 100;
    cout << *int_ptr << endl;

//    int  *ptr = NULL;
//    cout << "The value of ptr is " << ptr ;
}
