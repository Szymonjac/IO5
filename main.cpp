#include <iostream>
#include "user.h"
int main(){
    user logedPerson;
    std::string login, password;
    std::cout<<"Witamy w programi super kolejki"<<std::endl;
    std::cout<<"Login:";
    std::cin>>login;
    std::cout<<"Password:";
    std::cin>>password;
    logedPerson.login(login, password);
    return 0;
}