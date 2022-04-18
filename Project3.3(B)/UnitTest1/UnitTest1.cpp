#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project3.3(B)\Project3.3(B)\Pair.cpp"
#include "D:\Study\ООП\Project3.3(B)\Project3.3(B)\Pair.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			Pair b(2, 2);
			Pair c(2, 2);
			a = (b == c);
			Assert::IsTrue(a);
		}
	};
}
