// chp1ex4.cpp

#include <iostream>
#include <string>

int main()
{
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
		{
			const std::string s = "another string";
			std::cout << s << std::endl; }}
	return 0;
}

 // }}를 };}로 변경하면 작동이 되지 않는다. };}를 };로 변경해야한다.