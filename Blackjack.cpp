#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int dealer = 0;
int player = 0;


int main () {

char cont;


srand (time(NULL));

player = rand() % 10+1;
dealer = rand() % 10+1;



do
{

	
	int card = rand() % 10+1;
	player = card + player;
	cout << "you have " << player << endl;
	cout << "dealer has " << dealer << endl;
	
	if (player <= 21)
	
	{
		cout << "hit or stick? h/s" << endl;
		cin >> cont;
	}
	
	else 
	
	{
		cont = 'n';
		cout << "you bust" << endl;
	}
	
	

	
}
while (cont == 'h');

if (cont == 's')
{
	do 
	{
		int card2 = rand() % 10+1;
		dealer = card2 + dealer;
		cout << "dealer has " << dealer << endl;
		
		if (dealer <= 16)
		{
			do
			{
			int card3 = rand() % 10+1;
			dealer = card3 + dealer;
			cout << "dealer hits" << endl;
			cout << "dealer has " << dealer << endl;
			}
			while (dealer <= 16);
			
			if (dealer >= 22)
			{
				cout << "dealer busts" << endl;
				cout << "you win!" << endl;
				cont = 'n';
			}
			
			else if (dealer>=player)
				{
					cout << "dealer wins" << endl;
					cont = 'n';
				}
			
			else 
				{
					cout << "you win!" << endl;
					cont = 'n';
				}
		}
		else if (dealer >= 17)
		{
			
			if (dealer >= 22)
			{
				cout << "dealer busts" << endl;
				cout << "you win!" << endl;
				cont = 'n';
				
			}
			
			else 
			{
				cout << "dealer sticks" << endl;
				
				if (dealer>=player)
				{
					cout << "dealer wins" << endl;
					cont = 'n';
				}
				
				else 
				{
					cout << "you win!" << endl;
					cont = 'n';
				}
			}
		}
	}
	while (cont == 's');
}


return 0;
}

