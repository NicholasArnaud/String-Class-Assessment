#include <iostream>
#include "FunString.h"

int main()
{

	//FunString FunString("Yay", "Well");// Enter First String and Second String
	FunString fs = FunString("YAAAAAY");
	FunString as = FunString();
	
	
	fs.Length(); // Calls for function Length()
	std::cout << "Number of characters in the string is: " << fs.Strlen << "\n"; // displays the number of characters in the string m_String
	
	char index = fs.indexedChar(3); 
	std::cout << "Indexed character in the string is: " << index << "\n"; //Displays first character in String

	fs.Compared("Help");
	std::cout ;// output something


	fs.lowerCase();	//Calls for function lowerCase()
	std::cout <<"The string in all lowercase characters is: "<< fs.m_String << "\n"; // displays all characters in the string lowercase
		
	//	fs.Length(); //Is part 1 of Assessment
	//	fs.indexedChar(); //Is art 2 of Assessment
	//	fs.Compared(); //Is part 3 of Assessment
	//	FunString.Append(); //Is part 4 of Assessment
	//	FunString.Prepend(); //Is part 5 of Assessment
	//	FunString.c_Style(); //Is part 6 of Assessment
	//	fs.lowerCase(); //Is part 7 of Assessment
	//	fs.upperCase(); //Is part 8 of Assessment
	//	FunString.subStrLoc(); //Is part 9 of Assessment
	//	FunString.strInStr();	//Is part 10 of Assessment
	//	FunString.strRepStr();	//Is part 11 of Assessment
	//	FunString.c_inStyle(); //Is part 12 of Assessment

	system("pause");
	return 1;
}