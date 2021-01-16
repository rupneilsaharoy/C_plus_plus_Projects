#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    //int num{10};
    //cout << "Value of num is: " << num << endl;
    //cout << "sizeof of num is: " << sizeof num << endl;
    //cout << "Address of num is: " << &num << endl;

    //int *p;
    //cout << "Value of p is: " << p << endl;
//    cout << "Address of p is: " << &p << endl;
//    cout << "sizeof of p is: " << sizeof p << endl;

//    int *p1 {nullptr};
//    double *p2 {nullptr};
//    unsigned long long *p3 {nullptr};
//    vector<string> *p4 {nullptr};
//    string *p5 {nullptr};
//
//    cout << "\nsizeof p1 is: " << sizeof p1 <<endl;
//    cout << "\nsizeof p2 is: " << sizeof p2 <<endl;
//    cout << "\nsizeof p3 is: " << sizeof p3 <<endl;
//    cout << "\nsizeof p4 is: " << sizeof p4 <<endl;
//    cout << "\nsizeof p5 is: " << sizeof p5 <<endl;

//    int score {100};
//    int *score_ptr {&score};
//
//    cout << *score_ptr << endl;
//
//    *score_ptr = 200;
//    cout << *score_ptr << endl;
//    cout << score << endl;

//    double high_temp {100.7};
//    double low_temp {37.4};
//    double *temp_ptr {&high_temp};
//
//    cout << *temp_ptr << endl;
//
//    temp_ptr = &low_temp;
//
//    cout << *temp_ptr << endl;

//    string name {"Frank"};
//
//    string *string_ptr {&name};
//
//    cout << *string_ptr << endl;
//
//    name = "James";
//
//    cout << *string_ptr << endl;

        vector<string> stooges {"Larry","Moe","Curly"};
        vector<string> *vector_ptr {nullptr};

        vector_ptr = &stooges;
        cout << "First stooges: " << (*vector_ptr).at(0) << endl;

        cout << "Stooges: ";
        for (auto stooges: *vector_ptr)
            cout << stooges << " ";
        cout << endl;

}
