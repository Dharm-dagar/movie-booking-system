#pragma once
#include <string>

class User {
private:
    int userId;
    std::string name;
    std::string email;

public:
    User(int id, const std::string& name, const std::string& email);
    int getUserId() const;
    std::string getName() const;
    std::string getEmail() const;
};
