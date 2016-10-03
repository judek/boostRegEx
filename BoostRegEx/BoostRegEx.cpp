// BoostRegEx.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


using namespace boost::xpressive;

int main()
{
	/*const char* p = "1003:6=/CLF7"
					"\n1003:6=/CLM7";*/

	
	sregex rex = sregex::compile("([0-9+][^/\r\n]+):([1-9])=([^\r\n]*)");
	
	std::stringstream s;
	

	

	const char* p =

		"1003:6=!CALSPREAD\n"
		"1015:6=USD\n"
		"1029:8=13:28:15\n"
		"1748:7=2016-9-7\n"
		"2000:2=3\n"
		"9053:2=-300\n"
		"20064:2=355675\n"
		"20200:6=UserSubmitStagedOrder\n"
		"20401:2=1\n"
		"20404:6=41956d5b-5f7-1i1k\n"
		"20405:6=JUDE@SBDEMO\n"
		"20414:6=201609071328153560\n"
		"20680:6=Market\n"
		"20681:6=NONE\n"
		"20683:6=PENDING\n"
		"20696:2=0x00000008\n"
		"20940:2=16384\n"
		"21031:6=Leg 1 ORDER_7\n"
		"21032:6=Leg 2 ORDER_7\n"
		"21050:6=/CLF7\n"
		"21051:6=/CLM7\n"
		"21055:6=Buy\n"
		"21056:6=Sell\n"
		"21060:2=1\n"
		"21061:2=1\n"
		"23065:2=119\n"
		"23163:6=ORDER_7\n"
		"23248:2=1049\n"
		"23249:2=1527\n"
		"23250:2=70040\n"
		"23252:2=2\n"
		"30871:6=41956d5b-6a-0n5e,41956d5b-6a-0n5d\n";






	s << p;

	//int sum = 0;
	for (std::string line; std::getline(s, line); )
	{
		//sum += std::stoi(line);

		//std::string hello("1003:6=!CLF7");
		smatch what;

		if (regex_match(line, what, rex))
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
