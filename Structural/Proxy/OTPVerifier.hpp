#pragma once
#include "LoginService.hpp"
#include "UserSession.hpp"
#include <iostream>
#include <random>

class OTPVerifier : public LoginService {
    std::string correctOTP;
    UserSession realLogin;

    std::string generateOTP() {
        return "123456";  // For demo, we keep it fixed
    }

public:
    OTPVerifier() {
        correctOTP = generateOTP();
    }

    bool login(const std::string& email) override {
        std::cout << "📨 Sending OTP to email: " << email << "\n";
        std::cout << "[OTP: " << correctOTP << "]\n";  // simulate display

        std::string userInput;
        std::cout << "Enter the OTP: ";
        std::cin >> userInput;

        if (userInput == correctOTP) {
            std::cout << "✅ OTP verified.\n";
            return realLogin.login(email); // delegate to real subject
        } else {
            std::cout << "❌ Invalid OTP.\n";
            return false;
        }
    }
};