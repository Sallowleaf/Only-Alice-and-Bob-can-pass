// Only Alice and Bob can pass.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>




int main()
{
	std::string thrname ;
	std::cout << "Hey dude, What is your name? "  ;
	std::cin >> thrname ;
	if (thrname == "bob" || thrname== "alice")
	{
		std::cout << "Hello " << thrname << "\n";
	}
	else
	{
		std::cout << "Let me think about it. " << "\n";
	}


    return 0;
}

