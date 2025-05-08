#include<bits/stdc++.h>
using namespace std;

void maP() {
    ifstream file("data/map.txt"); // Replace with your file name
    string keyword ; 
    cout<<"Enter facalty Name or room name"<<endl;
    getline(cin,keyword);
    string line;

  

    while (getline(file, line)) {
        if (line.find(keyword) != std::string::npos) {
            cout << line << "\n";
        }
    }

    file.close();

}