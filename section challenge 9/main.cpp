#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> numbers {};
    char selection {};

    do{
        cout << "\n----------------- " << endl;
        cout << "P- Print numbers" << endl;
        cout << "A- Add a number" << endl;
        cout << "M- Display mean of the numbers" << endl;
        cout << "S- Display the smallest number" << endl;
        cout << "L- Display the largest number" << endl;
        cout << "Q- Quit" << endl;
        cout << "\nEnter your choice:";
        cin >> selection;

     if(selection == 'p' || selection == 'P'){
            if(numbers.size()==0)
                cout << "[]- the list is empty " << endl;

            else{
                cout << "[ ";
                for(auto num: numbers)
                    cout << num << " ";
                cout << "] ";
                }

        }

    }while (selection !='q' && selection !='Q');

    cout << endl;
    return 0;

}
