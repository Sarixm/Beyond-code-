#include <iostream>
using namespace std;

int nTrees(int n) {
	if (n == 1) { return 1; }
	if (n == 0 || n == -1) { return 0; }
	if (n > 3) {
		return (2 * nTrees(n - 1) + 2 * nTrees(n - 2));
	}
	return (2 * nTrees(n - 1) + nTrees(n - 2));
	

}

int main() {

	cout << " n = " << 3 << "nTrees = " << nTrees(3) << endl;
	cout << " n = " << 4 << "nTrees = " << nTrees(4) << endl;
	cout << " n = " << 6 << "nTrees = " << nTrees(6) << endl;
	cout << " n = " << 1 << "nTrees = " << nTrees(1) << endl;
	cout << " n = " << 0 << "nTrees = " << nTrees(0) << endl;


	return 0;
}