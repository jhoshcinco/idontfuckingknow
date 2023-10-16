//
// Created by Jhosh on 2023-10-15.
//

#include "User.h"

User::User(int userId, const std::string &username, const std::string &password, const std::string &email,
           const std::string &firstName, std::string lastName) {
//    default constructor
//  passed as a const reference to variable to avoid accidentally modifying the string
    this->userId = userId;
    this->username = username;
    this->password = password;
    this->email = email;
    this->firstname = firstName;
    this->lastname = lastName;

//    explicit constructor autocomplete idk
//    you can also initialize constructor with a colon : userId(userId), username(username),
//                                                                       password(password), email(email),
//                                                                       firstName(firstName), lastName(lastName)
//    both achieves the same result
}


// setters
void User::setUserId(int userId) {
    User::userId = userId;
}

void User::setUsername(const std::string &username) {
    User::username = username;
}

void User::setPassword(const std::string &password) {
    User::password = password;
}

void User::setEmail(const std::string &email) {
    User::email = email;
}

void User::setFirstName(const std::string &firstName) {
    User::firstname = firstName;
}

void User::setLastName(const std::string &lastName) {
    User::lastname = lastName;
}

//getters
int User::getUserId() const {
    return userId;
}

std::string User::getUsername() const {
    return username;
}

std::string User::getPassword() const {
    return password;
}

std::string User::getEmail() const {
    return email;
}

std::string User::getFirstName() const {
    return firstname;
}

std::string User::getLastName() const {
    return lastname;
}

//    destructor




