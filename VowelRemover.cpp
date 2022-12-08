#include <iostream>
#include <string>
#include <regex>

std::string vowelsRemover( std::string str ) {
	return regex_replace( str, std::regex( "[aeiouAEIOU]" ), std::string( "" ) );
}

int main( int argc, char* arv[] ) {

	std::string str { "A string here" };

	std::cout << "String Before Vowels Removed >>> " << str << std::endl;
	std::cout << "String With Vowels Removed >>> " << vowelsRemover( str ) << std::endl;

}
