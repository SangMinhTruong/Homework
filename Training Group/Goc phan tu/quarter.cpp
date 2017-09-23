#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float phi;
    cout << "Nhap goc: ";
    cin >> phi;
    while (phi < 0 || phi > 360){
        if (phi < 0) phi += 360;
        else if (phi > 360) phi -= 360;
    }
    if (0 < phi && phi < 90) cout << "Goc phan tu thu I." << endl;
    else if (90 < phi && phi < 180) cout << "Goc phan tu thu II." << endl;
    else if (180 < phi && phi < 270) cout << "Goc phan tu thu III." << endl;
    else if (270 < phi && phi < 360) cout << "Goc phan tu thu IV." << endl;
    else cout << "Thuoc truc toa do." << endl;

    getch();
    return 0;
}
