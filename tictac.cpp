#include <iostream>
#include <string>
#include"tic_tac_toe.cpp"
using namespace std;
int main()
{
	tictactoe t;

	cout << "Player_1 enter you name : ";
	string Player_1; cin >> Player_1;
	cout << "\n" << Player_1 << " enter your sign : ";
	char p1_s; cin >> p1_s;
	cout << "\nPlayer_2 enter you name : ";
	string Player_2; cin >> Player_2;
	cout << "\n" << Player_2 << " enter your sign : ";
	char p2_s; cin >> p2_s;

	bool draw = true;
	for (int i = 0; i < 9; i++) {
		t.print_arr();
		if (i%2 == 0) {
			cout << endl;
			cout << Player_1 << " give the position : ";
			char pos; cin >> pos;

			t.insert(pos, p1_s);
			cout << endl;
		}
		else {
			cout << endl;
			cout << Player_2 << " give the position : ";
			char pos; cin >> pos;
			t.insert(pos, p2_s);
			cout << endl;
		}
		bool c1 = t.check(p1_s);
		bool c2 = t.check(p2_s);
		if (c1 == true) {
			t.print_arr();
			cout << "RESULT : \n";
			cout << "\t\tCONGRATULATIONS"<< endl;
			cout << '\t' << Player_1 <<  " HAS WON THE GAME " << endl;
			draw = false;
			break;
		}
		else if (c2 == true) {
			t.print_arr();
			cout << "RESULT : \n";

			cout << "\t\tCONGRATULATIONS"<< endl;
			cout << '\t' << Player_2 <<  " HAS WON THE GAME " << endl;
			draw = false;
			break;
		}
	}
	if (draw) {
		t.print_arr();
		cout << "\n\n\tTHE GAME WAS A DRAW ----- NO ONE HAS WON THE GAME" << endl;
	}
	return 0;
}