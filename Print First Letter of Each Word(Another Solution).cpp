#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string ReadStringFromUser()
{
	string Str = "";

	cout << "Please Enter Your String?\n";
	getline(cin, Str);

	return Str;
}

void PrintFirstLetters(string Str)
{
	bool IsFirstLetter = true;

	cout << "\nFirst letters of this string:\n";

	for (short i = 0; i < Str.length(); i++)
	{

		if (Str[i] != ' ' && IsFirstLetter)
		{

			cout << Str[i] << endl;

		}
		IsFirstLetter = (Str[i] == ' ') ? true : false;

	}
	cout << endl;
}


int main()
{

	PrintFirstLetters(ReadStringFromUser());


	return 0;
}