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

void LowerFirstLetterOfEachWord(string& Str)
{
	bool FirstLetter = true;

	for (short i = 0; i < Str.length(); i++)
	{
		if (Str[i] != ' ' && FirstLetter)
		{
			Str[i] = tolower(Str[i]);
		}
		FirstLetter = (Str[i] == ' ') ? true : false;
	}
}

int main()
{

	string FullName = ReadStringFromUser();


	LowerFirstLetterOfEachWord(FullName);

	cout << "\nString after conversion:\n";
	cout << FullName << endl;

	return 0;
}