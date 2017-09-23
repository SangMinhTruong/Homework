#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int x;
    cout << "Nhap x: ";
    cin >> x;

    int s = 0;
    while (x != 0){
        s += x % 10;
        x /= 10;
    }

    cout << "Tong chu so: " << s << endl;

    getch();
    return 0;
}
