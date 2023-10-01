#include <iostream>
#include <string>
using namespace std;




string readString()
{
	string str;
	cout << "\nEnter a string?\n";
	getline(cin, str);
	return str;
}

bool isVowelLetter(char ch)
{
	char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };

	for (int i = 0; i < 5; i++)
	{
		if (vowels[i] == tolower(ch))
			return true;
	}
	return false;
}

string VowelsIntoString(string str)
{
	string vowelsString = " ";
	for (int i = 0; i < str.length(); i++)
	{
		if (isVowelLetter(str[i]))
			vowelsString = vowelsString + " " + str[i];//o a
	}
	return vowelsString;
}

int main()
{
	string str = readString();
	//Mohammad Abu-Hadhoud Programming Advices

	cout<<"Volwel string: "<< VowelsIntoString(str) << endl;

	

	system("pause>0");
	return main();

}