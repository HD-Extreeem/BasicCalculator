#include <iostream>

double getNumber();
bool checkAgain();

using namespace std;

int main() {
    double nbr1, nbr2;
    int choice;
    bool again = true;

    while(again){
        cout << "Welcome to basic Calculator!\n";
        cout << "Enter the operation by choosing the number"<<endl<<endl;
        cout << " ********************" << endl;
        cout << " | 1. Addition      |" << endl;
        cout << " | 2. Subtraction   |" << endl;
        cout << " | 3. Multiplication|" << endl;
        cout << " | 4. Division      |" << endl;
        cout << " ********************" << endl;
        cout << "Choice: ";
        cin >> choice;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Bad Entry,Please enter a valid Choice Number: ";
            cin >> choice;
            if (choice <= 1 && choice >= 4) {
                break;
            }
        }
        cout << "Enter First Number: ";
        nbr1 = getNumber();

        cout << "Enter Second Number: ";
        nbr2 = getNumber();

        switch (choice) {
            case 1:
                cout << "Result of " << nbr1 << " + " << nbr2 << " = " << nbr1 + nbr2 << endl;
                break;

            case 2:
                cout << "Result of " << nbr1 << " - " << nbr2 << " = " << nbr1 - nbr2 << endl;
                break;
            case 3:
                cout << "Result of " << nbr1 << " x " << nbr2 << " = " << nbr1 * nbr2 << endl;
                break;
            case 4:
                cout << "Result of " << nbr1 << " / " << nbr2 << " = " << nbr1 / nbr2 << endl;
                break;

            default:
                cout <<"Something went wrong with inputData, try Again!" << endl;
                break;
        }
        again = checkAgain();
        if (!again){
            return 0;
        }
    }

}

bool checkAgain() {
    char type;
    do
    {
        cout << "Do you want Calculate again? [y/n]" << endl;
        cin >> type;
    }
    while( !cin.fail() && type!='y' && type!='n' );
    return type == 'y';
}

double getNumber() {
    double nbr;
    cin >> nbr;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Bad Entry,Please enter a valid IntegerNumber: ";
        cin >> nbr;
    }
    return nbr;
}