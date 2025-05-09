#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string ReadStringFromUser()	
{
	string Str = "";

	cout << "Please Enter Your String?\n";
	getline(cin, Str);

	return Str;
}

void PrintFirstLettersInString(string FullName)
{
	
	cout << "\nFirst letters of this string:\n";

	for (char &i : FullName)
	{
		if (isupper(i) || ispunct(i) || isdigit(i))
		{
			cout << i << endl;
		}
	}
	cout << endl;
}

int main()
{
	
	PrintFirstLettersInString(ReadStringFromUser());

	return 0;
}