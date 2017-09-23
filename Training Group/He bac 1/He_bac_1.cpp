#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float a1,a2,b1,b2,c1,c2;
    cout << "Nhap a1, b1, c1: ";
    cin >> a1 >> b1 >> c1;
    cout << "Nhap a2, b2, c2: ";
    cin >> a2 >> b2 >> c2;

    if(a1*b2 - a2*b1 == 0 && c1*b2 - c2*b1 == 0)
        cout << "He co vo so nghiem." << endl;
    else if (a1*b2 - a2*b1 == 0 && c1*b2 - c2*b1 != 0)
        cout << "He vo nghiem." << endl;
    else{
        float x = (c1*b2 - c2*b1)/(a1*b2 - a2*b1);
        float y = (c1 - a1*x)/b1;
        cout << "He co nghiem (x,y) = " << "(" << x << "," << y << ")" << endl;
    }

    getch();
    return 0;
}
