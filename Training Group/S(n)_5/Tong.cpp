#include <iostream>
#include <conio.h>

using namespace std;

float tong(int n){
    if (n == 0)
        return 1.;
    else
        return 1./(2*n + 1) + tong(n - 1);
}

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Tong la: " << tong(n) << endl;

    getch();
    return 0;
}
