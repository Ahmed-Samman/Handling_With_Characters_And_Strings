#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string ReadStringFromUsing()
{
	string Str = "";
	cout << "Please Enter Your String?\n";
	getline(cin, Str);
	return Str;
}

char InvertCharcterCase(char Letter)
{

	return islower(Letter) ? toupper(Letter) : tolower(Letter);

}
string InvertLettersCase(string &S)
{
	
	for (short i = 0; i < S.length(); i++)
	{
		
		S[i] = InvertCharcterCase(S[i]);
		
	}	
	return S;
}

int main()
{
	string S = ReadStringFromUsing();


	cout << "String after Inverting All Letters Case:\n";
	S = InvertLettersCase(S); // convert an upper letter to a lower letter and the opposite
	cout << S << endl;
	

	return 0;
}
