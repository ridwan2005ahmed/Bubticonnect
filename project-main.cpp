#include<bits/stdc++.h>
#include <cstdlib> // for exit
using namespace std;
#define ll long long
#define l long
#define I int
#define nx '\n' 

int userInput;
// name it will show on the front
void name(){
cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"Bubt I Connect"<<nx;
}

void wrongInput(){

    system("cls");

    name();
    cout << "--------------------Wrong input--------------------" << nx;
    cout << "----------Please enter the correct number---------- : " << nx;

    cout<<"1.Smart RoadMap of varsity"<<nx;
    cout<<"2.Lost and find"<<nx;
    cout<<"3.FAQ"<<nx;
    cout<<"4.Exit"<<nx;
    cin>>userInput; 

}

// What do you want ?
void task(){

cout<<"What do you want ?"<<nx;
 

 cout<<"1.Smart RoadMap of varsity"<<nx;
 cout<<"2.Lost and find"<<nx;
 cout<<"3.FAQ"<<nx;
 cout<<"4.Exit"<<nx;
cin>>userInput;

while (1)
{

    if (userInput < 1 || userInput > 4)
    {

        system("cls");

        name();
        cout << "--------------------Wrong input--------------------" << nx;
        cout << "----------Please enter the correct number---------- : " << nx;

        task();
    }
    else
        break;
}







// switch (userInput)
// {
// case  1:
    
// cout<<"working in progress"<<nx;




//     break;



// }
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif



name();


task();






   
}