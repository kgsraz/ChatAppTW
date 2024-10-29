#pragma once
#include <string>

class User {
private:
    std::string login;
    std::string password;

public:
    User();
    User(const std::string& login, const std::string& password);

    std::string getLogin() const;
    std::string getPassword() const;
};