#include<iostream>
#include<string>
using namespace std;

string ReadString()
{
	string Str = "";

	cout << "Please enter your string?\n";
	getline(cin, Str);
	
	return Str;
}

string ReverseString(string S1, string demin)
{
	string Str = "";

	for (short i = S1.length() - 1; i >= 0; i--)
	{
		if (S1[i] == ' ')
		{
			Str += S1.substr(i + 1, S1.length()) + " ";
			S1.erase(i, (S1.length() - 1));
		}
	}
	return Str += S1;
}

int main()
{
	string Str = ReadString();

	cout << "\nWords in reverse:\n";
	cout << ReverseString(Str, " ") << endl;


	return 0;
}