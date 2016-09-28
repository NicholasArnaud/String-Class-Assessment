#include <iostream>
#include "FunString.h"

int main()
{
	// fs.initialize(); set up for input strings
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


	FunString fs = FunString();
	FunString as = FunString("Noooo");



	std::cout << "The first string is: " << fs.m_String << "\n" << "The second string is: " << as.m_String << "\n \n";

	std::cout << "Number of characters in the string is: " << fs.Length() << "\n"; // displays the number of characters in the string m_String

	std::cout << "Indexed character in the string is: " << fs.indexedChar(3) << "\n"; //Displays first character in String

	(fs.Compared(as) == 1) ? std::cout << "The two strings are very much alike \n" : std::cout << "The two strings are not similar at all  \n"; // outputs the result of whether or not the strings are similar

	std::cout << "The second string added added to the first string is: " << fs.Append(as) << "\n";

	std::cout << "The second string placed before the first string is: " << fs.Prepend(as) << "\n";

	std::cout << "The string in c-style: " << fs.c_Style() << "\n";

	fs.lowerCase();
	std::cout << "The string in all lowercase characters is: " << fs.m_String << "\n"; // displays all characters in the string lowercase

	fs.upperCase();
	std::cout << "The String in all uppercase characters is: " << fs.m_String << "\n";

	std::cout << "With '0' being false and '1' being found, the substring is: " << fs.subStrLoc() << "\n";

	system("pause");
	return 1;
}