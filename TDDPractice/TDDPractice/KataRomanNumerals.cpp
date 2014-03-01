#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include <string>
using std::string;


string RomanNumerals(int number) {

	string romanNumber;

	while (number>0){

		if (number >= 50){
			romanNumber += "L";
			number -= 50;
		}

		else if (number >= 40){
			romanNumber += "XL";
			number -= 40;
		}

		else if (number >= 10){
			number -= 10;
			romanNumber += "X";
		}

		else if (number == 9){
			romanNumber += "IX";
			number -= 9;
		}

		else if (number >=5){
			number -= 5;
			romanNumber += "V";
		}

		else if (number == 4){
			romanNumber+= "IV";
			number -= 4;
		}

		else if (number>=1){
			number -= 1;
			romanNumber += "I";
		}
		
		
	}
	return romanNumber;
	
}

TEST_CASE("Factorials are computed", "[factorial]") {
	REQUIRE(RomanNumerals(1) == "I");
	REQUIRE(RomanNumerals(2) == "II");
	REQUIRE(RomanNumerals(4) == "IV");
	REQUIRE(RomanNumerals(5) == "V");
	REQUIRE(RomanNumerals(6) == "VI");
	REQUIRE(RomanNumerals(8) == "VIII");
	REQUIRE(RomanNumerals(9) == "IX");
	REQUIRE(RomanNumerals(10) == "X");
	REQUIRE(RomanNumerals(11) == "XI");
	REQUIRE(RomanNumerals(14) == "XIV");
	REQUIRE(RomanNumerals(40) == "XL");
	REQUIRE(RomanNumerals(45) == "XLV");
	REQUIRE(RomanNumerals(50) == "L");

}