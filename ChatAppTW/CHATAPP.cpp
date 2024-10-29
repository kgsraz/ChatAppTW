#include "CHATAPP.h"
#include <iostream>

void ChatApp::registerUser(const User& user) {
    registeredUsers[user.getLogin()] = user; // Регистрация пользователя
}

void ChatApp::loginUser(const std::string& login, const std::string& password) {
    auto it = registeredUsers.find(login);
    if (it != registeredUsers.end() && it->second.getPassword() == password) {
        // Логика обработки успешного входа пользователя
    }
    else {
        throw std::runtime_error("Неверный логин или пароль. Попробуйте еще раз.");
    }
}

void ChatApp::sendChatMessage(const User& sender, const std::string& message) {
    chatRoom.sendMessage(sender, message);
}

void ChatApp::startConsoleChat() {
    std::string userInput;
    User currentUser;

    std::cout << "Введите логин: ";
    std::cin >> userInput;
    std::string login = userInput;

    std::cout << "Введите пароль: ";
    std::cin >> userInput;
    std::string password = userInput;

    try {
        loginUser(login, password);
        // Логика обработки успешного входа пользователя
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
