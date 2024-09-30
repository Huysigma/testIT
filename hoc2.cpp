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

