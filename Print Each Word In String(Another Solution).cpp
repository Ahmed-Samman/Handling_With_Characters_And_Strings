#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;

string ReadString()
{
	string Str = " ";
	cout << "Please Enter a string?\n";
	getline(cin, Str);
	return Str;
}

void PrintEachWordInString(string Str)
{
	string delim = " "; // delimiter  Or Space
	short Pos = 0;
	string sWord; // define a string variable

	cout << "\nYour string words are: \n\n";
	
	// use find() function to get the position of the delimiter
	while ((Pos = Str.find(delim)) != std::string::npos) // true
	{
		sWord = Str.substr(0, Pos); // store the word
		if (sWord != " ")
		{
			cout << sWord << endl;
		}
		Str.erase(0, Pos + delim.length()); // erase() until position and move to next word. 
	}
	if (Str != " ")
	{
		cout << Str << endl; // it print last word of the string.
	}
}


int main()
{
	PrintEachWordInString(ReadString());


	return 0;
}