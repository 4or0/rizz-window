#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
std::wstring anus(const std::string& str) {
    return std::wstring(str.begin(), str.end());
}

std::string gyatt(int rizz) {
    std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    std::string skibidi;
    for (int i = 0; i < rizz; i++) {
        skibidi += characters[std::rand() % characters.length()];
    }
    return skibidi;
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int rizz = 69;
    HWND gay = FindWindow(NULL, L"Roblox");

    if (gay == NULL) {
        std::cerr << "Roblox window not found!" << std::endl;
        return 1;
    }

    while (true) {
        std::string cum = gyatt(rizz);
        std::wstring rizzlord = anus(cum);
        SetConsoleTitle(rizzlord.c_str());
        SetWindowText(gay, rizzlord.c_str());
        Sleep(1000);
    }

    return 0;
}
