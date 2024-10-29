#pragma once
#include <vector>
#include <string>
#include "User.h"
#include "Exception.h"

class ChatRoom {
private:
    std::vector<User> users;

public:
    void addUser(const User& user);
    void sendMessage(const User& sender, const std::string& message);
    void broadcastMessage(const User& sender, const std::string& message);
};
