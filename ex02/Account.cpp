#include "Account.hpp"

void Account::_displayTimestamp()
{
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);
    std::cout << (now->tm_year + 1900) << '-'  << (now->tm_mon + 1) << '-' <<  now->tm_mday << "\n";
}

int main()
{
    t
}