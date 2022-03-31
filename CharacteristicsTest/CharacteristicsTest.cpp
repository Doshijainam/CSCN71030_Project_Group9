#include "pch.h"
#include "CppUnitTest.h"
extern "C" int  CalculatingMass();
extern "C" double* CalculatingTemperatureMoon(); 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CharacteristicsTest
{
	TEST_CLASS(CharacteristicsTest)
	{

	public:



		TEST_METHOD(REQ_001_Mass)
		{
			int max = 600;
			int min = 500;
			int expected = 550;
			
			 int actual = CalculatingMass();
			int result;
			if (expected >= min && actual >= min && actual <= max && expected <= max)
			{


				result = 1;
				Assert::AreEqual(result, 1);
			}
		}
		TEST_METHOD(REQ__002_) {
			double min = 200; 
			double max = 500;
			double expected[1] = { 250 };
			double * actual = CalculatingTemperatureMoon(); 
			int result; 
			if (*expected >= min && *actual >= min && *actual <= max && *expected <= max)
			{


				result = 1;
				Assert::AreEqual(result, 1);
			}


		}


	};
}

