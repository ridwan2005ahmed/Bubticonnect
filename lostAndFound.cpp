// lostAndFound.cpp
#include <bits/stdc++.h>
#include "function.h"
#include <fstream>
using namespace std;
#define nx '\n'
void addLostInfo();void viewLostInfo();void addFindInfo(); 
void viewFindInfo();
void lostAndFound()
{
    int option;
    do
    {
        cout << "\n--- Lost and Found ---\n";
        cout << "1. Add Lost Item\n";
        cout << "2. Add Found Item\n";
        cout << "0. Back to Main Menu\n"; // Added option 0 to go back
        cout << "Choose an option: ";
        cin >> option;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

        system("cls"); // clear screen after each selection

        switch (option)
        {
        case 1:
            addLostInfo();
            break;
        case 2:
        addFindInfo();
            break;

        case 0:
            cout << "Returning to main menu..." << nx;
            break;
        default:
            cout << "--------------------Wrong input--------------------" << nx;
            cout << "----------Please enter the correct number----------" << nx;
        }

        if (option != 0)
        {
            cout << "\nPress Enter to continue...";
            cin.get(); // Wait for Enter
              system("cls");
        }

    } while (option != 0);
}
void addLostInfo()
{
    string name, contact, details;

    cout << "Enter lost item info (name): ";
    getline(cin, name);

    cout << "Enter contact Number: ";
    getline(cin, contact); 

    cout << "Enter Details: ";
    getline(cin, details);

    ofstream file("data/lostinfo.txt", ios::out | ios::app);
    if (file.is_open())
    {
        file << name << "|" << contact << "|" << details << "\n";
        file.close();
        cout << "Everything Entered Successfully: " << name << endl;
    }
 
}

void viewLostInfo()
{
     ifstream file("data/lostinfo.txt");


    string line;
    int count = 1;
    while (getline(file, line))
    {
        stringstream ss(line);
        string name, contact, details;

        getline(ss, name, '|');
        getline(ss, contact, '|');
        getline(ss, details, '|'); // Read until the next delimiter (or end)

        cout << "Lost Item " << count++ << ":\n";
        cout << "  Name: " << name << "\n";
        cout << "  Contact: " << contact << "\n";
        cout << "  Details: " << details << "\n\n";
    }

    file.close();
}
void addFindInfo(){
    string name, contact, details;

    cout << "Enter Found item info (name): ";
    getline(cin, name);

    cout << "Enter contact Number: ";
    getline(cin, contact); 

    cout << "Enter Details: ";
    getline(cin, details);

    ofstream file("data/findinfo.txt", ios::out | ios::app);
    if (file.is_open())
    {
        file << name << "|" << contact << "|" << details << "\n";
        file.close();
        cout << "Everything Entered Successfully: " << name << endl;
    }
  
}




void viewFindInfo()

   { ifstream file("data/findinfo.txt");


   string line;
   int count = 1;
   while (getline(file, line))
   {
       stringstream ss(line);
       string name, contact, details;

       getline(ss, name, '|');
       getline(ss, contact, '|');
       getline(ss, details, '|'); // Read until the next delimiter (or end)

       cout << "Found Item " << count++ << ":\n";
       cout << "  Name: " << name << "\n";
       cout << "  Contact: " << contact << "\n";
       cout << "  Details: " << details << "\n\n";
   }}