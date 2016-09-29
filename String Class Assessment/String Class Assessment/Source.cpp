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
	//	fs.stratString(); //Is part 10 of Assessment
	//	fs.strRepStr();	//Is part 11 of Assessment
	//	fs.c_enterStyle(); //Is part 12 of Assessment


	FunString fs = FunString("TestStatement1"); // tested first string
	FunString as = FunString("TestStatement2"); // tested second string


	for (int i = 0; i < 2; ) //for loop will run the preset strings first and on second run will use the users' inputted strings
	{
		system("cls"); //starts a fresh blank screen
		std::cout << "The first string is: " << fs.m_String << "\n" << "The second string is: " << as.m_String << "\n \n"; // reads given strings

		std::cout << "Number of characters in the string is: " << fs.Length() << " \n \n"; // displays the number of characters in the string "m_String"

		std::cout << "Indexed character in the string is: " << fs.indexedChar(3) << "\n \n"; //Displays a character in String at a given index

		(fs.Compared(as) == 1) ? std::cout << "The two strings are very much alike \n \n" : std::cout << "The two strings are not similar at all \n \n"; // outputs the result of whether or not the strings are similar

		std::cout << "The second string added added to the first string is: " << fs.Append(as) << "\n \n"; //runs the function "Append" to add a second string after the first string and outputs the result

		std::cout << "The second string placed before the first string is: " << fs.Prepend(as) << "\n \n"; // runs the function "Prepend" to add a second string before the first string and outputs the result

		std::cout << "The String in c-style: " << fs.c_Style() << "\n \n"; //runs the function "c_Style" to make the string in a c-style string

		fs.lowerCase();	//runs the lowercase function
		std::cout << "The String in all lowercase characters is: " << fs.m_String << "\n \n"; // displays all characters in the string lowercase

		fs.upperCase(); // runs the uppercase function
		std::cout << "The String in all uppercase characters is: " << fs.m_String << "\n \n"; // displays all characters in the string uppercase

		std::cout << "With '0' being false and '1' being found, the substring is: " << fs.subStrLoc() << "\n \n"; // tells whether or not the substring in function "subStrLoc" at any point in the string

		std::cout << "With '0' being false and '1' being found, the substring is:  \n" << fs.stratString(4) << "\n \n"; // tells whether or not the substring in function "stratString" starting from a certain point in the string

		i++; // increments the for loop to '2' for the if statement to work


		if (i != 2) // if loop will make sure the program only asks for user input once while the loop only runs twice
		{
			std::cout << "Please enter first string: \n";
			fs.c_enterStyle(); //runs function that has the user input his very own string

			std::cout << "Now please enter second string: \n"; // asks user 
			as.c_enterStyle(); //runs function that has the user input yet an`other string
		}
	}
	system("pause");
	return 1;
}