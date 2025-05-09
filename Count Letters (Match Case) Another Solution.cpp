#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;

string ReadStringFromUsing()
{
	string Str = "";
	cout << "Please Enter Your String?\n";
	getline(cin, Str);
	return Str;
}
char ReadCharacter()
{
	char Ch = ' ';
	cout << "\nPlease Enter a character?\n";
	cin >> Ch;
	return Ch;
}

char InvertCharcterCase(char Letter)
{

	return islower(Letter) ? toupper(Letter) : tolower(Letter);

}

short CountLetter(string Str, char Ch, bool MatchCase = true)
{
	short Count = 0;

	for (short i = 0; i < Str.length(); i++)
	{
		if (MatchCase)
		{
			if (Ch == Str[i])
			{
				Count++;
			}
		}
		else
		{
			if (tolower(Ch) == tolower(Str[i]))
			{
				Count++;
			}
		}
	}
	return Count;
}


int main()
{
	string Str = ReadStringFromUsing();
	char Letter = ReadCharacter();


	printf("\nLetter '%1c' Count = %d\n", Letter, CountLetter(Str, Letter));

	printf("\nLetter '%1c' or '%1c' Count = %d\n", Letter, InvertCharcterCase(Letter), CountLetter(Str, Letter, false));


	return 0;
}