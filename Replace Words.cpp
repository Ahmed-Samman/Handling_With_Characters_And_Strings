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

string ReplaceWords(string Str, string Word, string ReplaceWord)
{

	vector <string> vString;
	vString = SplitString(Str, " ");

	string Rstr = "";

	vector<string>::iterator iter = vString.begin();

	for (iter; iter != vString.end(); iter++)
	{
		if (*iter != Word)
		{
			Rstr += *iter + " ";
		}
		else
		{
			Rstr += ReplaceWord + " ";
		}
	}
	Rstr = Rstr.substr(0, Rstr.length() - 1);

	return Rstr;
}

int main()
{
	string Str = "Welcome to Jordan , Jordan is a nice country";
	string Word = "Jordan";
	string ReplaceW = "USA";

	cout << "Original String\n";
	cout << Str << endl;

	cout << "\nString after Replace:\n";
	cout << ReplaceWords(Str, Word, ReplaceW) << endl;

	return 0;
}