// #include <iostream>
// using namespace std;

// int main() {
//     int n; // Số lượng phần tử cần in
//     cout << "nhap n: ";
//     cin >> n;

//     int sobandau = 7; // Phần tử đầu tiên của dãy
//     int khoangcach = 5; // Độ chênh lệch giữa các phần tử

//     for (int i = 0; i < n; ++i) {
//         cout << sobandau << " ";
//         khoangcach += khoangcach; // Tăng phần tử hiện tại với độ chênh lệch
//         khoangcach += 2; // Độ chênh lệch tăng thêm 2 sau mỗi lần
//     }

//     return 0;
// }
//KIM TU THAP
// #include <iostream>
// using namespace std;

// int main() {
//     int height;
//     cout << "nhap so bac: ";
//     cin >> height;

//     for (int i = 1; i <= height; ++i) {
//         // In khoảng trắng để căn giữa các bậc
//         for (int j = 1; j <= height - i; ++j) {
//             cout << " ";
//         }
//         // In dấu '*' tạo thành kim tự tháp
//         for (int k = 1; k <= 2 * i - 1; ++k) {
//             cout << "*";
//         }
//         // Xuống dòng sau mỗi bậc
//         cout << endl;
//     }

//     return 0;
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main() {
//     int i=1,a=0,b=0,S=0;
//     for ( i=1;i<=1000;i++){
//         if(i%2=0){S=-i}
//         else{S=+i}
//         b=b+i;
//         a=a+i;
//     }
//     S=a+b;
// }

//2.5
// #include<iostream>
// using namespace std;
// int main(){
//     int d;
//     cout<<"nhap so diem cua hoc sinh: ";
//     cin>> d;
//     if(d<0&&d>10){
//         cout<<"diem khong hop le: ";
//     }else{
//         if(d>5&&d<8){
//             cout<<"diem cua hoc sinh la: "<<d<<endl<<"Hoc sinh kha";
//         }else{
//              cout<<"diem cua hoc sinh la: "<<d<<endl<<"Hoc sinh gioi";
//         }
//     }

// }

//2.7
// #include<iostream>
// using namespace std;
// main(){
//     int n,i;
//      do{
//         cout<<"nhap so tu nhien n= "<<endl;
//     cin>>n;  
//     if(n<0){
//         cout<<"vui long nhap so lon hon 0 !";
//     }
// }
//     while(n<0);

//     int S=0;
//     for(i=0;i<=n;i++){
//         S=S+i;
        
//     } 
//     cout<<"tong so tu nhien tu 0 den n la: "<<S;
// }
// #include<iostream>
// using namespace std;
// main(){
//     float diem;
//     do{
//         cout<<"nhap diem: ";
//         cin>>diem;
//         if(diem<0 || diem >10){
//             cout<<"diem khong hop le!"<<endl;
//         }
//     }while(diem<0 || diem >10);
//     cout<<"diem hop le!";
// }


// #include<iostream>
// using namespace std;
// main(){
//     int n;
//     cout<<"nhap n: ";
//     cin>>n;
//     if(n<0 || n>100){cout<<"invalid number, X must be in range [0,100]";return 0;}
//     cout<<"valid number";
//     return 0;
// }

// #include<iostream>
// using namespace std;

// // Hàm tính bảng AND
// void logicAND(int X, int Y) {
//     int Z = (X == 1 && Y == 1) ? 1 : 0;
//     cout << "Gia tri Z theo bang AND: " << Z << endl;
// }

// // Hàm tính bảng OR
// void logicOR(int X, int Y) {
//     int Z = (X == 1 || Y == 1) ? 1 : 0;
//     cout << "Gia tri Z theo bang OR: " << Z << endl;
// }

// // Hàm tính bảng XOR
// void logicXOR(int X, int Y) {
//     int Z = (X != Y) ? 1 : 0;
//     cout << "Gia tri Z theo bang XOR: " << Z << endl;
// }

// int main() {
//     int X, Y, choice;
//     cout << "Nhap gia tri X (0 hoac 1): ";
//     cin >> X;
//     cout << "Nhap gia tri Y (0 hoac 1): ";
//     cin >> Y;

//     // Chọn bảng logic
//     cout << "Chon bang logic: 1-AND, 2-OR, 3-XOR: ";
//     cin >> choice;

//     // Gọi hàm tương ứng
//     switch (choice) {
//         case 1:
//             logicAND(X, Y);
//             break;
//         case 2:
//             logicOR(X, Y);
//             break;
//         case 3:
//             logicXOR(X, Y);
//             break;
//         default:
//             cout << "Lua chon khong hop le!" << endl;
//             break;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Nhap so nguyen duong (<=10): ";
//     cin >> n;
//     if (n < 0 || n > 10) {
//         cout << "So nhap khong hop le!" << endl;
//         return 0;
//     }
//     switch(n) {
//         case 0: cout << "Khong"; break;
//         case 1: cout << "Mot"; break;
//         case 2: cout << "Hai"; break;
//         case 3: cout << "Ba"; break;
//         case 4: cout << "Bon"; break;
//         case 5: cout << "Nam"; break;
//         case 6: cout << "Sau"; break;
//         case 7: cout << "Bay"; break;
//         case 8: cout << "Tam"; break;
//         case 9: cout << "Chin"; break;
//         case 10: cout << "Muoi"; break;
//         default: cout << "Loi"; break;
//     }
//     return 0;
// }

//nhap n bat ki, if n%2==0 > n=n/2; else n=n*3+1; lap lai 100 lan
//
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"nhap so tu nhien: ";
// int n; cin >> n;
//  for(int i=1;i<=100;i++){
//     if(n%2==0){
//         n=n/2;
//     }else{
//         n=n*3 + 1;
//     }
//     cout<<"so n lan thu "<<i<<" la: "<<n<<endl;
//  }
// return 0;
// }


//
// #include<iostream>
// using namespace std;
// int main(){
//     int S=0;
//     for(int i=0;i<=5000;i++){
//         if(i%3==0 xor i%7==0){
//             S=S+i;
//         }
//     }
//     cout<<"tong cac so la: "<<S;
//     return 0;
// }

//
// #include<iostream>
// using namespace std;
// int main(){
//     int S=0;
//     for(int n=1;n<=100;n++){
//         for(int m=1;m<=n;m++){
//             S=S+m;
//         }
//     }
//     cout<<"tong = "<<S;
// }


// #include<iostream>
// using namespace std;
// int Huy(int n){
//     for(int i=1; i<=n; i++){
//         cout<<i<<endl;  
//     }
//      return 0;
// }
// int main(){
//     int n;
//     cout<<"nhap so tu nhien n: ";
//     cin >> n;
//     if(n<0){
//         cout<<"vui long nhap so tu nhien lon hon 0";
//     }else{
//         Huy(n);
//     }
// }

//
#include<iostream>
using namespace std;

// Định nghĩa các hàm cho các phép toán
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if(b != 0) 
        return a / b;
    else {
        cout << "Khong the chia cho 0" << endl;
        return 0;
    }
}

// Khai báo con trỏ hàm
typedef int (*operation)(int, int);

int main() {
    int a, b;
    char op;
    operation func = nullptr;  // con trỏ hàm
    
    cout << "Nhap hai so nguyen: ";
    cin >> a >> b;
    
    cout << "Nhap phep toan (+, -, *, /): ";
    cin >> op;
    
    // Xác định hàm tương ứng với phép toán
    switch(op) {
        case '+':
            func = add;
            break;
        case '-':
            func = subtract;
            break;
        case '*':
            func = multiply;
            break;
        case '/':
            func = divide;
            break;
        default:
            cout << "Toan tu khong hop le!" << endl;
            return 1;
    }

    // Thực hiện phép toán thông qua con trỏ hàm
    if (func != nullptr) {
        int result = func(a, b);
        cout << "Ket qua: " << result << endl;
    }

    return 0;
}

