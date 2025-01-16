//#include <iostream>
//using namespace std;
//
//// Function to validate if a 9x9 Sudoku board is valid
//bool sudoku(int board[9][9]) {
//    int row[9][10] = { 0 }, col[9][10] = { 0 }, box[9][10] = { 0 };
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            int num = board[i][j];
//            if (num != 0) {
//                int boxIndex = (i / 3) * 3 + j / 3;
//                if (row[i][num]++ || col[j][num]++ || box[boxIndex][num]++) {
//                    return false;
//                }
//            }
//        }
//    }
//    return true;
//}
//
//// Function to print the Sudoku board
//void printSudoku(int board[9][9]) {
//    cout << "Sudoku Board:" << endl;
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            if (j > 0 && j % 3 == 0) cout << "| ";  // Add vertical separator
//            if (board[i][j] == 0) {
//                cout << ". ";  // Print '.' for empty cells
//            }
//            else {
//                cout << board[i][j] << " ";  // Print actual cell value
//            }
//        }
//        cout << endl;
//        if ((i + 1) % 3 == 0 && i != 8) {
//            cout << "------+-------+------" << endl;  // Add horizontal separator
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//    // Test case: A partially filled Sudoku board
//    int example1[9][9] = {
//        {5, 3, 0, 0, 7, 0, 0, 0, 0},
//        {6, 0, 0, 1, 9, 5, 0, 0, 0},
//        {0, 9, 8, 0, 0, 0, 0, 6, 0},
//        {8, 0, 0, 0, 6, 0, 0, 0, 3},
//        {4, 0, 0, 8, 0, 3, 0, 0, 1},
//        {7, 0, 0, 0, 2, 0, 0, 0, 6},
//        {0, 6, 0, 0, 0, 0, 2, 8, 0},
//        {0, 0, 0, 4, 1, 9, 0, 0, 5},
//        {0, 0, 0, 0, 8, 0, 0, 7, 9}
//    };
//
//    // Print the Sudoku board
//    printSudoku(example1);
//
//    // Validate the Sudoku board
//    if (sudoku(example1)) {
//        cout << "The Sudoku board is valid." << endl;
//    }
//    else {
//        cout << "The Sudoku board is invalid." << endl;
//    }
//
//    return 0;
//}
