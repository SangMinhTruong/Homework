#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 5; j++) cout << j << " x " << i << " = " << i*j << "\t";
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= 9; i++){
        for (int j = 6; j <= 10; j++) cout << j << " x " << i << " = " << i*j << "\t";
        cout << endl;
    }

    getch();
    return 0;
}
