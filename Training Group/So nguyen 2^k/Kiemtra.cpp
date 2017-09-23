#include <iostream>
#include <conio.h>

using namespace std;

int kiemtra(int n){
    if (n == 1)
        return 1;
    else if (n % 2 != 0)
        return 0;
    else
        return kiemtra(n/2);
}

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (kiemtra(n) == 1)
        cout << "Dung" << endl;
    else
        cout << "Sai" << endl;

    getch();
    return 0;
}
