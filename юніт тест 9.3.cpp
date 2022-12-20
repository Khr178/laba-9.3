#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 9.3/лаба 9.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест93
{
	TEST_CLASS(юніттест93)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string surname = "b";
			Student* p = new Student[2];
			p[0].prizv = "b";
			p[0].bal1 = 5;
			p[0].bal2 = 5;
			p[0].bal3 = 5;

			p[1].prizv = "b";
			p[1].bal1 = 5;
			p[1].bal2 = 5;
			p[1].bal3 = 5;
			Sortprizv(p, 2);
			Assert::AreEqual(p[0].prizv, surname);
			Assert::AreEqual(p[0].bal1, 5.);
			Assert::AreEqual(p[0].bal2, 5.);
			Assert::AreEqual(p[0].bal3, 5.);

		}
	};
}