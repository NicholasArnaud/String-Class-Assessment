#include <iostream>
#include "FunString.h"

FunString::FunString()
{
};

FunString::FunString(char string[])
{
	int i;
	for (i = 0; string[i] != '\0'; i++)
	{
		m_String[i] = string[i];
	}
	m_String[i] = '\0';
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

	if (m_String == as.m_String)	// if statement used to find a difference between 2 inputed strings
	{
		return true; // bool function becomes true and breaks from function
	}
	else  // else segment runs if comparison between the 2 strings are different in any way
	{
		return false;	// bool function becomes false and function ends
	}
}

char* FunString::Append(FunString as)
{
	as.Length();
	int m_Length = Strlen;
	int i;
	for (i = 0; i < as.Strlen; i++)
	{
		m_String[m_Length + i] = as.m_String[i];
	}
	m_String[m_Length + i] = '\0';
	return m_String;
}

char* FunString::Prepend(FunString as)
{
	as.Length();
	int m_Length = as.Strlen;
	int i;
	for (i = 0; i < Strlen; i++);
	{
		as.m_String[m_Length + i] = m_String[i];
	}
	as.m_String[m_Length + i] = '\0';
	return as.m_String;
	// currently non operational
	// will later correctly add a second string before the first string and become one string together
}

const char* FunString::c_Style()
{
	const char* constString = m_String;	// creates a const character pointer towards the original string
	return constString; // returns the now c-styled string
}

void FunString::lowerCase()
{

	for (int j = 0; m_String[j]; j++) //loops through all the characters in the string
	{
		if (m_String[j] >= 65 && m_String[j] <= 90) // checks for any upper case characters
		{
			char c = m_String[j]; // sets new character and defines it as the uppercase character needed to be changed
			c += 32;	// adds 32 to change the value of character to its lower case equilivent in the ASCII table
			m_String[j] = c; // sets the new lower case character into where the uppercase character was in the string
		}
		else if ((int)m_String[j] >= 65 && (int)m_String[j] <= 122) // if the character is already lowercase it goes here
		{
			// the character is left alone and loops over looking at the next character
			//m_String[j];
		}
	}
}

void FunString::upperCase()
{
	
	for (int j = 0; m_String[j]; j++) // loops through all the characters in the string
	{
		if (m_String[j] >= 61 && m_String[j] <= 122) // checks for any lowercase characters
		{

			m_String[j] = (int)m_String[j] - 32; // subtracts 32 to change the value of character to its upper case equilivent in the ASCII table

		}
		else if (m_String[j] >= 65 && m_String[j] <= 90) //if the character is already uppercase it goes here
		{
			// the character is left alone anf loops over looking at the next character
			m_String[j];
		}
	}
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



