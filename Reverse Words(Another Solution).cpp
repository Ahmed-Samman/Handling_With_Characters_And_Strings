#include<iostream>
#include<string>
#include<vector>
using namespace std;

string ReadString()
{
	string Str = "";

	cout << "Please enter your string?\n";
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

string ReversString(string Str)
{

	vector <string> vString;
	vString = SplitString(Str, " ");

	string Rstr = "";

	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;
		Rstr += *iter + " ";
		
	}
	Rstr = Rstr.substr(0, Rstr.length()-1);

	return Rstr;
}

int main()
{
	string Str = ReadString();

	cout << " \nString after reversing words:\n";
	cout << ReversString(Str) << endl;


	return 0;
}
