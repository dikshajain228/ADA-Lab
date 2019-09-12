
#include <bits/stdc++.h> 
using namespace std; 
  
#define UNASSIGNED 0  
#define N 9  

int grid[N][N];

bool FindUnassignedLocation(int grid[N][N],  
                            int &row, int &col);  
bool isSafe(int grid[N][N], int row, 
                   int col, int num);  
  
bool SolveSudoku(int grid[N][N])  
{  
    int row, col;  
  
    if (!FindUnassignedLocation(grid, row, col))  
    return true; 
  
    // consider digits 1 to 9  
    for (int num = 1; num <= 9; num++)  
    {  
        if (isSafe(grid, row, col, num))  
        {  
            grid[row][col] = num;  
            if (SolveSudoku(grid))  
                return true;  
  
            grid[row][col] = UNASSIGNED;  
        }  
    }  
    return false;   
}  
  
bool FindUnassignedLocation(int grid[N][N],  
                            int &row, int &col)  
{  
    for (row = 0; row < N; row++)  
        for (col = 0; col < N; col++)  
            if (grid[row][col] == UNASSIGNED)  
                return true;  
    return false;  
}  
  
/* Returns a boolean which indicates whether  
an assigned entry in the specified row matches 
the given number. */
bool UsedInRow(int grid[N][N], int row, int num)  
{  
    for (int col = 0; col < N; col++)  
        if (grid[row][col] == num)  
            return true;  
    return false;  
}  
  
/* Returns a boolean which indicates whether  
an assigned entry in the specified column 
matches the given number. */
bool UsedInCol(int grid[N][N], int col, int num)  
{  
    for (int row = 0; row < N; row++)  
        if (grid[row][col] == num)  
            return true;  
    return false;  
}  
  
/* Returns a boolean which indicates whether  
an assigned entry within the specified 3x3 box  
matches the given number. */
bool UsedInBox(int grid[N][N], int boxStartRow, 
               int boxStartCol, int num)  
{  
    for (int row = 0; row < 3; row++)  
        for (int col = 0; col < 3; col++)  
            if (grid[row + boxStartRow] 
                    [col + boxStartCol] == num)  
                return true;  
    return false;  
}  
  
/* Returns a boolean which indicates whether  
it will be legal to assign num to the given  
row, col location. */
bool isSafe(int grid[N][N], int row,  
                   int col, int num)  
{  
    return !UsedInRow(grid, row, num) &&  
           !UsedInCol(grid, col, num) &&  
           !UsedInBox(grid, row - row % 3 ,  
                      col - col % 3, num) &&  
            grid[row][col] == UNASSIGNED;  
}  

void printGrid(int grid[N][N])  
{  
    for (int row = 0; row < N; row++)  
    {  
    for (int col = 0; col < N; col++)  
            cout << grid[row][col] << " ";  
        cout << endl; 
    }  
}  
  
int main()  
{  
   cout<<"Enter the sudoku grid"<<endl;
   for(int i=0;i<N;i++)
	   for(int j=0;j<N;j++)
		   cin>>grid[i][j];
	cout<<endl<<endl;	   
    if (SolveSudoku(grid) == true)  
        printGrid(grid);  
    else
		cout<<"Cannot be solved"<<endl;
	
	return 0;
}	