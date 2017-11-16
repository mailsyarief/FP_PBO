#include "Account.h"
#include <iostream>

using namespace std;

Account::Account()
{
    //ctor
}
Account::Account(double balance)
{
    if (balance < 0)
    {
        cout << "Sisa ";
        this->balance=0;
    }
    else
    {
        this->balance=balance;
    }
}
double Account::getBalance()
{
    return this->balance;
}

void Account::debit(double amount)
{
    if (amount > this->balance)
        {
        cout << "Saldo tidak mencukupi\n";
        }
    else
        {
        this->balance= this->balance - amount;
        }
}

Account::Account(double balance, string accountName, string accountNumber)
: Account (balance)
{
    this->accountName= accountName;
    this->accountNumber= accountNumber;
}

Account::Account(double balance, AccountInfo owner)
: Account(balance)
{
    this->owner=owner;
}

AccountInfo Account::getOwner()
{
    return owner;
}

void Account::setOwner(AccountInfo owner)
{
    this->owner=owner;
}


string Account::getAccountName()
{
    return this->accountName;
}

void Account::setAcoountName(string accountName)
{
    this->accountName= accountName;
}

string Account::getAccountNumber()
{
    return this->accountNumber;
}

void Account::setAccountNumber(string accountNumber)
{
    this->accountNumber = accountNumber;
}
void Account::credit(double amount)
{
    this->balance= this->balance +amount;
}

Account::~Account()
{
    //dtor
}
