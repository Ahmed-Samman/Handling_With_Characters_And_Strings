#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;

char ReadCharacter()
{
	char Ch = ' ';
	cout << "Please Enter a character?\n";
	cin >> Ch;
	return Ch;
}

bool IsCharVowel(char Letter)
{
	Letter = tolower(Letter);
	
	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));
	
}

void PrintIsCharVowelOrNot(char Letter)
{
	if (IsCharVowel(Letter))
		printf("\nYes, Letter '%1c' is Vowel\n", Letter);

	else
		printf("\nNo, Letter '%1c' is not Vowel\n", Letter);
}

int main()
{

	char Letter = ReadCharacter();

	PrintIsCharVowelOrNot(Letter);


	return 0;
}