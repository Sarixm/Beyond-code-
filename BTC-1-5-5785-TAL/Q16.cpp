//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool canVisitAllRooms(int rooms[][100], int n) {
//    int visited[100] = { 0 };
//    int stack[100], top = -1;
//    stack[++top] = 0;
//    visited[0] = 1;
//
//    while (top >= 0) {
//        int room = stack[top--];
//        for (int i = 0; i < n; i++) {
//            if (rooms[room][i] && !visited[i]) {
//                visited[i] = 1;
//                stack[++top] = i;
//            }
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (!visited[i]) return false;
//    }
//    return true;
//}
//
//// פונקציית עזר להדפסת המטריצה
//void printRooms(int rooms[][100], int n) {
//    cout << "Rooms matrix:" << endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << rooms[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    // דוגמה 1: אפשר לבקר בכל החדרים
//    int rooms1[100][100] = {
//        {0, 1, 1, 0},
//        {1, 0, 0, 1},
//        {1, 0, 0, 1},
//        {0, 1, 1, 0}
//    };
//    int n1 = 4;
//
//    cout << "Example 1:" << endl;
//    printRooms(rooms1, n1);
//    cout << "Can visit all rooms: " << (canVisitAllRooms(rooms1, n1) ? "Yes" : "No") << endl << endl;
//
//    // דוגמה 2: אי אפשר לבקר בכל החדרים
//    int rooms2[100][100] = {
//        {0, 1, 0, 0},
//        {1, 0, 0, 0},
//        {0, 0, 0, 1},
//        {0, 0, 1, 0}
//    };
//    int n2 = 4;
//
//    cout << "Example 2:" << endl;
//    printRooms(rooms2, n2);
//    cout << "Can visit all rooms: " << (canVisitAllRooms(rooms2, n2) ? "Yes" : "No") << endl;
//
//    return 0;
//}