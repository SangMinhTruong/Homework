#include <iostream>
#include <conio.h>

using namespace std;

int tongmau(int n){
    if (n == 1)
        return 1;
    else
        return n + tongmau(n - 1);
}

float tong(int n){
    if (n == 1)
        return 1.;
    else
        return 1./tongmau(n) + tong(n - 1);
}

int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Tong la: " << tong(n) << endl;

    getch();
    return 0;
}
