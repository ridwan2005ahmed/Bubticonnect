#include <bits/stdc++.h>
#include <cstdlib> // for exit
using namespace std;

#define ll long long
#define l long
#define I int
#define nx '\n'
// cd "d:\project\Bubticonnect\" ; if ($?) { g++ project-main.cpp -o project-main } ; if ($?) { .\project-main }

void name()
{
    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "Bubt I Connect" << nx;
}
// main menu
void showMenu()
{
    name();
    cout << "What do you want ?" << nx;

    cout << "1.Smart RoadMap of varsity" << nx;
    cout << "2.Lost and find" << nx;
    cout << "3.FAQ" << nx;
    cout << "0.Exit" << nx;
}
void wrongInput()
{
    system("cls");
    cout << "--------------------Wrong input--------------------" << nx;
    cout << "----------Please enter the correct number----------" << nx << nx;
}










// lost and found  
void lostAndFound()
{
    int option;
    cout << "\n--- Lost and Found ---\n";
    cout << "1. Add Lost Item\n";
    cout << "2. Add Found Item\n";
    cout << "3. View Lost Items\n";
    cout << "4. View Found Items\n";
    cout << "Choose an option: ";
    cin >> option;
    cin.ignore();
    switch (option)
    {
    case 1:
        // addLostInfo();
        break;
    case 2:
        // addFoundInfo();
        break;
    case 3:
        // viewLostInfo();
        break;
    case 4:
        // viewFoundInfo();
        break;
    default:
        cout << "Invalid option. Please try again." << nx;
        break;
    }
}
// FAQ 
void faq(){
    int option;
    cout << "\n--- Lost and Found ---\n";
    cout << "1. Add Lost Item\n";
    cout << "2. Add Found Item\n";
    cout << "3. View Lost Items\n";
    cout << "4. View Found Items\n";
    cout << "Choose an option: ";
    cin >> option;
    
}
int main()
{

    int choice;
    do
    {
        showMenu();
        cin >> choice;

        system("cls"); // Always clear screen before showing next page

        switch (choice)
        {
        case 1:
            lostAndFound();
            break;
        case 2:
            cout << "Lost and Find feature is under development!" << nx;
            break;
        case 3:
            faq();
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
            cin.ignore();
            cin.get(); // Wait for Enter
            system("cls");
        }

    } while (choice != 0);
}