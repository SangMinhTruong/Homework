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

    string test = dao(s);

    if (s == test) cout << "Dung." << endl;
    else cout << "Sai." << endl;

    getch();
    return 0;
}
