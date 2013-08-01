#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

#include <string.h>
extern "C"
{
#include "REG1210.h"

void say_hi();

}
TEST_GROUP(MicroControllerCode)
{
	void setup()
	{
	}
	void teardown()
	{
	}
};

TEST(MicroControllerCode, say_hi)
{
	mock("register")
			.expectOneCall("READ_REG")
			.withParameter("reg", "TI_0")
			.andReturnValue(42);
	mock("register")
			.expectOneCall("READ_REG")
			.withParameter("reg", "TI_0")
			.andReturnValue(42);
	mock("register")
			.expectOneCall("READ_REG")
			.withParameter("reg", "TI_0")
			.andReturnValue(42);
	mock("register")
			.expectOneCall("READ_REG")
			.withParameter("reg", "TI_0")
			.andReturnValue(42);

	say_hi();
}

