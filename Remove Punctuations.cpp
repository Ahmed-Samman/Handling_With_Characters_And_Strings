#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

string PunctutionRemove(string Str)
{
	string S1 = "";
	for (short i = 0; i < Str.length(); i++)
	{
		if (!ispunct(Str[i]))
		{
			S1 += Str[i];
		}
	}
	return S1;
}


int main()
{
	string Str = "Welcom to Jordan, Jordan is a nice country; it's amazing.";

	cout << "Original String:\n";
	cout << Str << endl;

	cout << "\nPunctuation Removed:\n";
	cout << PunctutionRemove(Str) << endl;


	return 0;
}