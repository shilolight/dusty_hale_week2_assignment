#include<iostream>

using namespace std;

int main() {
    string data[10][1];
    int count = 0;
    string name;
    string choice;
    cout<<"Name Recorder"<<endl;
    cout<<endl<<"MENU"<<endl;
    cout<<"a - Add Person"<<endl;
    cout<<"l - List Stored Names"<<endl;
    cout<<"q - Quit"<<endl;
    while (true) {
        cout<<"Choice: ";
        cin>>choice;
        if (choice == "a") {
            cout<<endl<<"Please enter name."<<endl;
            cout<<"Name: ";
            cin>>ws;
            getline(cin,name);
            data[count][0] = name;
            count ++;
        }
        else if (choice == "l") {
            for (int i = 0; i < 10; i ++){
                cout<<data[i][0]<<endl;
            }
        }
        else if (choice == "q") {
            cout<<"Goodbye";
            break;
        }
    }
    
}