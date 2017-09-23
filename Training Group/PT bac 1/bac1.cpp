#include <iostream>
#include <conio.h>

using namespace std;

int giai(float a, float b){
    if (a == 0){
        if (b == 0)
            cout << "PT vo so nghiem." << endl;
        else
            cout << "PT vo nghiem." << endl;
    }
    else
        cout << "PT co nghiem duy nhat: " << -b/a << endl;
}

int main(){
    float a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;

    giai(a, b);

    getch();
    return 0;
}
