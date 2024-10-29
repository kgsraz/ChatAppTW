#include "CHATROOM.h"

void ChatRoom::addUser(const User& user) {
    users.push_back(user);
}

void ChatRoom::sendMessage(const User& sender, const std::string& message) {
    if (users.empty()) {
        throw ChatException("��� ������������� � ���-�������. ���������� ��������� ���������.");
    }
    // ������ �������� ���������� ���������
}

void ChatRoom::broadcastMessage(const User& sender, const std::string& message) {
    if (users.empty()) {
        throw ChatException("��� ������������� � ���-�������. ���������� ������������� ���������.");
    }
    // ������ ���������� ��������� ���� �������������
}
