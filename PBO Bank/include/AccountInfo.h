#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H
#include <iostream>

using namespace std;

class AccountInfo
{
    public:
        AccountInfo();
        AccountInfo(string firstName, string lastName);
        virtual ~AccountInfo();

        void setFirstName(string firstName);
        string getFirstName();

        void setLastName(string lastName);
        string getLastName();


    protected:

    private:
        string firstName;
        string lastName;
};

#endif // ACCOUNTINFO_H
