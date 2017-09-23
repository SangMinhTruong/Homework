#include <iostream>
#include <conio.h>

using namespace std;

int kiemtra(int n){
    if (n % 4 == 0){
        if (n % 100 == 0 && n % 400 != 0)
            return 0;
        else
            return 1;
    }
    return 0;
}

int main(){
    int nam;
    cout << "Nhap nam: ";
    cin >> nam;

    int flag = kiemtra(nam);

    if (flag) cout << "Dung." << endl;
    else cout << "Sai." << endl;

    getch();
    return 0;
}
