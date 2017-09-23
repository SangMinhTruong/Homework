#include <iostream>
#include <conio.h>

using namespace std;

int abs(int n){
    if (n < 0)
        return -n;
    else
        return n;
}

int kiemtra(int a, int b, int c){
    if (a > 0 && b > 0 && c > 0){
        if(a + b > c && c > abs(a - b))
            return 1;
        else
            return 0;
    }
    return 0;
}

int main(){
    int a,b,c;
    cout << "Nhap 3 canh: ";
    cin >> a >> b >> c;

    if(kiemtra(a, b, c) == 1) cout << "Dung." << endl;
    else cout << "Sai." << endl;

    getch();
    return 0;
}
