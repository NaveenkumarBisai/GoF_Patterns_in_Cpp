#pragma once
#include <string>
#include <iostream>

class LoginService {
public:
    virtual ~LoginService() = default;
    virtual bool login(const std::string& username) = 0;
};