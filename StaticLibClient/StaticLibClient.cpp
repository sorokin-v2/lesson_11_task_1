#include <iostream>
#include "greeter.h"
#include <Windows.h>    //Для ввода русских букв с консоли (SetConsoleCP(1251))


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);             // установка кодовой страницы win-cp 1251 в поток ввода

    std::string UserName;
    std::cout << "Введите имя: ";
    std::cin >> UserName;
    Greeter::Greeter greeter;
    std::cout << greeter.greet(UserName) << std::endl;
}
