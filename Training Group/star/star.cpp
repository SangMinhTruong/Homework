#include <iostream>
#include <conio.h>

using namespace std;

string strmul(int n,string s){
    string r = "";
    for (int i = 1; i <= n; i++){
        r += s;
    }
    return r;
}

int main(){
    for (int i = 1; i <= 5; i += 2)  cout << strmul((15 - i)/2,"  ") << strmul(i,"* ") << "\n";
    for (int i = 15; i >= 7; i -= 2) cout << strmul((15 - i)/2,"  ") << strmul(i,"* ") << "\n";
    for (int i = 9; i <= 11; i += 2) cout << strmul((15 - i)/2,"  ") << strmul(i,"* ") << "\n";
    for (int i = 1; i <= 1; i += 2) cout << strmul((3 - i), " " ) << strmul((13 - i)/2,"* ") << strmul(2*i, " ") << strmul((13 - i)/2,"* ") << "\n";
    cout << strmul(6,"* ") << strmul(6, " ") << strmul(6, "* ");
    getch();
    return 0;
}
