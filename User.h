//
// Created by Jhosh on 2023-10-15.
//

#ifndef IDONTFUCKINGKNOW_USER_H
#define IDONTFUCKINGKNOW_USER_H
#include <string>


class User {

    //    attributes
private:
    int userId;
    std::string username;
    std::string password;
    std::string email;
    std::string firstname;
    std::string lastname;
public:
//    constructor
    User(int userId, const std::string& username, const std::string& password,const std::string& email,const std::string& firstName, std::string lastName);//constructor
    //    setter and getters
    void setUserId(int userId);
    void setUsername(const std::string& username);
    void setPassword(const std::string& password);
    void setEmail(const std::string& email);
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);

    int getUserId() const;
    std::string getUsername() const;
    std::string getPassword() const;
    std::string getEmail() const;
    std::string getFirstName() const;
    std::string getLastName() const;







};


#endif //IDONTFUCKINGKNOW_USER_H
