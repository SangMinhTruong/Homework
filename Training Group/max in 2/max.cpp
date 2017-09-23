#include <iostream>
#include <conio.h>

using namespace std;

int maximum(int x, int y){
    if (x >= y)
        return x;
    else
        return y;
}

int main(){
    int x,y;
    cout << "Nhap hai so: ";
    cin >> x >> y;

    cout << "So lon nhat la: " << maximum(x,y) << endl;

    getch();
    return 0;
}
