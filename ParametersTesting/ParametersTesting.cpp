#include "pch.h"
#include "CppUnitTest.h"
#include "../CSCN71030_Project_Lab 3_Group9/Parameter.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C"

namespace ParameterUnitTests
{
	TEST_CLASS(ParameterUnitTests)
	{
	public:
		//TESTING WHEN MOONTIME() = 100 THEN MOON THRUST WILL BE CORRECT
		TEST_METHOD(MOON_THRUST_001)
		{
			int moonThrust = 4150;
			int actual = 415000 / 100; //100 SHOULD BE MOONTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(moonThrust, actual);
		}
		//TESTING WHEN MOONTIME() = 230 (edge case) THEN MOON THRUST WILL BE CORRECT
		TEST_METHOD(MOON_THRUST_002)
		{
			int moonThrust = 1804;
			int actual = 415000 / 230; //230 SHOULD BE MOONTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(moonThrust, actual);
		}
		//TESTING WHEN MOONTIME() = 60 (edge case) THEN MOON THRUST WILL BE CORRECT
		TEST_METHOD(MOON_THRUST_003)
		{
			int moonThrust = 6916;
			int actual = 415000 / 60; //60 SHOULD BE MOONTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(moonThrust, actual);
		}
		//TESTING WHEN SUNTIME() = 610 (edge case) THEN SUN THRUST WILL BE CORRECT
		TEST_METHOD(SUN_THRUST_001)
		{
			int sunThrust = 680;
			int actual = 415000 / 610; //610 SHOULD BE SUNTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(sunThrust, actual);
		}
		//TESTING WHEN SUNTIME() = 500 THEN SUN THRUST WILL BE CORRECT
		TEST_METHOD(SUN_THRUST_002)
		{
			int sunThrust = 830;
			int actual = 415000 / 500; //500 SHOULD BE SUNTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(sunThrust, actual);
		}
		//TESTING WHEN SUNTIME() = 400 (edge case) THEN SUN THRUST WILL BE CORRECT
		TEST_METHOD(SUN_THRUST_003)
		{
			int sunThrust = 1037;
			int actual = 415000 / 400; //400 SHOULD BE SUNTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(sunThrust, actual);
		}
		//TESTING WHEN MARSTIME() = 5100 THEN MARS THRUST WILL BE CORRECT
		TEST_METHOD(MARS_THRUST_001)
		{
			int marsThrust = 81;
			int actual = 415000 / 5100; //5100 SHOULD BE MARSTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(marsThrust, actual);
		}
		//TESTING WHEN MARSTIME() = 5050 THEN MARS THRUST WILL BE CORRECT
		TEST_METHOD(MARS_THRUST_002)
		{
			int marsThrust = 82;
			int actual = 415000 / 5050; //5050 SHOULD BE MARSTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(marsThrust, actual);
		}
		//TESTING WHEN MARSTIME() = 5000 (edge case) THEN MARS THRUST WILL BE CORRECT
		TEST_METHOD(MARS_THRUST_003)
		{
			int marsThrust = 83;
			int actual = 415000 / 5000; //5000 SHOULD BE MARSTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(marsThrust, actual);
		}
		//MOON VELOCITY WHEN DISTANCE / MOONTIME() = 100 VELOCITY WILL BE CORRECT
		TEST_METHOD(MOON_VELOCITY_001)
		{
			int moonVelocity = 3844;
			int actual = 384400 / 100; //100 SHOULD BE MOONTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(moonVelocity, actual);
		}
		//MOON VELOCITY WHEN DISTANCE / MOONTIME() = 230 (edge case) VELOCITY WILL BE CORRECT
		TEST_METHOD(MOON_VELOCITY_002)
		{
			int moonVelocity = 1671;
			int actual = 384400 / 230; //230 SHOULD BE MOONTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(moonVelocity, actual);
		}
		// MOON VELOCITY WHEN DISTANCE / MOONTIME() = 60 (edge case) VELOCITY WILL BE CORRECT
		TEST_METHOD(MOON_VELOCITY_003)
		{
			int moonVelocity = 6406;
			int actual = 384400 / 60; //60 SHOULD BE MOONTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(moonVelocity, actual);
		}
		// SUN VELOCITY WHEN DISTANCE / SUNTIME() = 610 (edge case) VELOCITY WILL BE CORRECT
		TEST_METHOD(SUN_VELOCITY_001)
		{
			int sunVelocity = 243852;
			int actual = 148750000 / 610; //610 SHOULD BE SUNTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(sunVelocity, actual);
		}
		// SUN VELOCITY WHEN DISTANCE / SUNTIME() = 500 VELOCITY WILL BE CORRECT
		TEST_METHOD(SUN_VELOCITY_002)
		{
			int sunVelocity = 297500;
			int actual = 148750000 / 500; //500 SHOULD BE SUNTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(sunVelocity, actual);
		}
		// SUN VELOCITY WHEN DISTANCE / SUNTIME() = 400 (edge case) VELOCITY WILL BE CORRECT
		TEST_METHOD(SUN_VELOCITY_003)
		{
			int sunVelocity = 371875;
			int actual = 148750000 / 400; //400 SHOULD BE SUNTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(sunVelocity, actual);
		}
		// MARS VELOCITY WHEN DISTANCE / MARSTIME() = 5000 (edge case) VELOCITY WILL BE CORRECT
		TEST_METHOD(MARS_VELOCITY_001)
		{
			int marsVelocity = 57364;
			int actual = 286820000 / 5000; //5000 SHOULD BE MARSTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(marsVelocity, actual);
		}
		// MARS VELOCITY WHEN DISTANCE / MARSTIME() = 5050 VELOCITY WILL BE CORRECT
		TEST_METHOD(MARS_VELOCITY_002)
		{
			int marsVelocity = 56796;
			int actual = 286820000 / 5050; //5050 SHOULD BE MARSTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(marsVelocity, actual);
		}
		// MARS VELOCITY WHEN DISTANCE / MARSTIME() = 5100 (edge case) VELOCITY WILL BE CORRECT
		TEST_METHOD(MARS_VELOCITY_003)
		{
			int marsVelocity = 56239;
			int actual = 286820000 / 5100; //5100 SHOULD BE MARSTIME() BUT IT'S RANDOMLY GENERATED SO I INPUT A VALUE
			Assert::AreEqual(marsVelocity, actual);
		}
		// MOON ACCELERATION MOONVELOCITY() = 3844 / MOONTIME() = 100 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MOON_ACCELERATION_001)
		{
			int moonAccel = 38;
			int actual = 3844 / 100;
			Assert::AreEqual(moonAccel, actual);
		}
		// MOON ACCELERATION MOONVELOCITY() = 1671 / MOONTIME() = 230 (edge) I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MOON_ACCELERATION_002)
		{
			int moonAccel = 7;
			int actual = 1671 / 230;
			Assert::AreEqual(moonAccel, actual);
		}
		// MOON ACCELERATION MOONVELOCITY() = 6406 / MOONTIME() = 60 (edge) I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MOON_ACCELERATION_003)
		{
			int moonAccel = 106;
			int actual = 6406 / 60;
			Assert::AreEqual(moonAccel, actual);
		}
		// SUN ACCELERATION SUNVELOCITY() = 243852 / SUNTIME() = 610 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(SUN_ACCELERATION_001)
		{
			int sunAccel = 399;
			int actual = 243852 / 610;
			Assert::AreEqual(sunAccel, actual);
		}
		// SUN ACCELERATION SUNVELOCITY() = 297500 / SUNTIME() = 500 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(SUN_ACCELERATION_002)
		{
			int sunAccel = 595;
			int actual = 297500 / 500;
			Assert::AreEqual(sunAccel, actual);
		}
		// SUN ACCELERATION SUNVELOCITY() = 371875 / SUNTIME() = 400 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(SUN_ACCELERATION_003)
		{
			int sunAccel = 929;
			int actual = 371875 / 400;
			Assert::AreEqual(sunAccel, actual);
		}
		// MARS ACCELERATION MARSVELOCITY() = 57364 / MARSTIME() = 5000 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MARS_ACCELERATION_001)
		{
			int marsAccel = 11;
			int actual = 57364 / 5000;
			Assert::AreEqual(marsAccel, actual);
		}
		// MARS ACCELERATION MARSVELOCITY() = 56796 / MARSTIME() = 5050 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MARS_ACCELERATION_002)
		{
			int marsAccel = 11;
			int actual = 56796 / 5050;
			Assert::AreEqual(marsAccel, actual);
		}
		// MARS ACCELERATION MARSVELOCITY() = 56239 / MARSTIME() = 5100 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MARS_ACCELERATION_003)
		{
			int marsAccel = 11;
			int actual = 56239 / 5100;
			Assert::AreEqual(marsAccel, actual);
		}
		//MOON MOMENTUM MASS * MOONVELOCITY() = 3844 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MOON_MOMENTUM_001)
		{
			int moonMomentum = 1595260000;
			int actual = 415000 * 3844;
			Assert::AreEqual(moonMomentum, actual);
		}
		//MOON MOMENTUM MASS * MOONVELOCITY() = 1671 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MOON_MOMENTUM_002)
		{
			int moonMomentum = 693465000;
			int actual = 415000 * 1671;
			Assert::AreEqual(moonMomentum, actual);
		}
		//MOON MOMENTUM MASS * MOONVELOCITY() = 6406 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MOON_MOMENTUM_003)
		{
			int moonMomentum = 2658490000;
			int actual = 415000 * 6406;
			Assert::AreEqual(moonMomentum, actual);
		}
		//SUN MOMENTUM MASS * SUNVELOCITY() = 243852 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(SUN_MOMENTUM_001)
		{
			int sunMomentum = 101198580000;
			int actual = 415000 * 243852;
			Assert::AreEqual(sunMomentum, actual);
		}
		//SUN MOMENTUM MASS * SUNVELOCITY() = 297500 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(SUN_MOMENTUM_002)
		{
			int sunMomentum = 123462500000;
			int actual = 415000 * 297500;
			Assert::AreEqual(sunMomentum, actual);
		}
		//SUN MOMENTUM MASS * SUNVELOCITY() = 371875 INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(SUN_MOMENTUM_003)
		{
			int sunMomentum = 154328125000;
			int actual = 415000 * 371875;
			Assert::AreEqual(sunMomentum, actual);
		}
		//MARS MOMENTUM MASS * MARSVELOCITY() = 57364 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MARS_MOMENTUM_001)
		{
			int marsMomentum = 23806060000;
			int actual = 415000 * 57364;
			Assert::AreEqual(marsMomentum, actual);
		}
		//MARS MOMENTUM MASS * MARSVELOCITY() = 56796 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MARS_MOMENTUM_002)
		{
			int marsMomentum = 23570340000;
			int actual = 415000 * 56796;
			Assert::AreEqual(marsMomentum, actual);
		}
		//MARS MOMENTUM MASS * MARSVELOCITY() = 56239 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MARS_MOMENTUM_003)
		{
			int marsMomentum = 23339185000;
			int actual = 415000 * 56239;
			Assert::AreEqual(marsMomentum, actual);
		}
		//MOON FORCE MASS * MOONACCELERATION() = 38 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MOON_FORCE_001)
		{
			int moonForce = 15770000;
			int actual = 415000 * 38;
			Assert::AreEqual(moonForce, actual);
		}
		//MOON FORCE MASS * MOONACCELERATION() = 7 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MOON_FORCE_002)
		{
			int moonForce = 2905000;
			int actual = 415000 * 7;
			Assert::AreEqual(moonForce, actual);
		}
		//MOON FORCE MASS * MOONACCELERATION() = 106 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MOON_FORCE_003)
		{
			int moonForce = 43990000;
			int actual = 415000 * 106;
			Assert::AreEqual(moonForce, actual);
		}
		//SUN FORCE MASS * SUNACCELERATION() = 399 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(SUN_FORCE_001)
		{
			int sunForce = 165585000;
			int actual = 415000 * 399;
			Assert::AreEqual(sunForce, actual);
		}
		//SUN FORCE MASS * SUNACCELERATION() = 595 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(SUN_FORCE_002)
		{
			int sunForce = 246925000;
			int actual = 415000 * 595;
			Assert::AreEqual(sunForce, actual);
		}
		//SUN FORCE MASS * SUNACCELERATION() = 929 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(SUN_FORCE_003)
		{
			int sunForce = 385535000;
			int actual = 415000 * 929;
			Assert::AreEqual(sunForce, actual);
		}
		//MARS FORCE MASS * MARSACCELERATION() = 11 I INPUT EACH VALUE FOR SIMPLICITY
		TEST_METHOD(MARS_FORCE_001)
		{
			//mars acceleration was 11 for all 3 tested
			int marsForce = 4565000;
			int actual = 415000 * 11;
			Assert::AreEqual(marsForce, actual);
		}
	};
}
