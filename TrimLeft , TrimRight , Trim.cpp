#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
using namespace std;

string TrimLeft(string Str)
{
	
	for (short i = 0; i < Str.length(); i++)
	{
		if (Str[i] != ' ')
			return Str.substr(i, Str.length() - i);
	}
	return "";
}

string TrimRight(string Str)
{
	
	for (short i = Str.length()-1; i >= 0; i--)
	{
		if (Str[i] != ' ')
			return  Str.substr(0, i + 1);
	}
	return "";
}

string Trim(string Str)
{
	return TrimRight(TrimLeft((Str)));
}


int main()
{
	string Str = "     Mohammed Abu-Hadhoud     ";
	
	cout << "String    = " << Str << "\n\n";
	cout << "TrimLeft  = " << TrimLeft(Str) << endl;
	cout << "TrimRight = " << TrimRight(Str) << endl;
	cout << "Trim      = " << Trim(Str) << endl;

	return 0;
}