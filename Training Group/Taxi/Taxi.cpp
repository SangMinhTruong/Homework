#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

#define cuoc 9000.;
int main(){
    //Gia cuoc theo GrabCar
    float tien = 20000.;
    float km;
    cout << "Nhap so km can di: ";
    cin >> km;

    if (km <= 2)
        cout << tien << endl;
    else{
        tien += (km - 2.)*cuoc;
        cout << fixed;
        cout << setprecision(0) << tien << endl;
    }

    getch();
    return 0;
}
