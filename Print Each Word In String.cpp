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

void PrintEachWord(string Str)
{	
	string Word = "";

	for (short i = 0; i < Str.length(); i++)
	{

		if (Str[i] != ' ')
		{
			Word += Str[i];
		}
		else
		{
			cout << Word << endl;
			Word.clear();
		}
	}
	cout << Word << endl;
}


int main()
{
	string Str = ReadString();


	cout << "\nYour string words are:\n";
	PrintEachWord(Str);


	return 0;
}