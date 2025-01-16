//#include <iostream>
//#include <vector>
//using namespace std;
//
//int Min(int first, int end, int size, vector<int>& nums)
//{
//	int middle = first +size / 2;
//	if (middle == 0)
//		return nums[middle + 1];
//	if (nums[middle] < nums[middle + 1] && nums[middle] < nums[end])
//		return Min(0, end / 2, size / 2, nums);
//	else
//	{
//		if (size % 2 == 0)
//			return Min(middle + 1, end, size / 2, nums);
//		else
//			return Min(middle + 1, end, size / 2 + 1, nums);
//	}
//}
//int findMin(vector<int>& nums)
//{
//	int Arrsize = size(nums);
//	int end= size(nums)-1;
//	return Min(0, end, Arrsize, nums);
//}
//
//
//int main() {
//
//	vector<int> examlple1 = { 14, 28, 32, 7, 12 };
//	cout << "\nExample 1 = " << findMin(examlple1);
//	vector<int> examlple2 = { 4, 5, 6, 7, 0, 1, 2 };
//	cout << "\nExample 2 = " << findMin(examlple2);
//	vector<int> examlple3 = { 14, 17, 28, 32 };
//	cout << "\nExample 3 = " << findMin(examlple3);
//
//}