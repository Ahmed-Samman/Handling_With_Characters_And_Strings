#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;

string ReadString()
{
	string Str = " ";
	cout << "Please Enter a character?\n";
	getline(cin, Str);
	return Str;
}

bool IsCharVowel(char Letter)
{
	Letter = tolower(Letter);

	return ((Letter == 'a') || (Letter == 'e') || (Letter == 'i') || (Letter == 'o') || (Letter == 'u'));

}

short CountVowelLetters(string Str)
{
	short Count = 0;

	for (short i = 0; i < Str.length(); i++)
	{
		if (IsCharVowel(Str[i]))
			Count++;
	}
	return Count;
}



int main()
{

	string Str = ReadString();

	CountVowelLetters(Str);


	printf("\nNumber of vowel is: %d\n", CountVowelLetters(Str));


	return 0;
}