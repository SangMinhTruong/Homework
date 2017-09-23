#include <iostream>
#include <conio.h>

using namespace std;

float tong(float s, int n){
    if (n < 0)
        return s;
    else
        return tong(s + 1./((2*n + 1)*(2*n + 2)), n - 1);
}

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Tong la: " << tong(0,n) << endl;

    getch();
    return 0;
}
