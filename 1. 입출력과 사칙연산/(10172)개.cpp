#include <iostream>
#include <array>
#include <string>

int main()
{
	std::array<std::string, 5> str = { "|\\_/|"
									  ,"|q p|   /}"
									  ,"( 0 )\"\"\"\\"
									  ,"|\"^\"`    |"
									  ,"||_/=\\\\__|" };
	for (auto str : str) {
		std::cout << str << std::endl;
	}

	return 0;
}
