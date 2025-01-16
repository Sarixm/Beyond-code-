#include <iostream>
using namespace std;

int frequent(const int a[], int n) {
	int nmux;
	int couma=0, count=0;
	for (int i = 0; i < n; i++)
	{
		int c = a[1];
		for (int j = 1; j < n; j++) {
			if (a[j] == c)
				count++;
		}
		if (couma < count)
			couma = count;
		nmux = c;
	}
	return nmux; 
}

int main() {
   int example1 [] = {14,14,7,42,18,42,12,42,17,42};
    cout << "first example " << frequent (example1, 10) << endl;
	int example2 [] = {42,42,42,42,42};
    cout << "second example " << frequent (example2, 5) << endl;
	int example3 [] = {42};
    cout << "second example " << frequent (example3, 1) << endl;

	return 0;
}