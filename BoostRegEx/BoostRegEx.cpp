// BoostRegEx.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


using namespace boost::xpressive;

int main()
{
	const char* p = "1003:6=/CLF7"
					"\n1003:6=/CLM7";

	
	sregex rex = sregex::compile("([0-9+][^/\r\n]+):([1-9])=(/[^\r\n]*)*");
	
	std::stringstream s;
	

	s << p;

	//int sum = 0;
	for (std::string line; std::getline(s, line); )
	{
		//sum += std::stoi(line);

		std::string hello("1003:6=/CLF7");
		smatch what;

		if (regex_match(hello, what, rex))
		{
			int size = what.size();
			std::cout << what.size() << '\n'; // whole match
			for (int i = 0; i < size; i++)
			{
				std::cout << what[i] << '\n';
			}

		}

	}
	//std::cout << "\nThe sum is: " << sum << "\n";



	

	
	return 0;
}
