#include "gmock/gmock.h"
#include "baseball.cpp"
#include "string"
#include "baseball_test.h"

using std::string;

using namespace testing;

class BaseballFixture : public Test {
public:
	Baseball game;
	void assertIllegalArgument(string guessNumber)
	{
		try {
			game.guess(guessNumber);
			FAIL();
		}
		catch (exception e){


		}
	}
};

TEST(BaseballGame, TryGameTest)
{
	EXPECT_EQ(1, 1);
}

TEST_F(BaseballFixture, ThrowExceptionWhenInvalidCase)
{
	assertIllegalArgument("12");
	assertIllegalArgument("12s");

}

int main() {
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}