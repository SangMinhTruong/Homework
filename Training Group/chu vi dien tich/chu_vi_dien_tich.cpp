#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void tamgiac(float a, float b, float c){
    while(true){
    if(a > 0 && b > 0 && c > 0){
        if (!(a + b > c && c > abs(a - b))){
            cout << "Khong la tam giac." << endl;
            break;
        }
    }
    else{
        cout << "Khong la tam giac." << endl;
        break;
    }

    float p = (a + b + c)/2;
    cout << "Chu vi tam giac: " << a + b + c << endl;
    cout << "Dien tich tam giac: " << sqrt(p*(p - a)*(p - b)*(p - c)) << endl;
    break;
    }
}

void hcn(float a, float b){
    cout << "Chu vi hcn: " << 2*(a + b) << endl;
    cout << "Dien tich hcn: " << a*b << endl;
}

void htron(float r){
    cout << "Chu vi duong tron: " << 2*3.14*r << endl;
    cout << "Dien tich hinh tron: " << r*r*3.14 << endl;
}

int main(){
    float a,b,c,d,e,r;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    cout << "Nhap 2 canh hcn: ";
    cin >> d >> e;
    cout << "Nhap ban kinh duong tron: ";
    cin >> r;
    cout << endl;

    tamgiac(a,b,c);
    cout << endl;
    hcn(d,e);
    cout << endl;
    htron(r);

    getch();
    return 0;
}
