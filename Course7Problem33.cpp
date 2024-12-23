#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string UserString = " ";
	cout << "Enter a string:\n";
	getline(cin , UserString);
	return UserString;
}

bool IsVowel(char Letter)
{

	Letter = tolower(Letter);

	return Letter == 'a' || Letter == 'o' || Letter == 'u' || Letter == 'e' || Letter == 'i';

}

short CountVowels(string & UserString)
{
	short Counter = 0;
	for (short i = 0 ; i < UserString.length() ; i++)
	{

		if (IsVowel(UserString[i]))
		{
			Counter++;
		}

	}
	return Counter;
}

int main()
{
	string UserString = ReadString();
	cout << "Number of vowels = " << CountVowels(UserString);

	return 0;
}