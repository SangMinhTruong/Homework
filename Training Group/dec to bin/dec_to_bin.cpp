#include <iostream>
#include <conio.h>

using namespace std;

string dec2bin(int n){
    string s;
    while (n != 0){
        if (n % 2 != 0)
            s = '1' + s;
        else s = '0' + s;
        n = n/2;
    }
    return s;
}

int main(){
    int n;
    cout << "Nhap so can doi: ";
    cin >> n;

    string s = dec2bin(n);

    cout << "Chuoi nhi phan la: " << s;

    getch();
    return 0;
}
