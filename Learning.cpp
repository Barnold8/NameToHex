// Learning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <array>
#include <string>
#include <algorithm>

double getPowerNum(double number, int times) {

	double localnum = number;

	for (int i = 1; i < times; i++) {
		
		localnum *= number;
	}
	return localnum;
}



//
//	switch (i) {
//	
//	case i % first && i % second:
//	
//	
//	}
//

void FizzBuzz(int first, int second, int amount) {

	for (int i = 0; i < amount; i++) {
		if (i % first == 0 && i % second == 0) {
			std::cout << "FizzBuzz" << std::endl;

		}

		else if (i % second == 0) {
			std::cout << "Buzz" << std::endl;
		}

		else if (i % first == 0) {
			std::cout << "Fizz" << std::endl;
		}

		else {

			std::cout << i << std::endl;
		
		}
	}
}


std::string NameToHex(std::string name) {


	std::string result_string;
	std::string temp_string;

	char hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	std::transform(name.begin(), name.end(), name.begin(), ::toupper);

	for (int i = 0; i < name.length(); i++) {
	
		int x = (name[i] - 65) + 1;

		while(x >= 16) {
			int y = x / 16;
			//std::cout << y;
			temp_string += hex[y];
			x -= 16;
			
				
		}
		if (temp_string.length() >= 1) {
			temp_string += hex[x];
			result_string += temp_string + " ";
			std::cout << name[i] << "= " << temp_string << " TEMP STRING TYPE ";
			temp_string = "";
			//std::cout << "Length of temp string is " << temp_string.length() << std::endl;

			

		}
		else {
			result_string += hex[x];
			result_string += " "; // this line was added seperate because the console was saying overflow for some reason
			std::cout << name[i] << "= " << hex[x]<< " " << std::endl ;
		}


	}
	

	return result_string;
}


int main()
{
	std::string x = NameToHex("Brandon");
	std::cout << x;

	return 0;
}

