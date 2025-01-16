//#include <iostream>
//#include <vector>
//using namespace std;
//
//int findMin(vector<int>& nums) {
//    int left = 0, right = nums.size() - 1;
//
//    while (left < right) {
//        int mid = left + (right - left) / 2;
//        if (nums[mid] > nums[right]) {
//            left = mid + 1;
//        }
//        else {
//            right = mid;
//        }
//    }
//    return nums[left];
//}
//
//int main() {
//    vector<int> example1 = { 14, 28, 32, 7, 12 };
//    cout << "\nExample 1 = " << findMin(example1);
//
//    vector<int> example2 = { 4, 5, 6, 7, 0, 1, 2 };
//    cout << "\nExample 2 = " << findMin(example2);
//
//    vector<int> example3 = { 14, 17, 28, 32 };
//    cout << "\nExample 3 = " << findMin(example3);
//
//    return 0;
//}