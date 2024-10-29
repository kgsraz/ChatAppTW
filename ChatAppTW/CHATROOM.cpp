#include "CHATROOM.h"

void ChatRoom::addUser(const User& user) {
    users.push_back(user);
}

void ChatRoom::sendMessage(const User& sender, const std::string& message) {
    if (users.empty()) {
        throw ChatException("Нет пользователей в чат-комнате. Невозможно отправить сообщение.");
    }
    // Логика отправки приватного сообщения
}

void ChatRoom::broadcastMessage(const User& sender, const std::string& message) {
    if (users.empty()) {
        throw ChatException("Нет пользователей в чат-комнате. Невозможно транслировать сообщение.");
    }
    // Логика трансляции сообщения всем пользователям
}
