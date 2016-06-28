#include <unittest++/UnitTest++.h>
#include "guessGame.h"

TEST(readUserNumberTest) {
	CHECK(readUserNumber()-(int)readUserNumber() == 0);
}

int main() 
{
	return UnitTest::RunAllTests();
}
