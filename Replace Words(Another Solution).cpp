#include<iostream>
#include<string>
#include<vector>
using namespace std;

string ReplaceWords(string Str, string Word, string ReplaceWord)
{
	short Pos = Str.find(Word);

	while (Pos != std::string::npos)
	{

		Str = Str.replace(Pos , Word.length(), ReplaceWord);
		Pos = Str.find(Word); // find next 
	}
	return Str;
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