//#include <iostream>
//using namespace std;
//
//void moveZeroes(int* nums, int n)
//{
//    for (int k = 0; k < n; k++)
//    {
//        for (int i = 0; i < n; i++)
//            if (nums[i] == 0)
//            {
//                for (int j = i; j < n - 1; j++)
//                {
//                    nums[j] = nums[j + 1];
//                }
//                nums[n - 1] = 0;
//            }
//    }
//}
//
//int main() 
//{
//    int example1[] = { 0,42,0,14,0,-5,2,0,8 };
//    moveZeroes(example1,9);
//    for (int i = 0; i < 9; i++)
//        cout << example1[i]<<" ";
//	return 0;
//}