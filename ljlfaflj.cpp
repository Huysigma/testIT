#include<iostream>
using namespace std;

bool laSoDoiXung(int n) {
    int soGoc = n, soDao = 0;
    while (n > 0) {
        soDao = soDao * 10 + n % 10;
        n /= 10;
    }
    return soGoc == soDao;
}

int main() {
    int n;
    cout << "Nhap so nguyen: ";
    cin >> n;
    
    if (laSoDoiXung(n))
        cout << n << " la so doi xung." << endl;
    else
        cout << n << " khong la so doi xung." << endl;
    
    return 0;
}
