#pragma once
#include <string>
#include <iostream>
#include "LoginService.hpp"

class UserSession : public LoginService {
public:
    bool login(const std::string& username) override {
        std::cout << "User " << username << " logged in successfully.\n";
        return true; // Simulate a successful login
    }
};