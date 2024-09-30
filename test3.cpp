#include <iostream>
using namespace std;
// TÍNH SỐ THUẾ
// int main() {
//     float i;
//     float s;
//     cout << "nhap so tien luong cua ban: ";
//     cin >> i;
//     if (i>=15){
//         s= i-i*0.3;
//         cout << (float)s << endl;
//     } else if (i>7 && i <15){
//         s=i-i*0.2;
//         cout << (float)s << endl;
//     } else {
//         s=i-i*0.1;
//         cout << (float)s << endl;
//     }
// }
// MAX MIN
// int main() {
//     int a1, a2, a3, max;
//     cout << "nhap 3 so: ";
//     cin >> a1 >> a2 >> a3;
//     max = a1;
//     if (max<a2) max=a2;
//     if (max<a3) max=a3;
//     cout << "vay so lon nhat la: " << max;

// }
// MẢNG MỘT CHIỀU
// int main () {
    
//     int Huy[5] = {1,2,3,4,5};
// for (int i=0; i<=4; i++){
//     cout << Huy[i] << endl;
// }
// }
int main(){
   //Lưu ý là mảng a chỉ lưu được tối đa 1000 phần tử
   int n, a[1000];
   cout << "Nhap n : ";
   cin >> n;
   for(int i = 0; i < n; i++){
      cout << "a[" << i << "] = ";
      cin >> a[i]; 
   }
   cout << "Mang vua nhap : ";
   for(int i = 0; i < n; i++){
      cout << a[i] << ' ';
   }
   return 0;
}