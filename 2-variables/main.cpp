#include <iostream>

using namespace std;

int main(){
    int lifes = 0; // 10, 25
    char letter = 'A'; // 'A', 'B'
    string name = "Jonh Doe"; // "Jonh", "Doe"
    double decimal = 5.125; // 3.1415926535897
    float decimal2 = 5.215; // 3.14
    bool isAlive = true; // true, false

    cout << "Type the number of lifes: " << endl;
    cin >> lifes;
    cout << "Type a letter: " << endl;
    cin >> letter;
    cout << "Type a name: " << endl;
    cin >> name;
    cout  << "Type a decimal number: " << endl;
    cin >> decimal;
    cout << "Type a decimal number 2: " <<  endl;
    cin >> decimal2;
    cout << "Is alive?" << endl;
    cin >> isAlive;

    cout << "Lifes: " << lifes << endl;
    cout << "Letter: " << letter << endl;
    cout << "Name: " << name << endl;
    cout << "Decimal 1: " << decimal << endl;
    cout << "Decimal 2: " << decimal2 << endl;
    cout << "Is Alive: " << isAlive << endl;

    return 0;
}