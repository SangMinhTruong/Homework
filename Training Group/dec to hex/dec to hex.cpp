#include <iostream>
#include <conio.h>

using namespace std;

char hexchar(int n){
    switch(n){
    case 10:
        return 'A';
    case 11:
        return 'B';
    case 12:
        return 'C';
    case 13:
        return 'D';
    case 14:
        return 'E';
    case 15:
        return 'F';
    default:
        return (char)(n + '0');
    }
}

string dec2hex(int n){
    string value;
    while (n != 0){
        int r1 = n % 16;
        char r2 = hexchar(r1);
        value = r2 + value;
        n = n/16;
    }
    return value;
}

int main(){
    int n;
    cout << "Nhap so can doi: ";
    cin >> n;

    cout << "Ket qua la: " << dec2hex(n) << endl;

    getch();
    return 0;
}
