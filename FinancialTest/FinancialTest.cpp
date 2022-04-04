#include "pch.h"
#include "CppUnitTest.h"
extern "C" int buildCosts();
extern "C" int department1StaffSalary(int staff);
extern "C" int department2StaffSalary(int staff);
extern "C" int department3StaffSalary(int staff);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace financialsUnitTests
{
	TEST_CLASS(financialsUnitTests)
	{
	public:

		TEST_METHOD(REQ_001_buildCosts)
		{
			int max = 400000000;
			int min = 200000000;
			int expected = 250000000;
			int actual = buildCosts();
			int result;
			if (expected >= min && actual >= min && actual <= max && expected <= max)
			{
				result = 1;
				Assert::AreEqual(result, 1);
			}
		}

		TEST_METHOD(REQ_002_department1)
		{
			int department1Salary = 15000;
			int staff = 500;
			int result = staff * department1Salary;
			int actual = department1StaffSalary(staff);
			Assert::AreEqual(result, actual);

		}

		TEST_METHOD(REQ_003_department2)
		{
			int department2Salary = 30000;
			int staff = 500;
			int result = staff * department2Salary;
			int actual = department2StaffSalary(staff);
			Assert::AreEqual(result, actual);

		}

		TEST_METHOD(REQ_004_department3)
		{
			int department3Salary = 50000;
			int staff = 500;
			int result = staff * department3Salary;
			int actual = department3StaffSalary(staff);
			Assert::AreEqual(result, actual);

		}
	};
}
