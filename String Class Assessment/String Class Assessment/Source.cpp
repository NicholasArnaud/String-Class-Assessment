#include <iostream>
#include "FunString.h"

int main()
{

	//FunString FunString("Yay", "Well");// Enter First String and Second String
	FunString fs = FunString("YAaaaAY");
	FunString as = FunString("Noooo");

	std::cout << "The fist string is: " << fs.m_String << "\n" << "The second string is: " << as.m_String << "\n \n";


	fs.Length(); // Calls for function Length()
	std::cout << "Number of characters in the string is: " << fs.Strlen << "\n"; // displays the number of characters in the string m_String


	char index = fs.indexedChar(3);
	std::cout << "Indexed character in the string is: " << index << "\n"; //Displays first character in String


	fs.Compared(as);
	(fs.Compared(as) == 1) ? std::cout << "The two strings are very much alike \n" : std::cout << "The two strings are not similar at all  \n"; // outputs the result of whether or not the strings are similar


	fs.Append(as);
	std::cout << "The second string added added to the first string is: " << fs.m_String << "\n";


	fs.Prepend(as);
	std::cout << "The second string placed before the first string is: " << as.m_String << "\n";



	fs.c_Style();


	fs.lowerCase();	//Calls for function lowerCase()
	std::cout << "The string in all lowercase characters is: " << fs.m_String << "\n"; // displays all characters in the string lowercase


	fs.upperCase();
	std::cout << "The String in all uppercase characters is: " << fs.m_String << "\n";


	//	fs.Length(); //Is part 1 of Assessment
	//	fs.indexedChar(); //Is part 2 of Assessment
	//	fs.Compared(); //Is part 3 of Assessment
	//	fs.Append(); //Is part 4 of Assessment
	//	fs.Prepend(); //Is part 5 of Assessment
	//	fs.c_Style(); //Is part 6 of Assessment
	//	fs.lowerCase(); //Is part 7 of Assessment
	//	fs.upperCase(); //Is part 8 of Assessment
	//	fs.subStrLoc(); //Is part 9 of Assessment
	//	fs.strInStr();	//Is part 10 of Assessment
	//	fs.strRepStr();	//Is part 11 of Assessment
	//	fs.c_inStyle(); //Is part 12 of Assessment

	system("pause");
	return 1;
}