//#include <iostream>
//using namespace std;
//
//// The function from Task 3
//int* pascal(int rowIndex) {
//    static int row[33];  // Max size needed for rowIndex = 32
//    row[0] = 1;
//    for (int i = 1; i <= rowIndex; i++) {
//        row[i] = 1;
//        for (int j = i - 1; j > 0; j--) {
//            row[j] = row[j] + row[j - 1];
//        }
//    }
//    return row;
//}
//
//// Main function to test pascal
//int main() {
//    // Test case 1: rowIndex = 0
//    int* row0 = pascal(0);
//    cout << "Row 0: ";
//    for (int i = 0; i <= 0; i++) {
//        cout << row0[i] << " ";
//    }
//    cout << endl;
//
//    // Test case 2: rowIndex = 3
//    int* row3 = pascal(3);
//    cout << "Row 3: ";
//    for (int i = 0; i <= 3; i++) {
//        cout << row3[i] << " ";
//    }
//    cout << endl;
//
//    // Test case 3: rowIndex = 5
//    int* row5 = pascal(5);
//    cout << "Row 5: ";
//    for (int i = 0; i <= 5; i++) {
//        cout << row5[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
