#include <iostream>
#include <string>

#include "user.pb.h"

using namespace fixbug;

/**
 * UserService原来是一个本地服务，提供了两个进程内的本地方法，Login和GetFrinedLists
 */
class UserService: public UserServiceRpc
{
public:
    bool Login(std::string name,std::string pwd)
    {
        std::cout<<"doing local service: Login"<<std::endl;
        std::cout<<"name: "<<name<<" pwd: "<<pwd<<std::endl;
    }
};

int main()
{
    

    return 0;
}