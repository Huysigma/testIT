// #include<iostream>
// #include<math.h>
// using namespace std;
// int tinhtong(int n){
//     int S=1;
//     for(int i=1;i<=n;i++){
//         S=S*pow(i,i);
//     }
//     return S;
// }

// int main(){
//     int n, Sum;
//     cout<<"nhap so tu nhien n: ";cin>>n;
//     if(n<0){
//         cout<<"vui long nhap n>0!";
//     }else{
//         Sum= tinhtong(n);
//         cout<<"vay tong bang: "<<Sum;
//     }
// }

//
// #include<iostream>
// using namespace std;
// int main(){
// int a,b,c,maxx;
// cout << "nhap so a,b,c ";
// cin >>a>>b>>c;
// maxx==a;
// if(maxx<b){
//     maxx=b;
// }
// if(maxx<c){
//     maxx=c;
// }
// cout<<"vay max la: "<<maxx;
// }

//MẢNG ARRAY
// #include<iostream>
// using namespace std;

// int main() {
//     int X[4][3][2];  
//     for (int i = 0; i < 4; i++) {       
//         for (int j = 0; j < 3; j++) {   
//             for (int k = 0; k < 2; k++) {  
//                 cout << "Nhap phan tu X[" << i << "][" << j << "][" << k << "]: ";
//                 cin >> X[i][j][k];  
//             }
//         }
//     }
// }

//
// #include<iostream>
// using namespace std;

// int main() {
//     int n, a[1000];
//     cout << "Nhap n: ";
//     cin >> n;
    
//     for(int i = 0; i < n; i++) {
//         cout << "a[" << i << "] = ";
//         cin >> a[i];
//     }

//     cout << "Mang vua nhap: ";
//     for(int i = 0; i < n; i++) {
//         cout << a[i] << ' ';
//     }

//     cout << endl;
//     long long max = a[0];  
//     for(int i = 1; i < n; i++) { 
//         if (a[i] > max) {
//             max = a[i];  
//         }
//     }

//     cout << "Vay so lon nhat la: " << max;
//     return 0;
// }

//
// 

#include <iostream>
using namespace std;

int main() {
    int n, a[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    float C=0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            C+=a[i][j];
            }
        }
    
    cout << "vay so trung binh la: "<<(float)C/(2*3);
    return 0;
}

