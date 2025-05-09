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

string UpperAllString(string Str)
{

	for (short i = 0; i < Str.length(); i++)
	{
		
		Str[i] = toupper(Str[i]);
		
	}
	return Str;
}

string LowerAllString(string Str)
{

	for (short i = 0; i < Str.length(); i++)
	{
		
		Str[i] = tolower(Str[i]);
		
	}
	return Str;
}

int main()
{

	string Str = ReadStringFromUser();


	Str = UpperAllString(Str);
	cout << "\nString after Upper:\n";
	cout << Str << endl;


	Str = LowerAllString(Str);
	cout << "\nString after Lower:\n";
	cout << Str << endl;


	return 0;
}