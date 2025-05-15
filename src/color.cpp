#include <bits/stdc++.h>
#include <windows.h>
#include "function.h"

using namespace std;

void colorText(string text, int textColor, int bgColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int colorCode = textColor + (bgColor << 4);  // Combine text and background color
    SetConsoleTextAttribute(hConsole, colorCode);
    
    cout << text << endl;

    SetConsoleTextAttribute(hConsole, 7);  // Reset to default
}