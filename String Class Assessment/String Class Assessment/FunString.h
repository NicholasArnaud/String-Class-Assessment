#pragma once


class FunString
{


public:
	FunString(); //basic tool to call functions
	FunString(char String[]);
	int Length(); //Will find the length of the string completely until reaches null
	char indexedChar(int j);//Will pick a character in a string
	bool Compared(FunString as); //Will compare 2 strings together 0
	char* Append(FunString as); //Will add the second string after the first string
	char* Prepend(FunString as); //Will add the second string before the first string
	const char* c_Style(); // Will write the string c-styled	
	void upperCase(); //Will change string characters into uppercase characters
	void lowerCase(); //Will change string characters into lowercase characters
	int subStrLoc(); //Will find a SubString within the first string
	int stratString(int k); //Will find the substring within the class after a certain index
	void strRepStr(); //Will replace a substring with another substring
	char* c_enterStyle(); //Will set string to input C-style string

	char m_String[255]; //string one
	int Strlen; //first string's length
};