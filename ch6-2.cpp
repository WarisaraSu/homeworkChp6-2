#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

int Guess(int);

int main()
{
	srand(time(NULL));
	int num, randnum, round;
	randnum = rand()%10+1;
	cout << " ###Welcome To Guessing Number Game### " << endl;
	cout << " Secret Number Has Been Chosen " << endl;
	round = Guess(randnum);
	cout << " Congratulations! " << endl;
	cout << " The secret number is " << randnum << endl;
	cout << " You made " << round << " guesses " << endl;
return 0; 
}

int Guess(int randnum) {
	int round = 0, input;
	do{
		cout << " Guess the number(1-10) : ";
		cin >> input;
		if (input < randnum)
			cout << " The secret number is lower " << endl;
		else if (input > randnum)
			cout << " The secret number is higher " << endl;
		round++;// บวกค่าเพิ่มไป1
	}while(input != randnum);
	return round;
}
	
