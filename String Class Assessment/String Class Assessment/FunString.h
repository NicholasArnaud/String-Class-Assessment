#pragma once


class FunString
{
	

public:
	FunString(); //basic tool to call functions
	FunString(char String[]);
	//FunString(char *String, char *sString);  //Will save the strings to private to prevent permanent change
	int Length(); //Will find the length of the string completely until reaches null
	char indexedChar(int j);
	bool Compared(FunString other);
	//Will pick a character in a string
	bool Compared( FunString as); //Will compare 2 strings together 0
	void Append(); //Will add the second string after the first string
	void Prepend(FunString as); //Will add the second string before the first string
	void c_Style(); // Will write the string c-styled	
	void upperCase(); //Will change string characters into uppercase characters
	void lowerCase(); //Will change string characters into lowercase characters
	void subStrLoc(); //Will find a SubString within the first string
	void strInStr(); //Will find the substring within the class after a certain index
	void strRepStr(); //Will replace a substring with another substring
	void c_inStyle(); //Will set string to input C-style string

	char m_String[255]; //string one
	 int Strlen; //first string's length
	 int indChar;
};