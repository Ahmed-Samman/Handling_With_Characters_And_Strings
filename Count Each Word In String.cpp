#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;

string ReadString()
{
	string Str = " ";
	cout << "Please Enter a character?\n";
	getline(cin, Str);
	return Str;
}

short CountWords(string Str)
{
	string delim = " "; // delimiter  Or Space
	string sWord; // define a string variable
	short Pos = 0 , Count = 0;

	// use find() function to get the position of the delimiter
	while ((Pos = Str.find(delim)) != std::string::npos) // true
	{
		sWord = Str.substr(0, Pos); // store the word
		if (sWord != " ")
		{
			Count++;
		}
		Str.erase(0, Pos + delim.length()); // erase() until position and move to next word. 
	}
	if (Str != " ")
	{
		Count++;
	}
	return Count;
}


int main()
{
	string Str = ReadString();

	printf("\nThe Number of words in your string is: %d\n", CountWords(Str));



	return 0;
}