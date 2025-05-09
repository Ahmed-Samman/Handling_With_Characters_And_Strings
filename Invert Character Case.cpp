#include<iostream>
#include<cctype>
using namespace std;

char ReadCharcterFromUsing()
{
	char Letter = ' ';

	cout << "Please enter a Charcter?\n";
	cin >> Letter;

	return Letter;
}

char InvertCharcterCase(char Letter)
{

	return islower(Letter) ? toupper(Letter) : tolower(Letter);

}


int main()
{
	char Letter = ReadCharcterFromUsing();


	cout << "Char after inverting case:\n";
	cout << InvertCharcterCase(Letter);

	cout << endl;

	return 0;
}