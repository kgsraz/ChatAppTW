#include "CHATAPP.h"
#include <iostream>

void ChatApp::registerUser(const User& user) {
    registeredUsers[user.getLogin()] = user; // ����������� ������������
}

void ChatApp::loginUser(const std::string& login, const std::string& password) {
    auto it = registeredUsers.find(login);
    if (it != registeredUsers.end() && it->second.getPassword() == password) {
        // ������ ��������� ��������� ����� ������������
    }
    else {
        throw std::runtime_error("�������� ����� ��� ������. ���������� ��� ���.");
    }
}

void ChatApp::sendChatMessage(const User& sender, const std::string& message) {
    chatRoom.sendMessage(sender, message);
}

void ChatApp::startConsoleChat() {
    std::string userInput;
    User currentUser;

    std::cout << "������� �����: ";
    std::cin >> userInput;
    std::string login = userInput;

    std::cout << "������� ������: ";
    std::cin >> userInput;
    std::string password = userInput;

    try {
        loginUser(login, password);
        // ������ ��������� ��������� ����� ������������
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}
