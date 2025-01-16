//#include <iostream>
//using namespace std;
//
//// The function to convert column number to Excel column title
//char* excelTitle(int colNum) {
//    static char result[10];
//    int index = 9;  // Start filling from the end
//    result[index--] = '\0';
//    while (colNum > 0) {
//        colNum--;
//        result[index--] = 'A' + (colNum % 26);
//        colNum /= 26;
//    }
//    return &result[index + 1];
//}
//
//// Main function to test excelTitle
//int main() {
//    // Test case 1: colNum = 1
//    int colNum1 = 1;
//    cout << "Column " << colNum1 << ": " << excelTitle(colNum1) << endl;
//
//    // Test case 2: colNum = 28
//    int colNum2 = 28;
//    cout << "Column " << colNum2 << ": " << excelTitle(colNum2) << endl;
//
//    // Test case 3: colNum = 701
//    int colNum3 = 701;
//    cout << "Column " << colNum3 << ": " << excelTitle(colNum3) << endl;
//
//    return 0;
//}
