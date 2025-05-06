#include <bits/stdc++.h>
#include "function.h"
#include <fstream>
using namespace std;
#define nx '\n'
void showSection(const string &sectionName);
void faq()
{

  int option;
  do
  {
    cout << "===== FAQ Menu =====" << endl;
    cout << "1. Waiver" << endl;
    cout << "2. Library Card" << endl;
    cout << "0. Back to Main Menu\n"; // Added option 0 to go back
    cout << "Choose an option: ";
    cin >> option;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer

    system("cls"); // clear screen after each selection

    switch (option)
    {
    case 1:
    showSection("waiver");
            
    
      break;
    case 2:
      showSection("Library Card");
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

void showSection(const string& sectionName) {
  ifstream file("data/faq.txt");
 string line;
  bool inSection = false;

  while (getline(file, line)) {
      // Convert to lowercase for comparison if needed
      if (line.find(sectionName + "{") != string::npos) {
          inSection = true;
          continue;
      }
      if (inSection) {
          if (line.find("}") != string::npos) break;
          cout << line << endl;
      }
  }


file.close();
}