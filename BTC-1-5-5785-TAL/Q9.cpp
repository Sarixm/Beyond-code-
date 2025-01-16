//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool uniqueOccurrences(int* arr, int n) {
//    int count[1000] = { 0 };  // Assuming array elements are within a reasonable range
//    int unique[1000] = { 0 };
//    for (int i = 0; i < n; i++) {
//        count[arr[i] + 500]++;
//    }
//    for (int i = 0; i < 1000; i++) {
//        if (count[i] > 0) {
//            if (unique[count[i]] > 0) return false;
//            unique[count[i]] = 1;
//        }
//    }
//    return true;
//}
//
//
//int main() {
//
//	vector<int>  arr1 = { 12, 28, 28, 12, 12, 32 };
//	cout << "\nexample 1 = " << uniqueOccurrences(arr1);
//	vector<int>  arr2 = { 1, 2 };
//	cout << "\nexample 2 = " << uniqueOccurrences(arr2);
//	vector <int>  arr3 = { -14, 0, 1, -14, 1, 1, 0, 1, 28, 1, 0, 0 };
//	cout << "\nexample 3 = " << uniqueOccurrences(arr3) << endl;
//	
//	return 0;
//}