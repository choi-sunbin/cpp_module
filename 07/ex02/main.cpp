#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
	Array<std::string> Arr_str(4);
	
	unsigned int loop;
	Arr_str[0] = "Hi";
	Arr_str[1] = "my name";
	Arr_str[2] = "is";
	Arr_str[3] = "sunbchoi";

	Array<std::string> Arr_temp(15);
	Arr_temp = Arr_str;

	loop = 0;
	while (loop < Arr_str.getSize())
		std::cout << Arr_str[loop++] << " ";
	std::cout << std::endl;

	try
	{
		std::cout << Arr_str[100] << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
