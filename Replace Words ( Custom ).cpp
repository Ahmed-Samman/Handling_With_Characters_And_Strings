#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> SplitString(string Str, string delim)
{
	vector <string> vSplitWords;

	string sWord; // define a string variable
	short Pos = 0;

	// use find() function to get the position of the delimiter
	while ((Pos = Str.find(delim)) != std::string::npos) // true
	{
		sWord = Str.substr(0, Pos); // store the word
		if (sWord != " ")
		{
			vSplitWords.push_back(sWord);
		}
		Str.erase(0, Pos + delim.length()); // erase() until position and move to next word. 
	}
	if (Str != " ")
	{
		vSplitWords.push_back(Str);
	}
	return vSplitWords;
}

string LowerAllString(string Str)
{

	for (short i = 0; i < Str.length(); i++)
	{

		Str[i] = tolower(Str[i]);

	}
	return Str;
}

string JoinString(vector <string> vSplitWords, string demin)
{
	string Str = "";
	for (string& i : vSplitWords)
	{
		Str = Str + i + demin;
	}
	return Str.substr(0, Str.length() - demin.length());
}

string ReplaceWords(string Str, string Word, string ReplaceWord, bool MatchCase = true)
{

	vector <string> vString = SplitString(Str, " ");
	
	for (string &S : vString)
	{
		if (MatchCase)
		{
			if (S == Word)
			{
				S = ReplaceWord;
			}
		}
		else
		{
			if (LowerAllString(S) == LowerAllString(Word))
			{
				S = ReplaceWord;
			}
		}
	}
	return JoinString(vString, " ");
}


int main()
{
	string Str = "Welcome to Jordan , Jordan is a nice country";
	string Word = "jordan";
	string ReplaceW = "USA";

	cout << "Original string:\n";
	cout << Str << endl;

	cout << "\nReplace with match case:\n";
	cout << ReplaceWords(Str, Word, ReplaceW) << endl;

	cout << "\nReplace with not match case:\n";
	cout << ReplaceWords(Str, Word, ReplaceW, false) << endl;

	return 0;
}