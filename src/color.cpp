#include <bits/stdc++.h>
#include "function.h"
using nam
void printColoredText(string text, int textColor, int bgColor) {
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  int colorCode = textColor + (bgColor << 4);  // Combine text and background color
  SetConsoleTextAttribute(hConsole, colorCode);
  
  cout << text << endl;

  SetConsoleTextAttribute(hConsole, 7);  // Reset to default (white text, black background)
}