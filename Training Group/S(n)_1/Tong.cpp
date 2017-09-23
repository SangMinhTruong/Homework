#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n;
    float s = 0;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        s = s + 1./i;

    cout << "Tong la: " << s << endl;

    getch();
    return 0;
}
