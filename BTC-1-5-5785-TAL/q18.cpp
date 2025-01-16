//#include <iostream>
//using namespace std;
//
//
//int countSingle(int n) {
//    if (n == 0) return 1;
//    int total = 10, product = 9, available = 9;
//    for (int i = 2; i <= n; i++) {
//        product *= available--;
//        total += product;
//    }
//    return total;
//}
//
//int main() {
//
//  cout << " n = "<<countSingle(2) << endl;
//	cout << " n = "<<countSingle(1) << endl;
//  cout << " n = "<<countSingle(0) << endl;
//    
//	return 0;
//}