#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;

string ReadStringFromUsing()
{
	string Str = "";
	cout << "Please Enter Your String?\n";
	getline(cin, Str);
	return Str;
}


enum enWhatTypeLetter{SmallLetter = 1, CapitalLetter = 2, All = 3};
short CountLetter(string Str, enWhatTypeLetter WhatCount = enWhatTypeLetter::All )
{

	if (WhatCount == enWhatTypeLetter::All)
	{
		return Str.length();
	}

	short Count = 0;
	for (short i = 0; i < Str.length(); i++)
	{
		if (WhatCount == enWhatTypeLetter::CapitalLetter && isupper(Str[i]))
		{
			Count++;
		}

		if (WhatCount == enWhatTypeLetter::SmallLetter && islower(Str[i]))
		{
			Count++;
		}
	}
	return Count;
}


short CountCapitalLetters(string Str)
{
	short Count = 0;
	for (short i = 0; i < Str.length(); i++)
	{
		if (isupper(Str[i]))
			Count++;
	}
	return Count;
}
short CountSmallLetters(string Str)
{
	short Count = 0;
	for (short i = 0; i < Str.length(); i++)
	{
		if (islower(Str[i]))
			Count++;
	}
	return Count;
}


int main()
{

	string Str = ReadStringFromUsing();

	cout << "\nMethod 1\n";
	printf("String Length = %d\n", Str.length());
	printf("Capital Letters Counts = %d\n", CountCapitalLetters(Str));
	printf("Small Letters Counts = %d\n", CountSmallLetters(Str));


	cout << "\nMethod 2\n"; // We used just one function
	printf("String Length = %d\n", CountLetter(Str));
	printf("Capital Letters Counts = %d\n", CountLetter(Str, enWhatTypeLetter::CapitalLetter));
	printf("Small Letters Counts = %d\n", CountLetter(Str, enWhatTypeLetter::SmallLetter));


	return 0;
}