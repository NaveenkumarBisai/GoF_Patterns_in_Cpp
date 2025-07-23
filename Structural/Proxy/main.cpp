#include "OTPVerifier.hpp"

int main() {
    LoginService* loginProxy = new OTPVerifier();

    std::string email = "user@example.com";
    std::string password = "secure123";

    std::cout << "🔐 Attempting login for: " << email << "\n";
    bool success = loginProxy->login(email);

    if (success) {
        std::cout << "🎉 Access granted!\n";
    } else {
        std::cout << "🚫 Access denied.\n";
    }

    delete loginProxy;
    return 0;
}