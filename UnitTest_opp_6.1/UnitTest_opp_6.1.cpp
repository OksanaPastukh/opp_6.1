#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_opp_6.1/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp61
{
	TEST_CLASS(UnitTestopp61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array unitTest = Array(5);
		    for (int i = 0; i < 3; i++)
			   unitTest[i] = 0;
			unitTest[2] = -1;
			Assert::AreEqual(unitTest.SummaNegativeNumber(), -1.0);
		}
	};
}
