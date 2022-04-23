#include "pch.h"
#include "CppUnitTest.h"
#include "../../../../../політех/ооп/3/lab_3.3D/lab_3.3D/Triad.cpp"
#include "../../../../../політех/ооп/3/lab_3.3D/lab_3.3D/Date_Open.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date_Open d(1,2,3);
			Assert::AreEqual(2, d.getSecond());
		}
	};
}
