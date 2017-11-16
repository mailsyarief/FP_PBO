#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include "AccountInfo.h"

using namespace std;

class Account
{
    public:
        Account();
        Account (double balance);
        Account (double balance, string accountName, string accountNumber);
        Account (double balance, AccountInfo owner);
        ~Account();

        double getBalance ();
        void debit (double amount);
        void credit (double amount);

        //accessor (getter)
        string getAccountName ();
        // mutator setter
        void setAcoountName (string accountName);

        string getAccountNumber();
        void setAccountNumber (string accountNumber);

        AccountInfo getOwner ();
        void setOwner (AccountInfo owner);

    protected:

    private:
        double balance;
        string accountName;
        string accountNumber;
        AccountInfo owner;
};

#endif // ACCOUNT_H
