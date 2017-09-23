#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int giai(float a, float b, float c){
    if (a == 0) cout << "Khong la PT bac 2." << endl;
    else{
        float delta = b*b - 4*a*c;
        if(delta < 0) cout << "PT vo nghiem." << endl;
        else if(delta == 0) cout << "PT co nghiem kep x1 = x2 = " << -b/(2*a) << endl;
        else{
            cout << "PT co 2 nghiem phan biet:" << endl;
            cout << "x1 = " << -(b + sqrt(delta))/(2*a) << endl;
            cout << "x2 = " << -(b - sqrt(delta))/(2*a) << endl;
        }
    }
}

int main(){
    float a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;

    giai(a, b, c);

    getch();
    return 0;
}
