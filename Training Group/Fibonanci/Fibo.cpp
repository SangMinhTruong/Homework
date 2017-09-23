#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n;
    cout << "Nhap so so trong day can in: ";
    cin >> n;

    unsigned long long last, new_, tmp;
    last = 0;
    new_ = 1;

    for(int i = 1; i <= n; i++){
        cout << new_ << " ";
        tmp = last;
        last = new_;
        new_ = tmp + last;
    }

    getch();
    return 0;
}
