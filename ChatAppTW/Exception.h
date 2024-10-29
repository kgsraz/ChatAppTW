#pragma once
#pragma once
#include <exception>
#include <string>

class ChatException : public std::exception {
private:
    std::string message;

public:
    explicit ChatException(const std::string& msg);

    const char* what() const noexcept override;
};
