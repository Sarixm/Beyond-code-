//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int frequent(const int a[], int n) {
//    unordered_map<int, int> freq;
//    for (int i = 0; i < n; i++) {
//        freq[a[i]]++;
//    }
//    int maxFreq = 0, mostFrequent = a[0];
//    for (auto& entry : freq) {
//        if (entry.second > maxFreq) {
//            maxFreq = entry.second;
//            mostFrequent = entry.first;
//        }
//    }
//    return mostFrequent;
//}
//
//
//int main() {
//   int example1 [] = {14,14,7,42,18,8,8,8,8,42};
//    cout << "first example " << frequent (example1, 10) << endl;
//	int example2 [] = {42,42,42,42,42};
//    cout << "second example " << frequent (example2, 5) << endl;
//	int example3 [] = {42};
//    cout << "second example " << frequent (example3, 1) << endl;
//
//	return 0;
//}