#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include <string>
using std::string;


string RomanNumerals(int number) {
	return "";
}

TEST_CASE("Factorials are computed", "[factorial]") {
	REQUIRE(RomanNumerals(1) == "I");
}