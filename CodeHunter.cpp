// CodeHunter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string textToAnalyze;
	//int foo = 0; //not needed
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	//int bar = 0; //not needed

	//Display this to the user
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	
	//get the users input and send it into the textToAnalysis string
	getline(cin, textToAnalyze);

	//convert user input to an array and checks what each letter is
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{	
		//check if character is a vowel
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			//Add to int vowels if any are found
			++vowels;
		}
		//check if character is a consanant
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
			//add to int consanant if any are found
			++consonants;
		}
		//check if character is a digit
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			//add to int digits if any are found
			++digits;
		}
		//check for white space
		else if (textToAnalyze[i] == ' ')
		{
			//add to int space if any are found
			++spaces;
		}
		else
		{
			//if character doesnt meet any of the other criteria, add to int unknowncharacters 
			++unknownCharacters;
		}
	}

	//Get the length of the user input 
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	//checksum should be the size of user input
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	//Display everything that was found
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	//If checksum doesnt equal lengthofstring... the program is messed up
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}
