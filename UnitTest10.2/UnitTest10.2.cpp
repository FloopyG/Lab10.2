#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest102
{
	TEST_CLASS(UnitTest102)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "aaaaAAA";
			string t = ProcessTXT("../t.txt");
			Assert::AreEqual(s, t);
		}
	};
}
