#include<iostream>
#include<string>
using namespace std;

int main() {
    int age,h;
    int b;
    string c;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
        if(age <= 25) {
            cout << "Enter your height: ";
            cin >> h;
                if(h < 100){
                    c = "Chopper";
                }
                else if(h < 180){
                    c = "Usopp";
                }
                else {
                    cout << "Enter your bounty: ";
                    cin >> b;
                        if(b > 1.1e9) {
                            c = "Zoro";
                        }
                        else {
                            c = "Sanji";
                        }
                }
        }
        else if(age <= 60){
            cout << "Enter your bounty: ";
            cin >> b;
                if(b > 5e8) {
                    c = "Jinbe";
                }
                else {
                    c = "Franky";
                }
        }
        else {
            c = "Brook";
        }
        cout << "Your character = ";
        cout << c;
        return 0;
}


