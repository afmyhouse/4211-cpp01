#include <iostream>

int main(void) {
	std::string string = " HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "HI THIS IS BRAIN" << std::endl;
	std::cout << "Address of string : " << &string << std::endl;
	std::cout << "Content of string :" << *stringPTR << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Address pointed by stringPTR : " << stringPTR << std::endl;
	std::cout << "Address of pointer stringPTR : " << &stringPTR << std::endl;
	std::cout << "Content pointed by stringPTR :" << *stringPTR << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Content of stringREF: " << stringREF << std::endl;
	std::cout << "Address of stringREF: " << &stringREF << std::endl;
	std::cout << "--------------------------------" << std::endl;

	string = "Something else";

	std::cout<< std::endl << "--------------------------------" << std::endl;
	std::cout << "Something else" << std::endl;
	std::cout << "Address of string : " << &string << std::endl;
	std::cout << "Content of string :" << *stringPTR << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Address pointed by stringPTR : " << stringPTR << std::endl;
	std::cout << "Address of pointer stringPTR : " << &stringPTR << std::endl;
	std::cout << "Content pointed by stringPTR :" << *stringPTR << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Content of stringREF: " << stringREF << std::endl;
	std::cout << "Address of stringREF: " << &stringREF << std::endl;
	std::cout << "--------------------------------" << std::endl;

	return (0);
}
