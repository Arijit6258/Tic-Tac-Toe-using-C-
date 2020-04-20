#include <iostream>
using namespace std;
class tictactoe
{
	char arr[3][3];
	
	public:
		tictactoe() {
			cout << "\t\t !! WELCOME TO TIC-TAC-TOE GAME !! \n";
			cout << endl;
			arr[0][0] = '1'; arr[0][1] = '2'; arr[0][2] = '3'; 
			arr[1][0] = '4'; arr[1][1] = '5'; arr[1][2] = '6'; 
			arr[2][0] = '7'; arr[2][1] = '8'; arr[2][2] = '9';
		}

		void print_arr()
		{
			cout << "\n";
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 3; j++) {
					if (i%2 == 0) cout << "|  " << arr[i/2][j] << "  |";
					else cout << "_______";
				}
				cout << endl;
			}
			cout << endl;
		}


		void insert(char c, char sign)
		{
			int row, col;
			if ('1' <= c && c <= '3') row = 0;
			else if ('4' <= c && c <= '6') row = 1;
			else row = 2;
			if (c == '1' || c == '4' || c == '7') col = 0;
			else if (c == '2' || c == '5' || c == '8') col = 1;
			else col = 2;
			arr[row][col] = sign;
		}

		bool check(char p1_s)
		{
			// p1_s - row wise
			for (int i = 0; i < 3; i++) {
				bool row_wise = true;
				for (int j = 0; j < 3; j++) {
					if (arr[i][j] != p1_s) {
						row_wise = false; 
						break;
					}
				}
				if (row_wise == true) return row_wise;
 			}

 			
			for (int i = 0; i < 3; i++) {
				bool col_wise = true;
				for (int j = 0; j < 3; j++) {
					if (arr[j][i] != p1_s) {
						col_wise = false; 
						break;
					}
				}
				if (col_wise == true) return col_wise;
 			}
 			
 			if (arr[0][0] == p1_s && arr[1][1] == p1_s && arr[2][2] == p1_s) return true;
			if (arr[2][0] == p1_s && arr[1][1] == p1_s && arr[0][2] == p1_s) return true;
			return false;
		}

		
};