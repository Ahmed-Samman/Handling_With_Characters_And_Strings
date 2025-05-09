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

bool IsCharVowel(char Letter, char CharVowel[5])
{
	
	for (short i = 0; i <= 4; i++)
	{
		if (tolower(Letter) == CharVowel[i])
		{
			return true;
		}
	}
	return false;
}

void PrintIsCharVowelOrNot(char Letter, char CharVowel[5])
{
	if (IsCharVowel(Letter, CharVowel))
		printf("\nYes, Letter '%1c' is Vowel\n", Letter);
	
	else
		printf("\nNo, Letter '%1c' is not Vowel\n", Letter);

}

int main()
{
	
	char CharVowel[5] = { 'a', 'e', 'i', 'o', 'u' };
	
	char Letter = ReadCharacter();
	PrintIsCharVowelOrNot(Letter, CharVowel);


	return 0;
}