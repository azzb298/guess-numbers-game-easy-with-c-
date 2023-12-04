#include<iostream>
#include<time.h>
using namespace std;
void start();
void game();

int a, i, b;

void start()
{
	srand((unsigned)time(0));
	b = rand() % 100;
	cout << "input the number to strat" << endl;
	cin >> a;
	game();
}
void game()
{
	for (i=4; i >= 1; i--)
	{
		if (a < 0 || a>100)
		{
		cout << "wrong" << endl;
		game();
		}
		if (a == b)
		{
			cout << "you are correct" << endl;
			start();
		}
		else if (a > b)
		{
			cout << "much\n" <<"you have"<<i <<"times to answer" << endl;
			cin >> a;
		}
		else if (a < b)
		{
			cout << "little\n" << "you have" << i << "times to answer" << endl;
			cin >> a;
		}
		if (i == 1)
		{
			cout << "lose the game" << endl;
			//system("shutdown -s -t 10");
			break;
		}
	}
}
int main()
{
	cout << "guess the number 0~100" << endl;
	start();
}