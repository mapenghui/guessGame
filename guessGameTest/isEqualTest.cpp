#include <unittest++/UnitTest++.h>
#include "guessGame.h"

TEST(isEqual0) {
    CHECK(isEqual(1, 1) == 0);
}

TEST(isEqual1) {
    CHECK(isEqual(2, 1) == 1);
}

TEST(isEqual2) {
    CHECK(isEqual(1, 2) == 2);
}

int main()
{
    return UnitTest::RunAllTests();
}


