#include "Exception.h"

ChatException::ChatException(const std::string& msg) : message(msg) {}

const char* ChatException::what() const noexcept {
    return message.c_str();
}