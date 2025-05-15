#include <bits/stdc++.h>
#include <cstdlib> // for exit
#include "src/function.h"
#include <windows.h>
using namespace std;
#define ll long long
#define l long
#define I int
#define nx '\n'
// cd "d:\project\Bubticonnect\" ; if ($?) { g++ project-main.cpp -o project-main } ; if ($?) { .\project-main }

void name()
{

    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t"  ;
    colorText("Bubt I Connect", 4, 2);
    cout << nx;
}
// main menu
void showMenu()
{
    name();
cout<<nx<<nx;

viewSideBySide();

cout<< nx;

cout << "What do you want ?" << nx << nx;
cout << "1.Smart RoadMap of varsity" << nx;
cout << "2.Lost and find" << nx;
cout << "3.FAQ" << nx;
cout << "4.Complaint Box" << nx;
cout << "0.Exit" << nx;
}
void wrongInput()
{
    system("cls");
    cout << "--------------------Wrong input--------------------" << nx;
    cout << "----------Please enter the correct number----------" << nx << nx;
}



int main()
{system("cls");

    int choice;
    do
    {   
        showMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

        system("cls"); // Always clear screen before showing next page

        switch (choice)
        {
        case 1:
            maP();
            break;
        case 2:

            lostAndFound();

            break;
        case 3:
            faq();
            break;

        case 4:
             complaint();

            break;
        case 0:
            cout << "Exiting... Thank you for using Bubt I Connect!" << nx;
            break;
        default:
            wrongInput();
        }

        if (choice != 0)
        {
            cout << "\nPress Enter to continue...";
            cin.get(); // Wait for Enter
            system("cls");
        }

    } while (choice != 0);
}
