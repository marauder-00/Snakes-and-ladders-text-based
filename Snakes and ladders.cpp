#include <iostream>
#include <string>
#include<cstdlib>
#include<ctime>
using namespace std;
void plyrnames(string*, string*);
int dice(int&);

int main()
{
	srand(time(NULL));
	cout << "                                                  Snakes and ladders\n\n\n\n";
	cout << "Do you want to start the game?(y/n) \n";
	char strt;
	bool again;
	again = false;

	do {
		cin >> strt;
		if (strt == 'y')

		{
			cout << "\n\nWelcome to the game\n\n";
			string player1, player2;

			plyrnames(&player1, &player2);
			int player1_score, player2_score;
			player1_score = 0;
			player2_score = 0;


			while (player1_score < 100 && player2_score < 100)
			{
				string dummy;
				cout << player1 << " Press any key to move" << endl;
				cin >> dummy;
				dice(player1_score);
				cout << "you landed on " << player1_score << endl;
				cout << player2 << " Press any key to move" << endl;
				cin >> dummy;
				dice(player2_score);
				cout << "you landed on " << player2_score << endl;

			}
			if (player1_score > player2_score)
			{
				cout << "Congratulations! " << player1 << " you won the game" << endl;
				cout << "Sorry " << player2 << " better luck next time" << endl;
			}
			if (player2_score > player1_score)
			{
				cout << "Congratulations! " << player2 << " you won the game" << endl;
				cout << "Sorry " << player2 << " better luck next time" << endl;
			}
			if (player1_score == player2_score)
			{
				cout << "the match was draw" << endl;
			}
			system("pause");
		}
		else if (strt == 'n')
		{
			cout << "thank you for using the program, Goodbye!\n";
			system("pause");
		}
		else
		{
			cout << "you have entered an invalid option, please restart the program and enter a valid option\n";
			again = true;
			cout << "Do you want to start the game?(y/n) \n";
		}


	} while (again);
	system("pause");
}
void plyrnames(string* plyr1, string* plyr2)
{

	cout << "please enter the name of player 1\n";

	cin >> *plyr1;

	cout << "\nplease enter the name of player 2\n";

	cin >> *plyr2;


}
int dice(int& score)
{
	int roll;
	roll = 1 + (rand() % 6);
	cout << "You rolled a " << roll << endl;
	score = roll + score;
	switch (score)
	{
	case 98:score = 28;
	{cout << "a snake bit you" << endl;

	break;
	}
	case 95:score = 24;
	{cout << "a snake bit you" << endl;

	break;
	}
	case 92:score = 51;
	{cout << "a snake bit you" << endl;

	break;
	}
	case 83:score = 19;
	{cout << "a snake bit you" << endl;

	break;
	}
	case 73:score = 1;
	{cout << "a snake bit you" << endl;

	break;
	}
	case 69:score = 33;
	{cout << "a snake bit you" << endl;

	break;
	}
	case 64:score = 36;
	{cout << "a snake bit you" << endl;

	break;
	}
	case 59:score = 17;
	{cout << "a snake bit you" << endl;

	break;
	}
	case 55:score = 7;
	{cout << "a snake bit you" << endl;

	break;
	}
	case 8:score = 26;
	{cout << "you found a ladder" << endl;

	break;
	}
	case 21:score = 57;
	{cout << "you found a ladder" << endl;

	break;
	}
	case 43:score = 77;
	{cout << "you found a ladder" << endl;

	break;
	}
	case 62:score = 94;
	{cout << "you found a ladder" << endl;

	break; }
	case 66:score = 85;
	{cout << "you found a ladder" << endl;


	break; }
	case 80:score = 99;
	{cout << "you found a ladder" << endl;
	break;
	}
	return score;
	}
}