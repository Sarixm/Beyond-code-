//#include <iostream>
//using namespace std;
//
//int komarachi(int n) {
//    if (n == 0) return 0;
//    if (n == 1 || n == 2) return 1;
//    int a = 0, b = 1, c = 1, temp;
//    for (int i = 3; i <= n; i++) {
//        temp = a + b + c;
//        a = b;
//        b = c;
//        c = temp;
//    }
//    return c;
//}
//
//
//
//int main() {
//
//	cout << komarachi(3) << endl;
//	cout << komarachi(6) << endl;
//	cout << komarachi(32) << endl;
//
//
//	return 0;
//}