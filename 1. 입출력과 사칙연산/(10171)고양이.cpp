#include <iostream>
#include <array>
#include <string>

int main()
{
	std::array<std::string, 4> str = { "\\    /\\"
									," )  ( ') "
									 ,"(  /  ) "
									, " \\(__)|" };
	for (auto str : str) {
		std::cout << str << std::endl;
	}
	return 0;
}

