#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main(){
    string s;
    cout << "Nhap chuoi nhi phan: " << endl;
    cin >> s;

    int tong = 0;
    for (int i = s.length() - 1; i >= 0; i--){
        if (s[i] == '1') tong += pow(2,(s.length() - 1 - i));
    }

    cout << "Trong he thap phan: " << tong << endl;

    getch();
    return 0;
}
