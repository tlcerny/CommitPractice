#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include <string>
using std::string;


string RomanNumerals(int number) {
	if (number == 1){
		return "I";
	}
	else if (number == 2){
		return "II";
	}
	else if (number == 4){
		return "IV";

	}
	
}

TEST_CASE("Factorials are computed", "[factorial]") {
	REQUIRE(RomanNumerals(1) == "I");
	REQUIRE(RomanNumerals(2) == "II");
	REQUIRE(RomanNumerals(4) == "IV");
	REQUIRE(RomanNumerals(5) == "V");
}