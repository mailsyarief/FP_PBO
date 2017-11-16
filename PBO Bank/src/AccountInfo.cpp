#include "AccountInfo.h"

AccountInfo::AccountInfo()
{
    //ctor
    this->firstName = "default" ;
    this->lastName ="default" ;
}
AccountInfo::AccountInfo(string firstName, string lastName)
{
    this->firstName =firstName;
    this->lastName = lastName;
}

AccountInfo::~AccountInfo()
{
    //dtor
}

void AccountInfo::setFirstName(string firstName)
{
    this->firstName= firstName;

}

string AccountInfo::getFirstName()
{
    return this->firstName;
}

void AccountInfo::setLastName(string lastName)
{
    this->lastName= lastName;
}

string AccountInfo::getLastName()
{
    return this->lastName;
}
