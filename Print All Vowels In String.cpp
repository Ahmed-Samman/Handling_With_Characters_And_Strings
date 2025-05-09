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

void PrintVowelLetters(string Str)
{
	
	for (short i = 0; i < Str.length(); i++)
	{
		if (IsCharVowel(Str[i]))
			cout << Str[i] << "   ";
	}
	cout << endl;
}



int main()
{

	string Str = ReadString();


	cout << "\nVowels in string are: "; 
	PrintVowelLetters(Str);


	return 0;
}