#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n;
    int s = 0;
    cout << "Nhap n: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
        s += i*i;

    cout << "Tong la: " << s << endl;

    getch();
    return 0;
}
