#pragma once
#pragma once
#include <unordered_map>
#include <string>
#include "USER.h"
#include "CHATROOM.h"
#include "Exception.h"

class ChatApp {
private:
    std::unordered_map<std::string, User> registeredUsers; // Используем unordered_map для хранения пользователей
    ChatRoom chatRoom;

public:
    void registerUser(const User& user);
    void loginUser(const std::string& login, const std::string& password);
    void sendChatMessage(const User& sender, const std::string& message);
    void startConsoleChat();
};
