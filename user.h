#ifndef USER__H
#define USER__H

#include <string>
class user{
public:
    bool loged;

    void login(std::string login, std::string password);
    void showStat(void);

};

#endif