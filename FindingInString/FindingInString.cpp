// FindingInString.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>


int main()
{
	std::string string1 = "in Xanadu did Kubala khan a statley pleasure dome decree";
	int n;
	std::string searchObject("Kubla");

	std::cout << string1 << std::endl;

	n = string1.find("Kubala");
	std::cout << "Found " << searchObject << " at " << n << std::endl;
	n = string1.find_first_of("spde");
	std::cout << "First of Spde at " << n << std::endl;

	n = string1.find_first_not_of("aeiouAEIOU");
	std::cout << "First constant at " << n << std::endl; 

	system("pause");
    return 0;
}

