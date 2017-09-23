#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float F;
    cout << "Nhap nhiet do F: ";
    cin >> F;
    cout << "Nhiet do C tuong ung: " << (F - 32)*5/9 << endl;
    getch();
    return 0;
}
