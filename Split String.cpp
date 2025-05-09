#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
#include<vector>
using namespace std;

string ReadString()
{
	string Str = " ";
	cout << "Please Enter a string?\n";
	getline(cin, Str);
	return Str;
}

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

void PrintEachWordInVector(vector <string> vSplitWords)
{
	for (string& i : vSplitWords)
	{
		cout << i << "\n";
	}
}


int main()
{
	vector <string> vSplitWords;

	vSplitWords = SplitString(ReadString(), " ");

	cout << "\nTokens = " << vSplitWords.size() << "\n\n";
	PrintEachWordInVector(vSplitWords);
	
	return 0;
}