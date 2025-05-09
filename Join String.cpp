#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
using namespace std;

string JoinString(vector <string> vSplitWords, string delim)
{
	string Str = "";
	for (string& i : vSplitWords)
	{
		Str = Str + i + delim;
	}
	return Str.substr(0, Str.length() - delim.length());
}


int main()
{

	vector <string> vSplitWords = { "Ahmed", "Tamer", "Ali", "Hassan" };


	cout << "Vector after join:\n";
	cout << JoinString(vSplitWords, " : ") << endl;

	
	return 0;
}