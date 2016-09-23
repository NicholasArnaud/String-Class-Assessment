#include <iostream>
#include "FunString.h"

FunString::FunString()
{
};

FunString::FunString(char string[])
{

	for (int i = 0; string[i] != '\0'; i++)
	{
		m_String[i] = string[i];

	}
}

int FunString::Length()
{
	int i = 0;
	for (; m_String[i] != 0; i++);// loop runs until "i" reaches the null character of the string m_String

	Strlen = i; //saves the length of the length of first string
	return Strlen; //returns number of characters in string
}

char FunString::indexedChar(int j)
{
char indChar = m_String[j];
return indChar;
}

//bool FunString::Compared(FunString other) //compares two strings
//{
//	int i = 0;
//	m_String[i] == other.m_String[i];
//}
bool FunString::Compared(FunString as) //compares two strings
{
	std::cout << "First string is : " << m_String << "\n" << "The second string is : " << as.m_String << "\n"; // displays current valid 2 strings that will be used
	if (m_String == as.m_String)	// if statement used to find a difference between 2 inputed strings
	{
		std::cout << "The two strings are very much alike \n"; // displays that the 2 strings are in fact similar
		return true; // bool function becomes true and breaks from function
	}
	else  // else segment runs if comparison between the 2 strings are different in any way
	{
		std::cout << "The two strings are not similar at all \n"; // displays that the 2 strings are not similar to each other
		return false;	// bool function becomes false and function ends
	}
}

void FunString::Append()
{
	// currently non operational
	// will later add a second string after the first string and become one string together
}

void FunString::Prepend(FunString as)
{
	int i;
	for (i = 0; i < Strlen; i++)
		as.m_String[i] = m_String[i];

	// currently non operational
	// will later add a second string before the first string and become one string together
}

void FunString::c_Style()
{
	const char* constString = m_String;	// creates a const character pointer towards the original string
	std::cout << "const char*: " << constString << "\n";	// displays the new const character string 
}

void FunString::lowerCase()
{

	for (int j = 0; m_String[j]; j++)
	{
		if (m_String[j] >= 65 && m_String[j] <= 90)
		{
			char c = m_String[j];
			c += 32;
			m_String[j] = c;

			//m_String[j] = (int)m_String[j] + 32;	//breaks

		}
		else if ((int)m_String[j] >= 65 && (int)m_String[j] <= 122)
		{

			//m_String[j];
		}
	}
}

void FunString::upperCase()
{
	// still needs work
	for (int j = 0; m_String[j]; j++)
	{
		if (m_String[j] >= 65 && m_String[j] <= 90)
		{

			m_String[j] = (int)m_String[j] - 32;

		}
		else if (m_String[j] <= 65 && m_String[j] >= 122)
		{
			m_String[j];
		}
	}
	std::cout << "In only lowercase characters: " << m_String << "\n";
}

void FunString::subStrLoc()
{
	int i, j, temp;	//used to get index given string and arrays
	char substr[20] = { "ow" }; //sets the substring
	std::cout << "Looking for the substring : " << substr << "\n"; //shows what the substring is to the user
	for (i = 0; m_String[i] != '\0'; i++) //for loop to search string for the substring
	{
		j = 0; //used to index the substring
		if (m_String[i] == substr[j]) //if indeed the string contains the substring
		{
			temp = i + 1; //saves at what index the substring is located 
			while (m_String[i] == substr[j]) //continues as long as both strings don't equal to the null character
			{
				i++;
				j++;
			}

			if (substr[j] == '\0') //if the substring is found in the string
			{
				std::cout << "The substring is present in given string at position " << temp << "\n"; //displays location of substring found
			}
			else //if the substring is not found
			{
				i = temp;
				temp = 0; //causes break loop
			}
		}
	}

	if (temp == 0) //breaks the loop 
		std::cout << "The substring is not present in given string";
}

void FunString::strInStr()
{
	//No understanding yet
}

void FunString::strRepStr()
{
	//No understanding yet
}

void FunString::c_inStyle()
{
	//No understanding yet
}