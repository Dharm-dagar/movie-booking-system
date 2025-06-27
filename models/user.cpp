#include "User.h"

User::User(int id, const std::string& name, const std::string& email) {
    this->userId = id;
    this->name = name;
    this->email = email;
}

int User::getUserId() const {
    return userId;
}

std::string User::getName() const {
    return name;
}

std::string User::getEmail() const {
    return email;
}
