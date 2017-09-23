#include <iostream>
#include <conio.h>

using namespace std;

int fact(int n){
    if (n <= 0)
        return 1;
    else
        return n*fact(n - 2);
}

int main(){
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    cout << "Giai thua cach la: " << fact(n) << endl;

    getch();
    return 0;
}
