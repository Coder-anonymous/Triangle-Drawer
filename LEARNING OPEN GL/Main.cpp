#include <GLFW/glfw3.h>
#include <iostream>
#include "WindowClass.cpp"

WindowClass windowClass;

int main()
{
    int userInputXSize, userInputYSize;
    std::cout << "Please Enter Window Width Followed By Window Height You Like: ";
    std::cin >> userInputXSize;
    std::cin >> userInputYSize;
    windowClass.createWindow(userInputXSize, userInputYSize);
}