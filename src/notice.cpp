#include<bits/stdc++.h>
#include "function.h" 
#include <windows.h>  
#include <cstdlib> 
using namespace std;
#define nx "\n"     
void marqueeText(string text, int delay = 200) {
    string scroll = text + "   ";  // add some space at the end
    while (true) {
        system("cls"); // clear screen
        cout << scroll << endl;
        scroll = scroll.substr(1) + scroll[0]; // shift left
        Sleep(delay); // wait
    }
}
void notice() {
}