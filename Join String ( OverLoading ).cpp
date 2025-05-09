#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
using namespace std;

string JoinString(vector <string> vSplitWords, string demin)
{
	string Str = "";
	for (string& i : vSplitWords)
	{
		Str += i + demin;
	}
	return Str.substr(0, Str.length() - demin.length());
}

string JoinString(string arrStr[], short Length, string demin)
{
	string Str = "";
	for (short i = 0; i < Length; i++)
	{
		Str += arrStr[i] + demin;
	}
	return Str.substr(0, Str.length() - demin.length());
}


int main()
{

	vector <string> vSplitWords = { "Ahmed", "Tamer", "Ali", "Hassan" };
	cout << "Vector after join:\n";
	cout << JoinString(vSplitWords, " : ") << endl;


	string arrStr[] = { "Ahmed", "Tamer", "Ali", "Hassan" };
	cout << "\nArray after join:\n";
	cout << JoinString(arrStr, 4, " : ") << endl;

	return 0;
}