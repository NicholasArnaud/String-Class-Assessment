#pragma once


class FunString
{
	 char *m_String; //string one
	 char *m_String2; //string two
	 int Strlen; //first strings length

public:
	FunString() {}; //basic tool to call functions
	FunString(char *String, char *sString) { m_String = String, m_String2 = sString;}; //Will save the strings to private to prevent permanent change
	int Total(); //Will find the length of the string completely until reaches null
	int indexedChar(); //Will pick a character in a string
	bool Compared(); //Will compare 2 strings together 0
	void Append(); //Will add the second string after the first string
	void Prepend(); //Will add the second string before the first string
	void c_Style(); // Will write the string c-styled	
	void upperCase(); //Will change string characters into uppercase characters
	void lowerCase(); //Will change string characters into lowercase characters
	void subStrLoc(); //Will find a SubString within the first string
	void strInStr(); //Will find the substring within the class after a certain index
	void strRepStr(); //Will 
	void c_inStyle();	//Will set string to input C-style string
	
};