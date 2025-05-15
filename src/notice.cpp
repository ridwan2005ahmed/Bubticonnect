#include <bits/stdc++.h>
#include "function.h"
#include <windows.h>
#include <cstdlib>

using namespace std;
#define nx "\n"

void marqueeText(string text, int delay = 200) {
    string scroll = text + "   ";
    while (true) {
        system("cls");
        cout << scroll << endl;
        scroll = scroll.substr(1) + scroll[0];
        Sleep(delay);
    }
}

int option;

void addnotice();
void shownotice();

void notice() {
    do {
        cout << "1. Show Notice" << nx;
        cout << "2. Add Notice" << nx;
        cout << "0. Back to Main Menu\n";
        cout << "Choose an option: ";
        cin >> option;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        system("cls");

        switch (option) {
            case 1:
                shownotice();
                break;
            case 2:
                addnotice();
                break;
            case 0:
                cout << "Returning to main menu..." << nx;
                break;
            default:
                cout << "--------------------Wrong input--------------------" << nx;
                cout << "----------Please enter the correct number----------" << nx;
        }

        if (option != 0) {
            cout << "\nPress Enter to continue...";
            cin.get();
            system("cls");
        }
    } while (option != 0);
}

void shownotice() {
    ifstream file("data/notice.txt");
    string line;

    cout << left << setw(50) << "Title"
         << "| " << left << setw(50) << "Description" << '\n';
    cout << string(105, '-') << '\n';

    while (getline(file, line)) {
        stringstream ss(line);
        string title, description;
        getline(ss, title, '|');
        getline(ss, description, '|');
        cout << left << setw(50) << title
             << "| " << left << setw(50) << description << '\n';
    }

    file.close();
}

void addnotice() {
    string pass = "1234";
    string password;
    int attempts = 0;
    const int maxAttempts = 3;

    while (attempts < maxAttempts) {
        cout << "Enter Password: ";
        password = inputPassword(); // This function must be defined in function.h
        system("cls");

        if (password == pass) {
            break;
        } else {
            attempts++;
            if (attempts < maxAttempts) {
                cout << "Wrong Password (" << attempts << "/" << maxAttempts << ")\n";
            }
        }
    }

    if (attempts == maxAttempts) {
        for (int i = 30; i >= 1; --i) {
            cout << "\rToo many failed attempts. Please wait " << i << " seconds... ";
            Sleep(1000);
        }
        system("cls");
        return;
    }

    string title, describe;

    cout << "Title: " << nx;
    getline(cin, title);

    cout << "Describe: " << nx;
    getline(cin, describe);

    ofstream file("data/notice.txt", ios::app);
    if (file.is_open()) {
        file << title << "|" << describe << "\n";
        file.close();
        cout << "Everything Entered Successfully: " << title << endl;
    } else {
        cerr << "Failed to open notice file!" << endl;
    }
}
