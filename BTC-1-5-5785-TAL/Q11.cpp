//#include <iostream>
//using namespace std;
//
//int findMinimumOperations(char* s1, char* s2, char* s3) {
//    int len1 = strlen(s1), len2 = strlen(s2), len3 = strlen(s3);
//    while (len1 > 0 && len2 > 0 && len3 > 0) {
//        if (s1[len1 - 1] == s2[len2 - 1] && s1[len1 - 1] == s3[len3 - 1]) {
//            len1--;
//            len2--;
//            len3--;
//        }
//        else {
//            if (len1 >= len2 && len1 >= len3) len1--;
//            else if (len2 >= len1 && len2 >= len3) len2--;
//            else len3--;
//        }
//    }
//    return len1 + len2 + len3;
//}
//
//
//int main() {
//      string s1 = "abc", s2 = "abb", s3 = "ab";
//    cout << "example 1 =  "<< findMinimumOperations(s1,s2,s3);
//    s1 = "dac"; s2 = "bac"; s3 = "cac";
//    cout << "example 2 =  "<< findMinimumOperations(s1,s2,s3);
//
//}