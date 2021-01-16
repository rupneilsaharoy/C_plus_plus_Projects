#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main()
{
    cout << "\n=== Account =============================" << endl;    /*Use the Account Class*/
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    cout << "\n=== Savings Account =============================" << endl; /* Use the Savings Account Class*/
    Savings_Account sav_acc{};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);

    Savings_Account *p_sav_acc{nullptr};
    p_sav_acc = new Savings_Account();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;

    return 0;
}
