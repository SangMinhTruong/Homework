#include <iostream>
#include <conio.h>

using namespace std;

string dao(string s){
    string r;
    for (int i = s.length() - 1; i >= 0;i--){
        r += s[i];
    }
    return r;
}

int main(){
    string s;
    cout << "Nhap so: ";
    cin >> s;

    s = dao(s);

    cout << "So sau khi doi: " << s << endl;

    getch();
    return 0;
}
