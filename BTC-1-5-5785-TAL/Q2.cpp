//#include <iostream>
//using namespace std;
//
//double variance(int* marks, int n) {
//	double sum = 0, var=0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += marks[i];
//	}
//	double m = sum / n;
//	double a = 0;
//	for (int i = 0; i < n; i++)
//	{
//		a = pow(marks[i] - m, 2);
//		var += a ;
//	}
//	return var / n;
//}
//int main() {
//
//	int example1[] = { 7 };
//	cout << variance(example1, 1);
//
//
//
//	return 0;
//}