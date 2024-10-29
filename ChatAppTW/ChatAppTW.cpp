#include "CHATAPP.h"
#include <locale>

int main() {
    setlocale (LC_ALL,"RU");
    ChatApp chatApp;

    chatApp.registerUser(User("user1", "password1"));
    chatApp.registerUser(User("user2", "password2"));

    // Запуск консольного чата
    chatApp.startConsoleChat();

    return 0;
}
