//#include <iostream>
//#include <vector>
//using namespace std;
//
//int nTrees(int n) {
//    vector<int> dp(n + 1, 0);
//    dp[0] = dp[1] = 1;
//    for (int i = 2; i <= n; i++) {
//        for (int j = 0; j < i; j++) {
//            dp[i] += dp[j] * dp[i - 1 - j];
//        }
//    }
//    return dp[n];
//}
//
//int main() {
//
//	cout << " n = " << 3 << "nTrees = " << nTrees(3) << endl;
//	cout << " n = " << 4 << "nTrees = " << nTrees(4) << endl;
//	cout << " n = " << 6 << "nTrees = " << nTrees(6) << endl;
//	cout << " n = " << 1 << "nTrees = " << nTrees(1) << endl;
//	cout << " n = " << 0 << "nTrees = " << nTrees(0) << endl;
//
//
//	return 0;
//}