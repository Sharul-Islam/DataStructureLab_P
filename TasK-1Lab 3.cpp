#include <iostream>
using namespace std;



int main() {
   int b[3][4], transpose[3][4],row,column,i,j;



  cout << "Enter rows number and columns number of matrix: ";
   cin >> row >> column;



  cout << "Enter elements of matrix: "<<endl;

   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << "Enter element pst" << i + 1 << j + 1 << ": ";
         cin >> b[i][j];
      }
   }

   cout << "Entered matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << b[i][j];
         if (j == column - 1)
            cout << endl << endl;
      }
   }

   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transpose[j][i] = b[i][j];
      }

   cout << "Transpose of matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }



  return 0;
}

