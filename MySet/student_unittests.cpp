/*unittest1.cpp*/

//
// Collection of student unit tests for myset data structure.
//
// << All students >>
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//

#include "stdafx.h"
#include "CppUnitTest.h"

#include "myset.h"


#include <string>
#include <set>
#include <iterator>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


namespace MyMapUnitTests
{
	TEST_CLASS(aarias_tests)
	{
	public:

		//        TEST_METHOD(aarias_test01)
		//        {
		//            myset<double> s;
		//            Assert::IsTrue(s.size() != 1);
		//            Assert::IsTrue(s.empty());
		//
		//            Assert::IsTrue(s.insert(100.00));
		//            Assert::IsTrue(s.insert(99.99));
		//
		//            Assert::IsTrue(!s.empty());
		//            Assert::IsTrue(s.size() == 2);
		//
		//            Assert::IsTrue(s.insert(99.99));
		//            Assert::IsTrue(!s.insert(100.00));
		//
		////            Assert::IsTrue(!s.size() != 4);
		//
		//        }
		//
		//        TEST_METHOD(aarias_test02)
		//        {
		//            myset<int>  s;
		//            myset<string> x;
		//
		//            Assert::IsTrue(s.size() == 0);
		//            Assert::IsTrue(s.empty());
		//
		//            Assert::IsTrue(s.insert(100));
		//            Assert::IsTrue(s.insert(1));
		//
		//            Assert::IsTrue(!x.insert("tree"));
		//            Assert::IsTrue(x.insert("bush"));
		//
		//            Assert::IsTrue(s.insert(999));
		//            Assert::IsTrue(!s.insert(100));
		//
		//            Assert::IsTrue(s.size() != 0);
		//            Assert::IsTrue(x.size() == 2);
		//        }

		TEST_METHOD(aarias_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() != 1);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.insert("pear"));
			Assert::IsTrue(!s.insert("pear"));

			Assert::IsTrue(s.insert("Banana"));
			Assert::IsTrue(!s.insert("Banana"));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["banana"]);  // should not find because Banana(Upper_Case) should not equal banana(lower_Case)
		}

		//TEST_METHOD(aarias_test04)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.insert(300));
		//    Assert::IsTrue(s.insert(89));
		//    Assert::IsTrue(s.insert(100));
		//    Assert::IsTrue(s.insert(25));
		//    Assert::IsTrue(s.insert(99));
		//    Assert::IsTrue(s.insert(301));
		//    Assert::IsTrue(s.insert(50));
		//    Assert::IsTrue(!s.insert(99));

		//    Assert::IsTrue(s.size() == 7);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find(2);

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 301);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 99);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 301);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 50);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 100);
		//    ++iter;
		//    Assert::IsTrue(iter == s.end());

		//    auto iter2 = s.find(1);
		//    Assert::IsTrue(iter2 == s.end());
		//}

		//TEST_METHOD(aarias_test05)
		//{
		//    myset<int>  s;

		//    for (int i = 1000; i >= 100; --i)
		//    {
		//        Assert::IsTrue(s.insert(i));
		//    }

		//    Assert::IsTrue(s.size() == 901);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s[71]);
		//    Assert::IsTrue(s[149]);
		//    Assert::IsTrue(s[500]);
		//    Assert::IsTrue(s[901]);
		//    Assert::IsTrue(!s[99]);
		//    Assert::IsFalse(s[50]);
		//    Assert::IsFalse(s[1]);

		//}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Ahel Guerrero
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(aguerrr2_tests)
	{
	public:


		TEST_METHOD(aguerrr2_test01)
		{
			set<int> a;
			myset<int> b;


			for (int i = 5; i > 0; --i) {
				Assert::IsTrue(b.insert(i));
				a.insert(i);
			}
			auto iter1 = b.begin();
			auto iter2 = a.begin();

			Assert::AreEqual(*iter1, *iter2);
			++iter1;
			++iter2;

			Assert::AreEqual(*iter1, *iter2);
			++iter1;
			++iter2;

			Assert::AreEqual(*iter1, *iter2);
			++iter1;
			++iter2;

			Assert::AreEqual(*iter1, *iter2);
			++iter1;
			++iter2;

			Assert::AreEqual(*iter1, *iter2);
			++iter1;
			++iter2;


			Assert::IsTrue(iter1 == b.end());


		}

		void fun(myset<int> s) {
			s.insert(8);
		}
		void fun2(myset<int> &s) {
			s.insert(5);
		}

		TEST_METHOD(aguerrr2_test02) {


			myset<int> s;

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s[1]);
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
			fun(s);
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s.insert(8));
			Assert::IsTrue(s.size() == 2);
			fun2(s);
			Assert::IsTrue(s.size() == 3);
			auto it = s.begin();
			Assert::IsTrue(*it == 1);
			s.clear();

			Assert::IsTrue(s.size() == 0);

		}

		TEST_METHOD(aguerrr2_test03) {

			myset<string> s;


			Assert::IsTrue(s.insert("Mexico"));
			Assert::IsTrue(s.insert("USA"));
			myset<string> s2 = s;

			Assert::IsTrue(s2.size() == 2);
			auto it = s.begin();
			auto it2 = s2.begin();
			Assert::IsTrue(*it == *it2);

			s2 += "Canada";

			Assert::IsTrue(s2.size() == 3);
			Assert::IsTrue(s.size() == 2);

			s += "Canada";

			Assert::IsTrue(s.size() == s2.size());

			Assert::IsFalse(s.insert("Canada"));
			Assert::IsFalse(s2.insert("Canada"));

			s.clear();

			Assert::IsTrue(s.size() == 0);

		}


		TEST_METHOD(aguerrr2_test04) {
			myset<double> s;

			Assert::IsTrue(s.insert(3.14));
			Assert::IsTrue(s.insert(3.00));
			Assert::IsTrue(s.insert(3.10));
			Assert::IsTrue(s.insert(3.20));

			Assert::IsTrue(s.size() == 4);

			Assert::IsTrue(!s.insert(3.00));

			Assert::IsTrue(s.size() == 4);


			auto iter = s.find(3.20);

			Assert::IsTrue(*iter == 3.20);
			++iter;
			Assert::IsTrue(iter == s.end());

			s.clear();

			Assert::IsTrue(s.size() == 0);

		}

		TEST_METHOD(aguerrr2_test05) {

			myset<int> s;

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(5));

			auto iter = s.begin();

			Assert::IsTrue(*iter == 1);
			++iter;

			Assert::IsTrue(*iter == 2);
			++iter;

			Assert::IsTrue(*iter == 3);
			++iter;

			Assert::IsTrue(*iter == 4);
			++iter;

			Assert::IsTrue(*iter == 5);
			++iter;

			Assert::IsTrue(iter == s.end());
		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Alex Guler
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(aguler3Test)
	{
	public:

		//TEST_METHOD(aguler3_1)
		//{
		//    myset<char> s;
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert('C'));
		//    Assert::IsTrue(s.insert('Z'));
		//    Assert::IsTrue(s.insert('B'));
		//    Assert::IsTrue(s.insert('D'));
		//    Assert::IsTrue(s.insert('H'));
		//    Assert::IsTrue(s.insert('K'));
		//    Assert::IsTrue(s.insert('E'));

		//    Assert::IsTrue(s.size() == 7);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find('D');
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 'D');

		//    auto iter2 = s.find('Z');
		//    Assert::IsTrue(iter2 != s.end());
		//    Assert::IsTrue(*iter == 'Z');

		//    auto iter3 = s.find('M');
		//    Assert::IsTrue(iter3 == s.end());	// did not find
		//    Assert::IsTrue(!s['M']);
		//}


		TEST_METHOD(aguler3_2)
		{
			myset<int> s;
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(!s.insert(10));

			Assert::IsTrue(s.size() == 1);

			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(15));

			Assert::IsTrue(s.size() == 3);

			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[25]);

			auto iter = s.find(20);
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(10);
			Assert::IsTrue(*iter2 == 10);

			s.clear();

			Assert::IsTrue(s.size() == 0);

		}

		TEST_METHOD(aguler3_3)
		{
			myset<int> s;

			for (int i = 0; i < 1000; ++i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 1000);

			for (int i = 0; i < 1000; ++i)
			{
				auto iter = s.find(i);
				Assert::IsTrue(*iter == i);
				Assert::IsTrue(s[i]);
			}

			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
		}

		TEST_METHOD(aguler3_4)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());

			for (int i = 0; i < 1000; ++i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 1000);
			Assert::IsTrue(!s.empty());

			int num = 0;
			for (auto iter = s.find(0); iter != s.end(); ++iter)
			{
				Assert::IsTrue(*iter == num);
				Assert::IsTrue(s[num]);
				num++;
			}

			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
		}

		//TEST_METHOD(aguler3_5)
		//{

		//    string alphabet = "abcdefghijklmnopqrstuvwxyz";

		//    myset<char> s;

		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.size() == 0);

		//    for (int i = 0; i < alphabet.size(); ++i)
		//    {
		//        Assert::IsTrue(s.insert(alphabet.at(i)));
		//    }

		//    Assert::IsTrue(s.size() == 26);	// 26 letters in the alphabet
		//    Assert::IsTrue(!s.empty());

		//    int num = 0;
		//    for (auto iter = s.find('a'); iter != s.end(); ++iter)
		//    {
		//        Assert::IsTrue(*iter == alphabet.at(num));
		//        Assert::IsTrue(s[num]);
		//        num++;
		//    }

		//    s.clear();
		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.size() == 0);
		//}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(akan227_tests)
	{
	public:


		//
		// Testing set of ints
		// insert
		// empty
		// find
		// clear
		// size
		//
		TEST_METHOD(akhan227_test01)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(5));
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(!s.insert(5));
			Assert::IsTrue(s.find(3) == s.end());
			Assert::IsTrue(s.find(1) != s.end());
			Assert::IsTrue(s.size() == 2);

			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		// 
		// set of strings
		// size
		// empty
		// begin
		// end
		// dereference
		// clear
		//
		TEST_METHOD(akhan227_test02)
		{
			myset<string> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.begin() == s.end());
			Assert::IsTrue(s.insert("World"));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s.insert("Hello"));
			Assert::IsTrue(s.size() != 1);
			Assert::IsTrue(*s.begin() == "Hello");
			Assert::IsTrue(s.begin() != s.end());

			s.clear();
			Assert::IsTrue(s.empty());


		}

		//
		// using set of doubles
		// insert
		// empty
		// find
		// end
		// begin
		// iter++
		// clear
		//
		//TEST_METHOD(akhan227_test03)
		//{
		//    myset<double> s;

		//    Assert::IsTrue(s.insert(20.4));
		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(s.find(20.4) == s.begin());
		//    Assert::IsTrue(s.insert(107.23));
		//    Assert::IsTrue(s.size() == 2);
		//    Assert::IsTrue(s.find(20.4) == s.begin());
		//    Assert::IsTrue(*s.find(20.4) == 20.4);

		//    auto iter = s.find(107.3);
		//    Assert::IsTrue(iter != s.end());
		//    ++iter;
		//    Assert::IsTrue(iter == s.end());
		//    s.clear();
		//    Assert::IsTrue(s.empty());
		//}

		//
		// testing dynamic growth of array
		//
		TEST_METHOD(akhan227_test04)
		{
			myset<int> s;

			Assert::IsTrue(s.insert(90));
			Assert::IsTrue(s.insert(80));
			Assert::IsTrue(s.insert(70));
			Assert::IsTrue(s.insert(60));
			Assert::IsTrue(s.insert(50));
			Assert::IsTrue(s.insert(40));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.size() == 10);
		}

		//
		// set of chars
		// insert 
		// no duplicates
		// lower case and upper case independent
		// numeric characters
		// size
		//
		TEST_METHOD(akhan227_test05)
		{
			myset<char> s;
			Assert::IsTrue(s.insert('A'));
			Assert::IsTrue(!s.insert('A'));
			Assert::IsTrue(s.insert('B'));
			Assert::IsTrue(s.insert('b'));
			Assert::IsTrue(s.insert('d'));
			Assert::IsTrue(s.insert('C'));
			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(s.insert('z'));
			Assert::IsTrue(s.insert('3'));
			Assert::IsTrue(s.size() == 7);
		}

		//
		// set of strings
		// empty
		// insert
		// insert similar but different values
		// [] operator
		// += operator
		// isFalse statements
		//
		TEST_METHOD(akhan227_test06)
		{
			myset<string> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert("CS 341"));
			Assert::IsFalse(s.insert("CS 341"));
			Assert::IsTrue(s.insert("CS341"));
			Assert::IsFalse(s.insert("CS341"));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(s["CS 341"]);

			s += "hello";
			Assert::IsFalse(s.insert("hello"));
			Assert::IsTrue(s["hello"]);
			Assert::IsTrue(s.size() == 3);
		}

	};
}
/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// Antwan Love
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(alove5_tests)
	{
	public:

		// test case 01
		//TEST_METHOD(alove5_test01)
		//{
		//    myset<int>  t;
		//    // insert values 50 - 500 into set
		//    for (int i = 500; i >= 50; i--)
		//    {
		//        Assert::IsTrue(t.insert(i));
		//    }

		//    Assert::IsTrue(!t.empty());
		//    Assert::IsFalse(t.empty());
		//    Assert::IsTrue(t.size() > 0);
		//    Assert::IsFalse(t.size() == 0);

		//    int j = 100;
		//    auto iter = t.begin();
		//    while (iter != t.end())
		//    {
		//        Assert::IsTrue(*iter == j);
		//        ++iter;
		//        j++;
		//    }
		//    Assert::IsTrue(iter != t.end());

		//    auto found = t.find(400);
		//    Assert::IsTrue(found != t.end());

		//    auto found2 = t.find(10);
		//    Assert::IsFalse(found2 != t.end());

		//    int w = 200;
		//    for (auto x : t)
		//    {
		//        Assert::IsTrue(x == w);
		//        ++w;
		//    }
		//}

		// test case 02
		// inserts 7 numbers into myset; searches for 20 and 200;
		TEST_METHOD(alove5_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(100));
			Assert::IsTrue(s.insert(200));
			Assert::IsTrue(s.insert(300));
			Assert::IsTrue(s.insert(400));
			Assert::IsTrue(s.insert(500));
			Assert::IsTrue(s.insert(600));
			Assert::IsTrue(s.insert(700));


			auto iter = s.find(20);
			Assert::IsTrue(iter == s.end());

			iter = s.find(200);
			Assert::IsTrue(iter != s.end());

			Assert::IsTrue(!s.empty());
		}

		// test case 03
		// checking if 'def' was entered
		TEST_METHOD(alove5_test03)
		{
			myset<string>  t;
			string userInput;

			Assert::IsTrue(t.insert("abc"));
			Assert::IsTrue(t.insert("def"));
			Assert::IsTrue(t.insert("ghi"));
			Assert::IsTrue(t.insert("jkl"));
			Assert::IsTrue(t.insert("pqr"));
			Assert::IsTrue(t.insert("stu"));

			userInput = "xyz";
			Assert::IsFalse(t[userInput]);
			userInput = "mno";
			Assert::IsFalse(t[userInput]);
			userInput = "def";
			Assert::IsTrue(t[userInput]);
			userInput = "stu";
			Assert::IsTrue(t[userInput]);
		}


		// test case 04 >> test if size is 0 , also confirms set is empty
		//TEST_METHOD(alove5_test04)
		//{
		//    myset<int>  x;

		//    Assert::IsTrue(x.size() == 0);
		//    Assert::IsTrue(x.empty());

		//    Assert::IsTrue(x.insert(10));
		//    Assert::IsFalse(!x.empty());

		//    Assert::IsTrue(x.insert(100));
		//    Assert::IsTrue(x.size() > 0);

		//    Assert::IsTrue(x.insert(1000));
		//    Assert::IsFalse(!x.empty());

		//    x.clear();
		//    Assert::IsTrue(x.empty());
		//    Assert::IsFalse(x.size() > 0);
		//}

		// test case 05
		TEST_METHOD(alove5_test05)
		{
			myset<int>  y;
			int userInput;

			Assert::IsTrue(y.insert(4));
			Assert::IsTrue(y.insert(8));

			userInput = 4;
			Assert::IsTrue((*y.begin()) == 4);
			Assert::IsTrue(!y.empty());

			auto iter = y.end();
			Assert::IsTrue(iter == y.end());
			Assert::IsFalse(iter == y.begin());

			auto found = y.find(4);
			Assert::IsTrue(found != y.end());
			Assert::IsTrue(found == y.begin());

			userInput = 9;
			Assert::IsFalse(y[userInput]);

			userInput = 8;
			Assert::IsTrue(y[userInput]);
		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_a_tests)
	{
	public:


		TEST_METHOD(amezhe2_test01)
		{
			myset<double>  s;

			Assert::IsTrue(s.insert(5.0));
			Assert::IsTrue(s.insert(534.3533));
			Assert::IsTrue(s.insert(0.3333));
			Assert::IsTrue(s.insert(-2.1));
			Assert::IsTrue(s.insert(99.86));
			Assert::IsTrue(s.insert(345.7));
			Assert::IsTrue(!s.insert(0.3333));

			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

			myset<double> duplicate = s;

			Assert::IsTrue(duplicate[5.0]);
			Assert::IsTrue(duplicate[534.3533]);
			Assert::IsTrue(duplicate[0.3333]);
			Assert::IsTrue(duplicate[-2.1]);
			Assert::IsTrue(duplicate[99.86]);
			Assert::IsTrue(duplicate[345.7]);
			Assert::IsTrue(duplicate[0.3333]);
			Assert::IsTrue(!duplicate[23.5]);
			Assert::IsTrue(!duplicate[-77.7]);;

		}

		TEST_METHOD(amezhe2_test02)
		{
			myset<double>  s;

			Assert::IsTrue(s.insert(5.0));
			Assert::IsTrue(s.insert(534.3533));
			Assert::IsTrue(s.insert(0.3333));
			Assert::IsTrue(s.insert(-2.1));
			Assert::IsTrue(s.insert(99.86));
			Assert::IsTrue(s.insert(345.7));
			Assert::IsTrue(!s.insert(0.3333));

			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

			myset<double> duplicate = s;

			auto iter1 = s.begin();
			auto iter2 = duplicate.begin();
			Assert::IsTrue(iter1 != iter2);
		}

		TEST_METHOD(amezhe2_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("banana"));
			Assert::IsTrue(s.insert("plum"));
			Assert::IsTrue(s.insert("orange"));
			Assert::IsTrue(s.insert("pineapple"));
			Assert::IsTrue(s.insert("cherry"));
			Assert::IsTrue(!s.insert("plum"));

			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

			auto iter1 = s.begin();
			auto iter2 = s.begin();
			Assert::IsTrue(iter1 == iter2);
		}

		TEST_METHOD(amezhe2_test04)
		{
			myset<string> *s = new myset<string>;

			Assert::IsTrue(s->insert("apple"));
			Assert::IsTrue(s->insert("banana"));
			Assert::IsTrue(s->insert("plum"));
			Assert::IsTrue(s->insert("orange"));
			Assert::IsTrue(s->insert("pineapple"));
			Assert::IsTrue(s->insert("cherry"));
			Assert::IsTrue(!s->insert("plum"));

			Assert::IsTrue(s->size() == 6);
			Assert::IsTrue(!s->empty());

			auto iter1 = s->begin();

			delete s;

			try {
				string fruit = *iter1;
			}
			catch (...) {
				Assert::IsTrue(true); // the try statement should have thrown an exception.
			}
		}

		TEST_METHOD(amezhe2_test05)
		{
			myset<double>  s;

			Assert::IsTrue(s.insert(5.0));
			Assert::IsTrue(s.insert(534.3533));
			Assert::IsTrue(s.insert(0.3333));
			Assert::IsTrue(s.insert(-2.1));
			Assert::IsTrue(s.insert(99.86));
			Assert::IsTrue(s.insert(345.7));
			Assert::IsTrue(!s.insert(0.3333));

			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

			myset<double> duplicate = s;

			auto iter1 = s.begin();
			auto iter2 = duplicate.begin();

			for (; iter1 != s.end() && iter2 != duplicate.end(); ++iter1) {
				Assert::IsTrue((*iter1) == (*iter2));
				++iter2;
			}
		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Abdul Rehman
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(arehma7_tests)
	{
	public:

		TEST_METHOD(arehma7_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(arehma7_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(arehma7_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(arehma7_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(arehma7_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(arehma7_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(arehma7_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(arehma7_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}


		//Mytests Begin here=====================

		TEST_METHOD(arehma7_test09)
		{
			myset<int>  s;
			Assert::IsTrue(s.empty());
			for (int i = 0; i < 20; ++i) {
				Assert::IsTrue(s.insert(i));
			}
			Assert::IsTrue(s.size() == 20);
			s.clear();
			Assert::IsTrue(s.empty());
			for (int i = 0; i < 2000; ++i) {
				Assert::IsTrue(s.insert(i));
			}
			Assert::IsTrue(!s.insert(67));
			Assert::IsTrue(s.insert(2000));
			Assert::IsTrue(!s[10000]);
			Assert::IsTrue(s[1000]);
			Assert::IsTrue(!s[-1]);

		}

		//TEST_METHOD(arehma7_test10)
		//{
		//    myset<char>  s;

		//    Assert::IsTrue(s.insert('h'));
		//    Assert::IsTrue(s.insert('e'));
		//    Assert::IsTrue(s.insert('l'));
		//    Assert::IsTrue(!s.insert('l'));
		//    Assert::IsTrue(s.insert('o'));

		//    auto iter = s.find('h');

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 'h');

		//    auto iter2 = s.find('l');

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 'l');

		//    auto iter3 = s.find('T');

		//    Assert::IsTrue(iter == s.end());




		//}
		//done till here
		TEST_METHOD(arehma7_test11)
		{
			myset<string> s;

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));
			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("orange"));
			Assert::IsTrue(s.insert("banana"));
			Assert::IsTrue(s.insert("pear"));

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(s["orange"]);
			Assert::IsTrue(s["banana"]);
			Assert::IsTrue(s["pear"]);

			s.clear();

			Assert::IsTrue(!s["apple"]);
			Assert::IsTrue(!s["orange"]);
			Assert::IsTrue(!s["banana"]);
			Assert::IsTrue(!s["pear"]);


		}

		TEST_METHOD(arehma7_test12)
		{
			myset<int> s;

			for (int i = 0; i < 20; ++i) {
				Assert::IsTrue(s.insert(i));
			}
			Assert::IsTrue(s.size() == 20);

			auto iter = s.find(2);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);

			iter = s.find(200);
			Assert::IsTrue(iter == s.end());

			s.clear();
			iter = s.find(13);
			Assert::IsTrue(iter == s.end());

			Assert::IsTrue(s.insert(13));

			iter = s.find(13);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 13);
			Assert::IsTrue(s.size() == 1);
		}

		TEST_METHOD(arehma7_test13)
		{
			myset<char> s;

			Assert::IsTrue(s.insert('a'));
			Assert::IsTrue(s.insert('b'));
			Assert::IsTrue(s.insert('c'));
			Assert::IsTrue(s.insert('d'));
			Assert::IsTrue(s.insert('e'));

			Assert::IsTrue(s['a']);
			Assert::IsTrue(s['b']);
			Assert::IsTrue(s['c']);
			Assert::IsTrue(s['d']);
			Assert::IsTrue(s['e']);
			s.clear();

			Assert::IsTrue(!s['a']);
			Assert::IsTrue(!s['b']);
			Assert::IsTrue(!s['c']);
			Assert::IsTrue(!s['d']);
			Assert::IsTrue(!s['e']);

		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for myset data structure.
 //
 // Aditya Sinha
 // CS 341 - Fall 2017
 // Project #03 - test cases
 //









namespace mysetUnitTests
{
	TEST_CLASS(asinha_tests)
	{
	public:

		TEST_METHOD(asinha_test01)
		{
			myset<char> S;

			S.insert('a');

			Assert::IsTrue(S.size() == 1);
			//            Assert::IsTrue(S.begin() == 'z');
		}

		TEST_METHOD(asinha_test02)
		{
			myset<char> S;

			Assert::IsTrue(S.empty() == true);

			S.insert('a');

			Assert::IsTrue(S.size() == 1);
			//            Assert::IsTrue(S.begin() == 'z');
			Assert::IsTrue(S.empty() == false);
		}

		TEST_METHOD(asinha_test03)
		{
			myset<char> S;

			Assert::IsTrue(S.empty() == true);

			S.insert('a');

			Assert::IsTrue(S.size() == 1);
			//            Assert::IsTrue(S.begin() == 'z');
			Assert::IsTrue(S.empty() == false);
			//Assert::IsTrue(S[0] == 'z');
		}

		TEST_METHOD(asinha_test04)
		{
			myset<char> S;

			Assert::IsTrue(S.empty() == true);

			S.insert('a');

			Assert::IsTrue(S.size() == 1);
			//Assert::IsTrue(S.begin() == 'z');
			Assert::IsTrue(S.empty() == false);

			S.clear();

			Assert::IsTrue(S.empty() == true);
		}

		//TEST_METHOD(asinha_test05)
		//{
		//    myset<char> S;

		//    Assert::IsTrue(S.empty() == true);

		//    S.insert('a');

		//    Assert::IsTrue(S.size() == 1);
		//    //Assert::IsTrue(S.begin() == 'z');
		//    Assert::IsTrue(S.empty() == false);

		//    auto iter = S.find('z');
		//    Assert::IsTrue(*iter == 'z');
		//}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Aaron Struck
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_b_tests)
	{
	public:



		//TEST_METHOD(astruc2_test01) {
		//    myset<int> s;

		//    Assert::IsTrue(s.insert(66));
		//    Assert::IsTrue(s.insert(65));
		//    Assert::IsTrue(s.insert(64));
		//    Assert::IsTrue(s.insert(63));
		//    Assert::IsTrue(s.insert(62));

		//    myset<int> s2 = s;
		//    auto iter = s2.find(66);

		//    Assert::IsTrue(*iter == 66);
		//    ++iter;
		//    Assert::IsTrue(*iter == 65);
		//    ++iter;
		//    Assert::IsTrue(*iter == 64);
		//    ++iter;
		//    Assert::IsTrue(*iter == 63);
		//    ++iter;
		//    Assert::IsTrue(*iter == 62);

		//}

		TEST_METHOD(astruc2_test02) {
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.find(0) == s.end());

			for (int i = 0; i < 100; i++) {
				Assert::IsTrue(s.insert(i));
				Assert::IsTrue(!s.empty());
				Assert::IsTrue(s.find(i) != s.end());
			}

			Assert::IsTrue(s.size() == 100);
			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.find(0) == s.end());

		}

		TEST_METHOD(astruc2_test03) {
			myset<int> s;

			Assert::IsTrue(s.insert(0));
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));

			s += 5;
			s += 6;
			s += 7;
			s += 8;
			s += 9;

			Assert::IsTrue(s[5]);
			Assert::IsTrue(s[6]);
			Assert::IsTrue(s[7]);
			Assert::IsTrue(s[8]);
			Assert::IsTrue(s[9]);

			s.clear();

			Assert::IsTrue(s.empty());
		}

		//TEST_METHOD(astruc2_test04) {
		//    myset<int> s;

		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.begin() == s.end());

		//    Assert::IsTrue(s.insert(66));

		//    Assert::IsFalse(s.begin() == s.end());
		//    Assert::IsTrue(++s.begin() == s.end());

		//    Assert::IsTrue(s.insert(66));

		//    Assert::IsFalse(s.begin() == s.end());
		//    auto iter = s.begin();
		//    ++iter;
		//    ++iter;
		//    Assert::IsTrue(iter == s.end());

		//    Assert::IsFalse(s.empty());

		//    s.clear();

		//    Assert::IsTrue(s.empty());

		//}

		TEST_METHOD(astruc2_test05) {
			myset<int> s;

			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(5));

			Assert::IsTrue(s.size() == 5);

			Assert::IsFalse(s.insert(1));
			Assert::IsFalse(s.insert(2));
			Assert::IsFalse(s.insert(3));
			Assert::IsFalse(s.insert(4));
			Assert::IsFalse(s.insert(5));

			Assert::IsTrue(s.size() == 5);

			s.clear();

			Assert::IsTrue(s.empty());
		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Anatoly Tverdovsky
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //










namespace MyMapUnitTests {
	TEST_CLASS(atverd2_tests) {
public:
	/// <summary>
	/// Tests the default and copy constructors.
	/// </summary>
	TEST_METHOD(atverd2_test01) {
		{ // Test Default Constructor
			myset<int> my_set;

			Assert::IsTrue(my_set.empty());
			Assert::IsTrue(my_set.size() == 0);
		}

		{ // Test Copy Constructor
			myset<int> my_set1;
			my_set1.insert(2);
			my_set1.insert(3);
			my_set1.insert(0);
			my_set1.insert(6);

			// Test both sets have the same size
			myset<int> my_set2(my_set1);
			Assert::IsTrue(my_set1.size() == my_set2.size());

			// Test both sets contain the same elements
			auto i1 = my_set1.begin();
			auto i2 = my_set2.begin();
			for (; i1 != my_set1.end(), i2 != my_set2.end(); ++i1, ++i2) {
				Assert::IsTrue(*i1 == *i2);
			}

			// Insert a new element into set 1. Assert the element is not
			// inserted into set 2 (i.e. copy constructor duplicated the
			// underlying arrays).
			my_set1.insert(10);
			Assert::IsTrue(my_set1.find(10) != my_set1.end());
			Assert::IsTrue(my_set2.find(10) == my_set2.end());
			Assert::IsTrue(my_set1.size() - my_set2.size() == 1);

			// Clear set 2. Assert this did not remove any elements from
			// set 1.
			my_set2.clear();
			Assert::IsTrue(my_set1.find(0) != my_set1.end());
			Assert::IsTrue(my_set1.find(2) != my_set1.end());
			Assert::IsTrue(my_set1.find(3) != my_set1.end());
			Assert::IsTrue(my_set1.find(10) != my_set1.end());
			Assert::IsTrue(my_set2.empty());
		}
	}

	/// <summary>
	/// Tests that the MySet behaves like the STL set for insert, find,
	/// and clear operations.
	/// </summary>
	TEST_METHOD(atverd2_test02) {
		std::set<int> stl_set;
		myset<int> my_set;
		Assert::IsTrue(stl_set.empty() == my_set.empty());
		Assert::IsTrue(stl_set.size() == my_set.size());

		// Try to add 16384 random integers to the set. The integers are
		// not sorted nor are they unique (hopefully).
		for (int i = 0; i < 16384; ++i) {
			int element = rand() % 500;

			bool stl_inserted = stl_set.insert(element).second;
			bool my_inserted = my_set.insert(element);

			Assert::AreEqual(stl_inserted, my_inserted);
		}

		// Both sets should have the same size after all of the additions
		Assert::IsTrue(stl_set.empty() == my_set.empty());
		Assert::IsTrue(stl_set.size() == my_set.size());

		// Try to find each element between 0 and 500. Assert the result
		// is the same for my_set and stl_set.
		for (int i = 0; i < 500; ++i) {
			bool stl_set_contains = stl_set.find(i) != stl_set.end();
			bool my_set_contains_f = my_set.find(i) != my_set.end();
			bool my_set_contains_o = my_set[i];

			Assert::AreEqual(stl_set_contains, my_set_contains_f);
			Assert::AreEqual(stl_set_contains, my_set_contains_o);
		}

		// Go through each element in my_set and stl_set. Assert inserted
		// elements are at the correct positions.
		auto stl_begin = stl_set.begin();
		auto my_begin = my_set.begin();
		for (; stl_begin != stl_set.end(), my_begin != my_set.end();
			++stl_begin, ++my_begin) {
			Assert::AreEqual(*stl_begin, *my_begin);
		}

		// Clear both sets, assert sizes go to zero
		Assert::IsTrue(stl_set.empty() == my_set.empty());
		Assert::IsTrue(stl_set.size() == my_set.size());
	}

	/// <summary>
	/// Tests the destructor and clear methods of the myset container.
	/// </summary>
	//TEST_METHOD(atverd2_test03) {
	//    class CounterInteger {
	//    public:
	//        static int& get_ctor_count() {
	//            static int ctor_count = 0;
	//            return ctor_count;
	//        }

	//        static int& get_dtor_count() {
	//            static int dtor_count = 0;
	//            return dtor_count;
	//        }

	//        CounterInteger() : m_x(0) { ++get_ctor_count(); }
	//        CounterInteger(int x) : m_x(x) { ++get_ctor_count(); }
	//        CounterInteger(const CounterInteger &i) { ++get_ctor_count(); }
	//        CounterInteger(CounterInteger &&i) { ++get_ctor_count(); }
	//        ~CounterInteger() { ++get_dtor_count(); }

	//        bool operator<(const CounterInteger &rhs) const {
	//            return this->m_x < rhs.m_x;
	//        }

	//        CounterInteger& operator=(const CounterInteger &rhs) {
	//            this->m_x = rhs.m_x;
	//            return *this;
	//        }
	//    private:
	//        int m_x;
	//    };

	//    { // Test destructor
	//        myset<CounterInteger> my_set;

	//        // Append some elements, assert they are constructed using the
	//        // CounterInteger constructor.
	//        my_set.insert(CounterInteger(3));
	//        my_set.insert(CounterInteger(17));
	//        my_set.insert(CounterInteger(0));
	//        my_set.insert(CounterInteger(21));
	//        Assert::IsTrue(CounterInteger::get_ctor_count() > 0);
	//        Assert::IsTrue(CounterInteger::get_dtor_count() > 0);
	//        Assert::AreEqual(4, my_set.size());
	//        Assert::IsFalse(my_set.empty());
	//    }
	//    // When set is destroyed assert all elements which were created
	//    // were destroyed.
	//    Assert::AreEqual(CounterInteger::get_ctor_count(),
	//        CounterInteger::get_dtor_count());

	//    { // Test clear followed by destructor
	//        myset<CounterInteger> my_set;

	//        // Append some elements, assert they are constructed using the
	//        // CounterInteger constructor.
	//        my_set.insert(CounterInteger(3));
	//        my_set.insert(CounterInteger(17));
	//        my_set.insert(CounterInteger(0));
	//        my_set.insert(CounterInteger(21));
	//        Assert::IsTrue(CounterInteger::get_ctor_count() > 0);
	//        Assert::IsTrue(CounterInteger::get_dtor_count() > 0);
	//        Assert::AreEqual(4, my_set.size());
	//        Assert::IsFalse(my_set.empty());

	//        // Clear the set. Assert all elements are removed.
	//        my_set.clear();
	//        Assert::AreEqual(0, my_set.size());
	//        Assert::IsTrue(my_set.empty());
	//        Assert::AreEqual(CounterInteger::get_ctor_count(),
	//            CounterInteger::get_dtor_count());
	//    }
	//    // Assert destructor does not leave any dangling elements even
	//    // after the clear call, and that it didn't attempt to destroy
	//    // elements which were already destroyed by the clear method.
	//    Assert::AreEqual(CounterInteger::get_ctor_count(),
	//        CounterInteger::get_dtor_count());
	//}

	/// <summary>
	/// Tests the iterators of the myset interface.
	/// </summary>
	TEST_METHOD(atverd2_test04) {
		myset<int> my_set;

		my_set.insert(10);
		my_set.insert(0);
		my_set.insert(20);
		my_set.insert(5);

		auto it = my_set.begin();
		Assert::AreEqual(0, *it);
		Assert::IsTrue(my_set.begin() == it);
		Assert::IsFalse(my_set.end() == it);
		++it;
		Assert::AreEqual(5, *it);
		Assert::IsTrue(++my_set.begin() == it);
		Assert::IsFalse(my_set.begin() == it);
		Assert::IsFalse(my_set.end() == it);

		++it;
		Assert::AreEqual(10, *it);
		Assert::IsTrue(++++my_set.begin() == it);
		Assert::IsFalse(my_set.begin() == it);
		Assert::IsFalse(my_set.end() == it);

		++it;
		Assert::AreEqual(20, *it);
		Assert::IsTrue(++++++my_set.begin() == it);
		Assert::IsFalse(my_set.begin() == it);
		Assert::IsFalse(my_set.end() == it);

		++it;
		Assert::IsTrue(++++++++my_set.begin() == it);
		Assert::IsTrue(my_set.end() == it);
		Assert::IsFalse(my_set.begin() == it);
	}

	TEST_METHOD(atverd2_test05) {
		myset<int> set;

		Assert::IsTrue(set.insert(3));
		Assert::AreEqual(3, *set.begin());
		Assert::AreEqual(1, set.size());

		Assert::IsTrue(set.insert(2));
		Assert::AreEqual(2, *(set.begin()));
		Assert::AreEqual(3, *(++set.begin()));
		Assert::AreEqual(2, set.size());

		Assert::IsFalse(set.insert(3));
		Assert::AreEqual(2, *(set.begin()));
		Assert::AreEqual(3, *(++set.begin()));
		Assert::AreEqual(2, set.size());

		Assert::IsTrue(set.insert(1));
		Assert::AreEqual(1, *(set.begin()));
		Assert::AreEqual(2, *(++set.begin()));
		Assert::AreEqual(3, *(++++set.begin()));
		Assert::AreEqual(3, set.size());

		Assert::IsFalse(set.insert(1));
		Assert::AreEqual(1, *(set.begin()));
		Assert::AreEqual(2, *(++set.begin()));
		Assert::AreEqual(3, *(++++set.begin()));
		Assert::AreEqual(3, set.size());

		Assert::IsTrue(set.insert(0));
		Assert::AreEqual(0, *(set.begin()));
		Assert::AreEqual(1, *(++set.begin()));
		Assert::AreEqual(2, *(++++set.begin()));
		Assert::AreEqual(3, *(++++++set.begin()));
		Assert::AreEqual(4, set.size());

		Assert::IsTrue(set.insert(67));
		Assert::AreEqual(0, *(set.begin()));
		Assert::AreEqual(1, *(++set.begin()));
		Assert::AreEqual(2, *(++++set.begin()));
		Assert::AreEqual(3, *(++++++set.begin()));
		Assert::AreEqual(67, *(++++++++set.begin()));
		Assert::AreEqual(5, set.size());
	}
	};
}
/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// Alexis Urquiza
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(aurqui7_tests)
	{
	public:

		TEST_METHOD(aurqui7_test01)
		{
			myset<string> s;
			Assert::IsTrue(s.insert("first"));
			Assert::IsTrue(s.size() == 1);

			Assert::IsTrue(s.insert("second"));
			Assert::IsTrue(s.size() == 2);

			Assert::IsTrue(s.insert("first_01"));
			Assert::IsTrue(s.insert("second_01"));
			Assert::IsTrue(s.insert("third"));
			Assert::IsTrue(s.size() == 5);

			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert("first"));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s.insert("aaa"));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(s.insert("zzz"));
			Assert::IsTrue(s.size() == 3);

			auto it = s.find("aaa");
			Assert::IsTrue(*it == "aaa");
			++it;
			Assert::IsTrue(*it == "first");

		}

		TEST_METHOD(aurqui7_test02)
		{
			myset<double> s;

			Assert::IsTrue(s.begin() == s.end());
			Assert::IsTrue(s.insert(1.22));
			Assert::IsTrue(s.begin() != s.end());

			s += 1.523;
			Assert::IsTrue(s.size() == 2);

			s += 1.22;
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(s[1.22]);

			s.clear();
			Assert::IsTrue(s.begin() == s.end());
			Assert::IsTrue(!s[1.22]);

			auto it = s.find(1.22);
			Assert::IsTrue(it == s.end());

			s += 1.5;
			auto it2 = s.begin();
			Assert::IsTrue(*it2 == 1.5);
		}

		TEST_METHOD(aurqui7_test03)
		{
			myset<string> s;
			Assert::IsTrue(s.insert("CS 341"));
			Assert::IsTrue(s.insert("CS 342"));

			auto it = s.find("CS 341");
			auto it2 = s.find("CS 342");
			Assert::IsTrue(it != it2);
			Assert::IsTrue(!(it == it2));
			Assert::IsTrue(*it == "CS 341");

			++it;
			Assert::IsTrue(it == it2);
			Assert::IsTrue(*it == "CS 342");

			++it;
			++it2;
			Assert::IsTrue(it == it2);
			Assert::IsTrue(it != s.begin());
			Assert::IsTrue(it2 == s.end());

		}

		TEST_METHOD(aurqui7_test04)
		{
			myset<int> s;

			for (int i = 2000; i >= 0; i--)
			{
				Assert::IsTrue(s.insert(i));
			}
			Assert::IsTrue(s.size() == 2001);
			Assert::IsTrue(!s.insert(1932));

			myset<int> s2;
			Assert::IsTrue(s2.size() == 0);

			s2 = s;
			Assert::IsTrue(s2.size() == 2001);
			Assert::IsTrue(s2[2000]);

			s.clear();
			Assert::IsTrue(s.size() == 0);

			s2 = s;
			Assert::IsTrue(s2.size() == 0);
			Assert::IsTrue(!s2[2000]);
			Assert::IsTrue(s2.insert(2000));
		}

		//TEST_METHOD(aurqui7_test05)
		//{
		//    myset<int> s;

		//    Assert::IsTrue(s.insert(1));
		//    for (int i = 0; i <= 1000; i = i + 4)
		//    {
		//        s += i;
		//    }
		//    Assert::IsTrue(s.size() == 252);
		//    for (int i = 2; i < 1000; i = i * 2)
		//    {
		//        s += i;
		//    }
		//    Assert::IsTrue(s.size() == 253);
		//    Assert::IsTrue(!s[1001]);
		//    Assert::IsTrue(s[1000]);

		//    auto it = s.find(-1);
		//    auto it2 = s.find(0);
		//    Assert::IsTrue(it == s.end());
		//    Assert::IsTrue(*it2 == 0);

		//    auto it3 = s.find(4);
		//    ++it3;
		//    Assert::IsTrue(*it3 == 8);

		//    s.clear();
		//    Assert::IsTrue(*it2 == 0);

		//    Assert::IsTrue(!s[1000]);

		//}

	};
}// Unit tests for mymap data structure.
 //
 // Alex Viznytsya
 // NetId: avizny2
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //








namespace MySetUnitTests {
	TEST_CLASS(avizny2_tests) {
public:
	TEST_METHOD(avizny2_test01) {
		myset<int> s1;

		Assert::IsTrue(s1.size() == 0);
		Assert::IsTrue(s1.empty());

		Assert::IsTrue(s1.insert(1));
		Assert::IsTrue(s1.insert(2));
		Assert::IsTrue(s1.insert(3));

		myset<int> s2 = s1;
		Assert::IsTrue(s2.insert(4));
		Assert::IsTrue(s2.insert(5));
		Assert::IsTrue(s2.insert(6));

		Assert::IsTrue(!(s1[4]));
		Assert::IsTrue(!(s1[5]));
		Assert::IsTrue(!(s1[6]));

	}

	TEST_METHOD(avizny2_test02) {
		myset<int> s1;

		Assert::IsTrue(s1.size() == 0);
		Assert::IsTrue(s1.empty());

		Assert::IsTrue(s1.insert(1));
		Assert::IsTrue(s1.insert(5));
		Assert::IsTrue(s1.insert(2));

		myset<int> s2;
		s2 = s1;
		Assert::IsTrue(s2.insert(4));
		Assert::IsTrue(!(s2.insert(5)));
		Assert::IsTrue(s2.insert(6));

		Assert::IsTrue(!(s1[4]));
		Assert::IsTrue(!(s1[6]));

	}

	TEST_METHOD(avizny2_test03) {
		myset<int> s1;

		Assert::IsTrue(s1.size() == 0);
		Assert::IsTrue(s1.empty());

		Assert::IsTrue(s1.insert(1));
		Assert::IsTrue(s1.insert(2));
		Assert::IsTrue(s1.insert(3));

		int i = 1;
		for (auto d : s1) {
			Assert::IsTrue(d == i++);
		}

		Assert::IsTrue(s1.size() == 3);
		s1.clear();
		Assert::IsTrue(s1.size() == 0);
		Assert::IsTrue(!(s1[1]));
		Assert::IsTrue(!(s1[2]));
		Assert::IsTrue(!(s1[3]));
	}

	TEST_METHOD(avizny2_test04) {
		myset<double> s1;

		Assert::IsTrue(s1.size() == 0);
		Assert::IsTrue(s1.empty());

		Assert::IsTrue(s1.insert(2.1));
		Assert::IsTrue(s1.insert(4.0));
		Assert::IsTrue(s1.insert(0.8));

		myset<double> s2;
		Assert::IsTrue(s2.insert(1.1));
		Assert::IsTrue(s2.insert(5.0));
		Assert::IsTrue(s2.insert(1.8));

		s1 = s2;
		Assert::IsTrue(s1[1.1]);
		Assert::IsTrue(s1[1.8]);
		Assert::IsTrue(s1[5.0]);
	}

	TEST_METHOD(avizny2_test05) {
		myset<int> s1;
		for (int i = 1; i <= 1000; i++) {
			s1 += i;
		}

		for (int i = 0; i < 1000; i++) {
			int r = rand() % 1000 + 1;
			Assert::IsTrue(s1[r]);
		}
	}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Wirtz, Andrew
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_c_tests)
	{
	public:


		TEST_METHOD(awirtz5_test01)
		{

			myset<int> x;

			x.insert(5);
			Assert::IsTrue(x.size() == 1);
			Assert::IsTrue(!x.insert(5));

			x.insert(10);
			Assert::IsTrue(x.size() == 2);
			Assert::IsTrue(!x.insert(10));

			x.insert(15);
			Assert::IsTrue(x.size() == 3);
			Assert::IsTrue(!x.insert(15));

			x.insert(8);
			Assert::IsTrue(x.size() == 4);
			Assert::IsTrue(!x.insert(8));

			x.insert(7);
			Assert::IsTrue(x.size() == 5);
			Assert::IsTrue(!x.insert(7));

		}

		//TEST_METHOD(awirtz5_test02)
		//{
		//    myset<int> x;

		//    for (int i = 0; i<50; i++)
		//        Assert::IsTrue(x.insert(i));

		//    for (int i = 0; i < 50; i++)
		//        Assert::IsTrue(!x.empty());

		//    for (int i = 0; i<50; i++)
		//        //Assert::IsTrue(x[i] == i);

		//    for (int i = 0; i < 50; i++) {
		//        auto iter = x.find(i);
		//        Assert::IsTrue(iter != x.end());
		//        Assert::IsTrue(*iter == i);
		//        Assert::IsTrue(*iter != (i + 1));
		//    }
		//    Assert::IsTrue(!(x.size() == 50));
		//    Assert::IsTrue(x.size() == 50);

		//    int n = 0;
		//    for (auto y : x)
		//    {
		//        Assert::IsTrue(y == n);
		//        ++n;
		//    }
		//}

		TEST_METHOD(awirtz5_test03)
		{

			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("NULL"));
			Assert::IsTrue(s.insert("NADA"));
			Assert::IsTrue(s.insert("NOTHING"));
			Assert::IsTrue(s.insert("ZIP"));
			Assert::IsTrue(s.insert("ZILCH"));
			Assert::IsTrue(s.insert("ZERO"));

			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["ZIP"]);
			Assert::IsTrue(!s["SOMETHING"]);

		}

		//TEST_METHOD(awirtz5_test04)
		//{
		//    myset<int> x;
		//    for (int i = 0; i<50; i++)
		//        x.insert(i);
		//    Assert::IsTrue(x[4] == 4);
		//    Assert::IsTrue(x[10] == 10);
		//    Assert::IsTrue(x[15] == 15);
		//    Assert::IsTrue(x[20] == 20);
		//    Assert::IsTrue(x[21] == 21);
		//    Assert::IsTrue(x[25] == 25);
		//    Assert::IsTrue(x[35] == 35);
		//    Assert::IsTrue(x[38] == 38);
		//    Assert::IsTrue(x[41] == 41);
		//    Assert::IsTrue(x[44] == 44);


		//}

		TEST_METHOD(awirtz5_test05)
		{
			myset<int> V;
			myset<int> iterv;
			for (int i = 0; i<8; i++)
				V.insert(i);
			for (auto e : V)
				iterv.insert(e);

			// Get the beginning iterator so we can test the begin

			Assert::IsTrue(V.begin() == V.find(0));
			Assert::IsTrue(V.end() == V.find(1000));
			Assert::IsTrue(iterv.begin() == iterv.find(0));
			//Assert::IsTrue(iterv[1] == 1);
			//Assert::IsTrue(iterv[2] == 2);
			//Assert::IsTrue(iterv[3] == 3);
			//Assert::IsTrue(iterv[4] == 4);
			//Assert::IsTrue(iterv[5] == 5);
			//Assert::IsTrue(iterv[6] == 6);
			//Assert::IsTrue(iterv[7] == 7);

		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Artur Wojcik
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(awojci5_tests)
	{
	public:

		TEST_METHOD(awojci5_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(awojci5_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(awojci5_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(awojci5_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(awojci5_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(awojci5_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(awojci5_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(awojci5_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}

		TEST_METHOD(awojci5_test09) {
			myset<string> s;
			myset<string> t;

			//test for destructor 
			{
				myset<int> n;
				n.insert(2);

			}
			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("apple1"));
			Assert::IsTrue(s.insert("appleh"));
			Assert::IsTrue(s.insert("apple9"));
			Assert::IsTrue(s.insert("appl"));
			t = s;
			auto iterT = t.begin();
			auto iterS = s.begin();

			Assert::IsTrue(s.size() == t.size());

			Assert::IsTrue(*iterT == *iterS);
			++iterT;
			++iterS;
			Assert::IsTrue(*iterT == *iterS);
			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsFalse(s["apple"]);
			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(s.size() == 1);

		}

		TEST_METHOD(awojci5_test10) {
			myset<double> s;
			for (int i = 0; i < 100; i++) {
				s.insert(i);
			}
			Assert::IsTrue(s.size() == 100);
			Assert::IsFalse(s[100]);
			Assert::IsTrue(s.insert(10.5));
			Assert::IsTrue(s[10.5]);
			auto iter = s.begin();
			for (int i = 0; i <= 10; i++) {
				++iter;
			}
			Assert::IsTrue(*iter == 10.5);
			Assert::IsFalse(iter == s.end());
			auto iter2 = s.begin();
			for (int i = 0; i <101; i++) {
				++iter2;
			}
			Assert::IsTrue(iter2 == s.end());
			Assert::IsTrue(s.insert(200));
			Assert::IsFalse(iter2 == s.end());
			s.insert(10.4);
			Assert::IsTrue(*iter == 10.4);
		}

		TEST_METHOD(awojci5_test11) {
			myset<char> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.begin() == s.end());
			auto iter = s.begin();
			Assert::IsTrue(iter == s.begin());
			for (int i = 0; i < 256; i++) {
				s.insert(i);
			}
			Assert::IsTrue(s['A']);
			Assert::IsTrue(s.size() == 256);
			auto iter2 = s.find('A');
			Assert::IsTrue(*iter2 == 'A');
			for (int i = 0; i < 25; i++) {
				++iter2;
			}
			Assert::IsTrue(*iter2 == 'Z');
			for (int i = 0; i < 7; i++) {
				++iter2;
			}
			Assert::IsTrue(*iter2 == 'a');
			s.clear();
			//Assert::IsFalse(*iter2 == 'a');
			Assert::IsTrue(s.begin() == s.end());
			Assert::IsTrue(s.size() == 0);
		}
		TEST_METHOD(awojci5_test12) {
			myset<char> c;
			myset<int> n;

			for (int i = 0; i < 256; i++) {
				c.insert(i);
				n.insert(i);
				Assert::IsTrue(c.size() == i + 1);
				Assert::IsTrue(n.size() == i + 1);
			}

			auto iterC = c.find('A');
			auto iterN = n.begin();

			for (int i = 0; i < 65; i++) {
				++iterN;
			}
			int ch = *iterC;
			char letter = *iterN;
			Assert::IsTrue(*iterN == ch);
			Assert::IsTrue(letter == (char)ch);

			Assert::IsTrue(c.size() == 256);
			Assert::IsTrue(n.size() == 256);

			c.clear();
			Assert::IsTrue(c.size() != n.size());
			n.clear();
			Assert::IsTrue(n.empty());
			Assert::IsTrue(c.size() == n.size());
			auto itN = n.begin();
			auto itC = c.begin();
			Assert::IsTrue(itC == c.end());
			Assert::IsTrue(itN == n.end());

		}

		TEST_METHOD(awojci5_test13) {
			myset<char> c;
			int j = 0;
			bool insert = true;
			for (int i = 0; i < 1024; i++) {
				//c.insert(j);
				if (insert) {
					Assert::IsTrue(c.insert(j));
				}
				else {
					Assert::IsFalse(c.insert(j));
				}
				j++;
				if (j % 256 == 0) {
					j = 0;
					insert = false;
				}
			}
			Assert::IsTrue(c.size() == 256);
			Assert::IsFalse(c.insert('K'));
			auto iter = c.find('K');

			Assert::IsTrue(*iter == 'K');
			Assert::IsTrue(iter != c.end());
			int i = 0;

			while (iter != c.end()) {
				Assert::IsTrue(*iter == 'K' + i);
				i++;
				++iter;
			}
			Assert::IsTrue(iter == c.end());
			auto it = c.find(' ');
			auto iter1 = c.begin();
			while (iter1 != c.end()) {
				if (*iter1 == *it) {
					break;
				}
				++iter1;
			}

			Assert::IsTrue(*iter1 == ' ');

			while (iter1 != c.end()) {
				++it;
				++iter1;
			}

			Assert::IsTrue(iter1 == it);
			Assert::IsTrue(iter1 == c.end());
			Assert::IsTrue(it == c.end());

		}



	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Bennett Maciorowski
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(Bmacio2_tests)
	{
	public:
		//checks that the clear method works
		//TEST_METHOD(Bmacio2_test01)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(!s.insert(1));
		//    Assert::IsTrue(s.insert(12));
		//    Assert::IsTrue(s.insert(33));
		//    s.clear();// clears list
		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.size() == 0);
		//    auto iter = s.find(1);
		//    Assert::IsTrue(s.insert(1));
		//    auto iter2 = s.find(1);
		//    Assert::IsTrue(iter != iter2); //checks that the find method works



		//}

		//TEST_METHOD(Bmacio2_test02)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(12));

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());
		//    //checks that iterators to beginning and ending work
		//    Assert::IsTrue(s.end() == s.begin());
		//    Assert::IsTrue(s.insert(13));
		//    Assert::IsTrue(s.insert(14));
		//    Assert::IsTrue(s.end() != s.begin());
		//    Assert::IsTrue(s.find(12) == s.begin());

		//}

		//TEST_METHOD(bmacio2_test03)
		//{
		//    myset<string>  s;
		//    myset<int> s2;

		//    Assert::IsTrue(s.insert("Unit"));
		//    Assert::IsTrue(s.insert("Unit Testing is tedious"));
		//    Assert::IsTrue(s2.insert(1));
		//    s += " zom ";//test this function
		//                 //auto zoop=  s.find(" zom ")
		//    Assert::IsTrue(s[" zom "]);


		//    s.~myset();
		//    //test destructor
		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.insert("I don't think this'll work cause I used the destructor"));



		//}

		//TEST_METHOD(Bmacio2_test04)
		//{
		//    myset<string> c;
		//    myset<string>  s;
		//    myset<int> sizes;
		//    c.insert("c");
		//    //really not much of a test but testing that nested function calls work
		//    Assert::IsTrue(sizes.insert(c.size()));
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert("apple"));
		//    Assert::IsTrue(!s.insert("apple"));  // should not insert again
		//    Assert::IsTrue(s.insert("apple2"));
		//    Assert::IsTrue(s.size() == 2);


		//    //testing deep copy and ' = ' operator


		//    Assert::IsTrue(s["apple"]);
		//    Assert::IsTrue(!s["pear"]);  // should not find
		//    s = c;
		//    Assert::IsTrue(!s["apple"]);
		//    Assert::IsTrue(!s["c"]);

		//}

		//TEST_METHOD(bmacio2_test05)
		//{
		//    myset<int>  s;
		//    myset<string> strin;

		//    for (int x = 0; x < 20; x++) {
		//        s += x;
		//        Assert::IsTrue(strin.insert(to_string(x)));
		//        Assert::IsTrue(s.find(x) == s.end()); //since increasing number it should be put to the end
		//    }

		//    Assert::IsTrue(s.empty());



		//}




	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Boris Pisabaj
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(bpisab3_tests)
	{
	public:
		//tests that MySet object was created correctly
		//the constructor
		TEST_METHOD(bpisab3_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		//test if MySet insert(int n) works correctly
		TEST_METHOD(bpisab3_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		//tests if MySet insert and S[] operator work correctly
		TEST_METHOD(bpisab3_test_03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		//test if insert and s[] return correctly
		TEST_METHOD(bpisab3_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		//tests if it can insert mutliple items and use
		//operator to insert (Object+=), and insert detects it
		//size work correctly?
		//check if it isn't empty
		//finds values that do exist and doesn't find those that
		//don't exist
		TEST_METHOD(bpisab3_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		//tests inserys, correct size,
		//if find properly returns iterator
		//if can access value that iterator holds
		//if nothing found, return end() iterator
		TEST_METHOD(bpisab3_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		//test 5 inserts, correct size and not empty
		//tests if MySet object is ordered by finding smallest
		//element then iterating through set
		TEST_METHOD(bpisab3_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		//inserts elements 1000 through 100 inclusive (901 elements)
		//checks size
		//checks if correct values stored in MySet
		//checks if for each method works
		TEST_METHOD(bpisab3_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}


		//checks if insert works
		//tests if begin() works properly
		//sees if copy constructor properly working
		TEST_METHOD(bpisab3_test09) {
			myset<int>  s;

			Assert::IsTrue(s.insert(34));
			Assert::IsTrue(s.insert(78));
			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(23));

			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s.empty());

			myset<int> ourCopy = myset<int>(s);

			Assert::IsTrue(ourCopy.size() == 4);
			Assert::IsTrue(!ourCopy.empty());

			auto iter = ourCopy.begin();
			Assert::IsTrue(iter != ourCopy.end());
			Assert::IsTrue(*iter == 4);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 23);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 34);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 78);



		}
		TEST_METHOD(bpisab3_test10) {
			myset<int> s;
			Assert::IsTrue(s.insert(50));
			s += 23;
			Assert::IsTrue(s.insert(109));
			Assert::IsTrue(!s.insert(23));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			myset<int> c = myset<int>(s);
			Assert::IsTrue(c.insert(13676));
			Assert::IsTrue(c.size() == s.size() + 1);
			Assert::IsTrue(!s.empty());

			s.clear();
			c.clear();

			Assert::IsTrue(s.empty());
			Assert::IsTrue(c.empty());



		}
		TEST_METHOD(bpisab3_test11) {
			myset<int> s;
			Assert::IsTrue(s.insert(57));
			Assert::IsTrue(s.insert(89));
			Assert::IsTrue(s.insert(14));
			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());
			auto iter = s.begin();
			Assert::IsTrue(*iter == 14);

			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(80));
			iter = s.begin();
			Assert::IsTrue(*iter == 80);

		}

		//tests if operator= works properly
		//and makes a deep copy
		//checking if elements of lhs are deleted
		//TEST_METHOD(bpisab3_test12) {
		//    myset<int> s;
		//    int start = 50;
		//    int end = 100;
		//    while (start < end) {
		//        Assert::IsTrue(s.insert(start));
		//    }
		//    Assert::IsTrue(s.size() == 50);
		//    Assert::IsTrue(!s.empty());
		//    myset<int> deepCopy;

		//    Assert::IsTrue(deepCopy.insert(103));
		//    Assert::IsTrue(deepCopy.insert(102));
		//    deepCopy += 101;
		//    Assert::IsTrue(deepCopy.size() == 3);
		//    Assert::IsTrue(!deepCopy.empty());

		//    auto iter = deepCopy.begin();
		//    Assert::IsTrue(iter != deepCopy.end());
		//    Assert::IsTrue(*iter == 101);

		//    deepCopy = s;
		//    auto iter2 = deepCopy.begin();
		//    Assert::IsTrue(iter != deepCopy.begin());
		//    Assert::IsTrue(*iter2 == 50);
		//}

		void aFunc(myset<int> s, myset<int> c) {
			s = c;
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 3);
		}
		//tests if deconstructor works and
		//deletes all elements in list
		TEST_METHOD(bpisab3_test13) {
			myset<int> first;
			first += 5;
			Assert::IsTrue(first.insert(80));
			first += 20;
			first += 320;
			Assert::IsTrue(!first.insert(5));
			Assert::IsTrue(first.size() == 4);
			Assert::IsTrue(!first.empty());
			myset<int> second;
			int i = 0;
			while (i < 10) {
				i++; // infinite loop
				myset<int> third;
				Assert::IsTrue(third.empty());

				Assert::IsTrue(third.insert(i));
				Assert::IsTrue(third.insert(20));
				Assert::IsTrue(third.insert(50));
				Assert::IsTrue(third.size() == 3);

				if (i == 5) {
					aFunc(second, third);
					Assert::IsTrue(second.empty());
				}
			}

		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Carlos Aceves
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(caceve2_tests)
	{
	public:

		TEST_METHOD(caceves_test1)
		{
			myset<string> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("banana"));
			Assert::IsTrue(s.insert("monkey"));

			Assert::IsFalse(s.size() == 4);
			Assert::IsTrue(s.insert("rabbit"));
			Assert::IsTrue(s.size() == 4);

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(!s["pear"]);

		}

		TEST_METHOD(caceves_test2)
		{
			myset<int> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(5));

			auto iter = s.find(5);
			Assert::IsTrue(iter != s.end());
			Assert::IsFalse(*iter == 4);
			Assert::IsTrue(*iter == 5);

		}

		TEST_METHOD(caceves_test3)
		{
			myset<int> s;
			myset<int> q;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(22));
			Assert::IsTrue(q.insert(22));
			Assert::IsTrue(q.size() != s.size());
			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsFalse(q.size() == s.size());
			Assert::IsTrue(q[22]);
			Assert::IsFalse(s[22]);



		}

		TEST_METHOD(caceves_test4)
		{
			myset<int> s;
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(11));
			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(13));

			myset<int> p = s;
			Assert::IsTrue(!p.empty());
			Assert::IsTrue(p.size() == 4);
			Assert::IsTrue(p.insert(14));

			auto iter = p.find(11);
			++iter;
			Assert::IsTrue(iter != p.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != p.end());
			Assert::IsTrue(*iter == 13);
			++iter;
			Assert::IsTrue(iter != p.end());
			Assert::IsTrue(*iter == 14);



		}

		TEST_METHOD(caceves_test5)
		{
			myset<int> s;
			myset<int> q;
			Assert::IsTrue(s.insert(32));
			Assert::IsTrue(s.insert(432));
			Assert::IsTrue(s.insert(143));
			Assert::IsTrue(s.insert(43));

			Assert::IsTrue(q.insert(23));
			Assert::IsTrue(q.insert(432));
			Assert::IsTrue(q.insert(341));
			Assert::IsTrue(q.insert(34));

			auto iter = s.find(143);
			Assert::IsTrue(iter != s.end());
			auto iter2 = q.find(341);
			Assert::IsTrue(iter != q.end());

			Assert::IsTrue(*iter != *iter2);


		}

	};


}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Chandler Bachman
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









int alloced = 0;
int dealloced = 0;

class debugMem {
public:
	int value;

	debugMem() : value(0) {
		alloced++;
	}

	debugMem(int i) : value(i) {
		alloced++;
	}

	debugMem(const debugMem& other)
		: value(other.value)
	{
		alloced++;
	}

	~debugMem() {
		dealloced++;
	}

	inline bool operator< (const debugMem& rhs) const { return this->value < rhs.value; }
	inline bool operator> (const debugMem& rhs) const { return rhs < *this; }
	inline bool operator<=(const debugMem& rhs) const { return !(*this > rhs); }
	inline bool operator>=(const debugMem& rhs) const { return !(*this < rhs); }
};

namespace MyMapUnitTests {
	TEST_CLASS(cbachm2_tests) {
public:

	TEST_METHOD(cbachm2_copy) {
		alloced = 0;
		dealloced = 0;

		{
			myset<debugMem> s;

			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(1));
			Assert::IsFalse(s.insert(2));

			myset<debugMem> s2 = s;

			s.insert(10);
			s2.insert(12);

			Assert::IsTrue(s[10]);
			Assert::IsTrue(s[3]);
			Assert::IsFalse(s[12]);

			Assert::IsTrue(s2[3]);
			Assert::IsTrue(s2[12]);
			Assert::IsFalse(s2[10]);
		}

		Assert::AreEqual(alloced, dealloced);
	}

	TEST_METHOD(cbachm2_assignment) {
		alloced = 0;
		dealloced = 0;

		{
			myset<debugMem> s;
			myset<debugMem> s2;

			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(1));
			Assert::IsFalse(s.insert(2));

			Assert::IsTrue(s2.insert(11));
			Assert::IsTrue(s2.insert(12));
			Assert::IsTrue(s2.insert(13));
			Assert::IsTrue(s2.insert(14));
			Assert::IsTrue(s2.insert(15));

			s2 = s;

			s2.insert(21);
			s.insert(22);

			Assert::IsTrue(s[4]);
			Assert::IsFalse(s[11]);
			Assert::IsTrue(s[22]);
			Assert::IsFalse(s[21]);

			Assert::IsTrue(s2[4]);
			Assert::IsFalse(s2[11]);
			Assert::IsTrue(s2[21]);
			Assert::IsFalse(s2[22]);
		}

		Assert::AreEqual(alloced, dealloced);
	}

	TEST_METHOD(cbachm2_ordered) {
		alloced = 0;
		dealloced = 0;
		{
			myset<int> s;

			vector<int> list;
			for (int i = 0; i < 100; i++) {
				list.push_back(i);
			}

			random_shuffle(list.begin(), list.end());

			for (auto i : list) {
				Assert::IsTrue(s.insert(i));
			}

			int current = 0;
			for (auto i : s) {
				Assert::IsTrue(i == current++);
			}
		}

		Assert::AreEqual(alloced, dealloced);
	}

	TEST_METHOD(cbachm2_string) {
		myset<string> s;

		Assert::IsTrue(s.insert("Hello"));
		Assert::IsTrue(s.insert("World"));
		Assert::IsTrue(s.insert("Come"));
		Assert::IsTrue(s.insert("On"));
		Assert::IsTrue(s.insert("Down"));

		Assert::IsTrue(s["Hello"]);
		Assert::IsTrue(s["World"]);
		Assert::IsTrue(s["Come"]);
		Assert::IsTrue(s["On"]);
		Assert::IsTrue(s["Down"]);

		s.clear();

		Assert::IsFalse(s["Hello"]);
		Assert::IsFalse(s["World"]);
	}

	TEST_METHOD(cbachm2_single) {
		myset<string> s;

		Assert::IsFalse(s["Hello"]);

		Assert::IsTrue(s.insert("Hello"));
		Assert::IsFalse(s.insert("Hello"));

		Assert::IsTrue(s["Hello"]);

		s.clear();

		Assert::IsFalse(s["Hello"]);

		s += "Hello";

		Assert::IsTrue(s["Hello"]);

		Assert::IsFalse(s.find("Hello") == s.end());
		Assert::IsTrue(s.find("Hello") == s.begin());
	}

	/*
	TEST_METHOD(your_netid_test01) {
	myset<int> s;

	Assert::IsTrue(s.size() == 0);
	Assert::IsTrue(s.empty());
	} // namespace MyMapUnitTests

	TEST_METHOD(your_netid_test02) {
	myset<int> s;

	Assert::IsTrue(s.size() == 0);
	Assert::IsTrue(s.empty());

	Assert::IsTrue(s.insert(1));
	Assert::IsTrue(s.insert(2));
	Assert::IsTrue(s.insert(3));
	Assert::IsTrue(s.insert(4));
	Assert::IsTrue(s.insert(5));
	Assert::IsFalse(s.insert(3));
	Assert::IsTrue(s.insert(10));
	Assert::IsTrue(s.insert(11));
	Assert::IsTrue(s.insert(12));
	Assert::IsTrue(s.insert(7));
	Assert::IsFalse(s.insert(2));
	Assert::IsTrue(s.insert(45));

	Assert::IsTrue(s.size() == 10);
	Assert::IsTrue(!s.empty());
	}


	TEST_METHOD(your_netid_test03) {
	myset<string> s;

	Assert::IsTrue(s.size() == 0);
	Assert::IsTrue(s.empty());

	Assert::IsTrue(s.insert("apple"));

	Assert::IsTrue(s.size() == 1);
	Assert::IsTrue(!s.empty());

	Assert::IsTrue(s["apple"]);
	}


	TEST_METHOD(your_netid_test04) {
	myset<string> s;

	Assert::IsTrue(s.size() == 0);
	Assert::IsTrue(s.empty());

	Assert::IsTrue(s.insert("apple"));
	Assert::IsTrue(!s.insert("apple")); // should not insert again

	Assert::IsTrue(s.size() == 1);
	Assert::IsTrue(!s.empty());

	Assert::IsTrue(s["apple"]);
	Assert::IsTrue(!s["pear"]); // should not find
	}


	TEST_METHOD(your_netid_test05) {
	myset<int> s;

	Assert::IsTrue(s.size() == 0);
	Assert::IsTrue(s.empty());

	Assert::IsTrue(s.insert(12));
	Assert::IsTrue(s.insert(71));
	s += 20;                       // another way to insert:
	Assert::IsTrue(!s.insert(20)); // already inserted:

	Assert::IsTrue(s.size() == 3);
	Assert::IsTrue(!s.empty());

	Assert::IsTrue(s[71]);
	Assert::IsTrue(s[12]);
	Assert::IsTrue(s[20]);
	Assert::IsTrue(!s[11]);
	Assert::IsTrue(!s[999]);
	;
	}

	TEST_METHOD(your_netid_test06) {
	myset<int> s;

	Assert::IsTrue(s.insert(10));
	Assert::IsTrue(s.insert(20));
	Assert::IsTrue(s.insert(30));

	Assert::IsTrue(s.size() == 3);
	Assert::IsTrue(!s.empty());

	auto iter = s.find(20);
	Assert::IsTrue(iter != s.end());
	Assert::IsTrue(*iter == 20);

	auto iter2 = s.find(40);
	Assert::IsTrue(iter2 == s.end());
	}

	TEST_METHOD(your_netid_test07) {
	myset<int> s;

	Assert::IsTrue(s.insert(12));
	Assert::IsTrue(s.insert(71));
	Assert::IsTrue(s.insert(20));
	Assert::IsTrue(s.insert(2));
	Assert::IsTrue(s.insert(99));

	Assert::IsTrue(s.size() == 5);
	Assert::IsTrue(!s.empty());

	auto iter = s.find(2);

	Assert::IsTrue(iter != s.end());
	Assert::IsTrue(*iter == 2);
	++iter;
	Assert::IsTrue(iter != s.end());
	Assert::IsTrue(*iter == 12);
	++iter;
	Assert::IsTrue(iter != s.end());
	Assert::IsTrue(*iter == 20);
	++iter;
	Assert::IsTrue(iter != s.end());
	Assert::IsTrue(*iter == 71);
	++iter;
	Assert::IsTrue(iter != s.end());
	Assert::IsTrue(*iter == 99);
	++iter;
	Assert::IsTrue(iter == s.end());

	auto iter2 = s.find(1);
	Assert::IsTrue(iter2 == s.end());
	}

	TEST_METHOD(your_netid_test08) {
	myset<int> s;

	for (int i = 1000; i >= 100; --i) {
	Assert::IsTrue(s.insert(i));
	}

	Assert::IsTrue(s.size() == 901);
	Assert::IsTrue(!s.empty());

	int j = 100;
	auto iter = s.begin();
	while (iter != s.end()) {
	Assert::IsTrue(*iter == j);
	++iter;
	++j;
	}

	int k = 100;
	for (auto x : s) {
	Assert::IsTrue(x == k);
	++k;
	}
	}
	*/
	}
	;
}
/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// YOUR NAME
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(your_cbedu2_tests)
	{
	public:

		TEST_METHOD(your_cbedu2_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(your_cbedu2_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(your_cbedu2_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(your_cbedu2_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(your_cbedu2_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(your_cbedu2_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_cbedu2_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_cbedu2_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}

		//test if myset can contain more than 4 elements
		TEST_METHOD(your_cbedu2_test09)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);


			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));

			//reached 4 elements
			Assert::IsTrue(s.size() == 4);

			//resize to contain +4
			Assert::IsTrue(s.insert(5));
			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(s[1]);
			Assert::IsTrue(s[2]);
			Assert::IsTrue(s[3]);
			Assert::IsTrue(s[4]);
			Assert::IsTrue(s[5]);

		}

		//test for myset<T>::clear()
		TEST_METHOD(your_cbedu2_test10)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));

			Assert::IsTrue(s[1]);
			Assert::IsTrue(s[2]);
			Assert::IsTrue(s[3]);
			Assert::IsTrue(s[4]);

			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

		}

		//test copy
		TEST_METHOD(your_cbedu2_test11)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));

			Assert::IsTrue(s[1]);
			Assert::IsTrue(s[2]);
			Assert::IsTrue(s[3]);
			Assert::IsTrue(s[4]);

			myset<int> m(s);
			Assert::IsTrue(m.begin() != s.begin());
			Assert::IsTrue(s.size() == m.size());
			Assert::IsTrue(s[1]);
			Assert::IsTrue(s[2]);
			Assert::IsTrue(s[3]);
			Assert::IsTrue(s[4]);
		}

		//Test items are entered in order
		TEST_METHOD(your_cbedu2_test12)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(8));
			Assert::IsTrue(s.insert(6));
			Assert::IsTrue(s.insert(-999));

			Assert::IsTrue(s.size() == 4);
			auto iter = s.begin();

			Assert::IsTrue(*iter == -999);
			++iter;

			Assert::IsTrue(*iter == 4);
			++iter;

			Assert::IsTrue(*iter == 6);
			++iter;

			Assert::IsTrue(*iter == 8);
			++iter;

			Assert::IsTrue(iter == s.end());

		}

		//test myset::= operator
		TEST_METHOD(your_cbedu2_test13)
		{
			myset<int> s;
			myset<int> m;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert(-1));
			Assert::IsTrue(s.insert(-2));
			Assert::IsTrue(s.insert(-3));
			Assert::IsTrue(s.insert(-4));

			Assert::IsTrue(s[-1]);
			Assert::IsTrue(s[-2]);
			Assert::IsTrue(s[-3]);
			Assert::IsTrue(s[-4]);

			Assert::IsTrue(m.empty());
			Assert::IsTrue(m.size() == 0);

			Assert::IsTrue(m.insert(1));
			Assert::IsTrue(m.insert(2));
			Assert::IsTrue(m.insert(3));
			Assert::IsTrue(m.insert(4));

			Assert::IsTrue(m[1]);
			Assert::IsTrue(m[2]);
			Assert::IsTrue(m[3]);
			Assert::IsTrue(m[4]);

			s = m;

			Assert::IsTrue(m.begin() != s.begin());
			Assert::IsTrue(s.size() == m.size());
			Assert::IsTrue(s[1]);
			Assert::IsTrue(s[2]);
			Assert::IsTrue(s[3]);
			Assert::IsTrue(s[4]);

			Assert::IsTrue(!s[-1]);
			Assert::IsTrue(!s[-2]);
			Assert::IsTrue(!s[-3]);
			Assert::IsTrue(!s[-4]);
		}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Corey Habel
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(chabel2_tests)
	{
	public:

		TEST_METHOD(chabel2_test01) {
			// Check that set is in correct order
			myset<int> s;

			for (int i = 0; i < 100; i += 2)
			{
				Assert::IsTrue(s.insert(i));
			}

			for (int i = 0; i < 100; i += 3)
			{
				s.insert(i);
			}

			auto itr = s.begin();

			while (itr != s.end()) {
				int prev = *itr;
				++itr;

				if (itr != s.end()) {
					Assert::IsTrue(prev < *itr);
				}
			}
		}

		//TEST_METHOD(chabel2_test02) {
		//    //Test copying of a set to ensure equality
		//    myset<int> s1;

		//    for (int i = 30; i < 100; i += 2)
		//    {
		//        Assert::IsTrue(s1.insert(i));
		//    }

		//    myset<int> s2;

		//    s2 = s1;

		//    Assert::IsTrue(s1.size() == s2.size());

		//    Assert::IsTrue(s1.find(30) == s2.find(30));
		//    Assert::IsTrue(s1.find(42) == s2.find(42));
		//    Assert::IsTrue(s1.find(50) == s2.find(50));
		//    Assert::IsTrue(s1.find(80) == s2.find(80));
		//    Assert::IsTrue(s1.find(98) == s2.find(98));

		//    Assert::IsTrue(s1.find(10) == s2.find(10));
		//    Assert::IsTrue(s1.find(28) == s2.find(28));
		//    Assert::IsTrue(s1.find(87) == s2.find(87));
		//    Assert::IsTrue(s1.find(110) == s2.find(110));

		//    Assert::IsTrue(s1.begin() == s2.begin());


		//}

		TEST_METHOD(chabel2_test03) {
			// Test begin/end functions
			myset<string> s1;

			Assert::IsTrue(s1.insert("Mercury"));
			Assert::IsTrue(s1.insert("Venus"));
			Assert::IsTrue(s1.insert("Earth"));
			Assert::IsTrue(s1.insert("Mars"));
			Assert::IsTrue(s1.insert("Jupiter"));

			Assert::IsTrue(s1.begin() != s1.end());

			Assert::IsTrue(*(s1.begin()) == "Earth");
			//Assert::IsTrue(*(s1.end()) != "Venus");


			Assert::IsTrue(*(++s1.begin()) == "Jupiter");
			Assert::IsTrue(*(++(++s1.begin())) == "Mars");
		}

		TEST_METHOD(chabel2_test04) {
			// Test destructor

			// Static variables for keeping track of constructs and destructs
			static int constructs = 0;
			static int destructs = 0;

			// Object for testing destructor. Simply an int wrapper that increments "constructs" 
			// counter on every constructor call and increments "desctructs" with destructor call,
			// then compares the two after populating and clearing a set
			class TestObj
			{
			private:
				int value;

			public:
				TestObj() {
					value = -1;
					constructs++;
				}

				TestObj(int i) {
					value = i;
					constructs++;
				}

				TestObj(const TestObj& other)
				{
					value = other.value;
					constructs++;
				}

				~TestObj() {
					destructs++;
				}

				bool operator==(const TestObj& rhs) { return rhs.value == value; }
				bool operator<(const TestObj& other) const
				{
					return this->value < other.value;
				}
				//bool operator< (const TestObj& rhs) { return rhs.value < value; }
				bool operator> (const TestObj& rhs) { return rhs.value > value; }
			};

			// Create and fill a set in an isolated scope. The set will be 
			// destroyed at the end, and then the counts can be compared.
			if (true) {
				myset<TestObj> s;

				for (unsigned int i = 0; i < 1000; i++) {
					Assert::IsTrue(s.insert(TestObj(i)));
				}
			}

			//Logger::WriteMessage("Constructs");
			//Logger::WriteMessage(to_string(constructs).c_str());
			//Logger::WriteMessage("Destructs");
			//Logger::WriteMessage(to_string(destructs).c_str());

			Assert::IsTrue(constructs == destructs);

		}

		TEST_METHOD(chabel2_test05) {
			// Test clear function of myset
			myset<int> s;
			for (int i = 0; i < 500; i++) {
				Assert::IsTrue(s.insert(i));
			}

			s.clear();

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.begin() == s.end());

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s[1]);

			Assert::IsFalse(s.empty());
			Assert::IsFalse(s.begin() == s.end());

			for (int i = 2; i < 500; i++) {
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() > 4);
		}


	};
}/*unittest1.cpp*/





 /*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //





namespace MyMapUnitTests
{

	TEST_CLASS(clazca2_tests)
	{
	public:

		TEST_METHOD(clazca2_test01)
		{
			myset<char>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert('g'));
			Assert::IsTrue(s.insert('b'));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert('l'));
			Assert::IsTrue(s.size() == 3);

			Assert::IsTrue(s['l']);
			Assert::IsTrue(!s['h']);  // should not find

		}

		TEST_METHOD(clazca2_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(6));
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(10));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(5));
			Assert::IsTrue(s.size() == 4);

			Assert::IsTrue(s[5]);
			Assert::IsTrue(!s[1]);  // should not find
		}

		TEST_METHOD(clazca2_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("bees"));
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert("deer"));

			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());

			auto iter = s.find("deer");
			Assert::IsTrue(iter != s.end());

			Assert::IsTrue(!s["whale"]);
			Assert::IsTrue(!s["antelope"]);  // should not find
		}

		TEST_METHOD(clazca2_test04)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(60));
			Assert::IsTrue(!s.empty());

			//insert to test expand()
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.size() == 2);

			auto iter = s.find(30);
			Assert::IsTrue(iter != s.end());

			auto iter2 = s.find(60);
			Assert::IsTrue(iter != s.end());

			Assert::IsTrue(!s[10]);
			Assert::IsTrue(!s[1]);  // should not find
		}

		TEST_METHOD(clazca2_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(50));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(60));
			Assert::IsTrue(s.insert(70));
			Assert::IsTrue(s.insert(75));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(70);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 70);

			auto iter2 = s.find(3);
			Assert::IsTrue(iter2 == s.end());
		}

	};
}
//
// Unit tests for mymap data structure.
//
// Chance Potter
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(cpotte4_tests)
	{
	public:

		TEST_METHOD(cpotte4_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(cpotte4_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(cpotte4_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(cpotte4_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(cpotte4_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(cpotte4_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(cpotte4_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(cpotte4_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}


		// My Created MEthods... Need min of 5
		TEST_METHOD(cpotte4__test09)
		{
			myset<int> s;

			// Start basic. Insert two elements
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.size() == 1);

			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.size() == 2);

			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(cpotte4_test10)
		{
			myset<int> s;

			// Make sure begin is pointing to the right element
			Assert::IsTrue(s.insert(5));
			auto iter = s.begin();
			Assert::IsTrue(*iter == 5);
		}

		TEST_METHOD(cpotte4_test11)
		{
			myset<int> s;

			// Make sure your grabbing the right locations and that
			// There is only two items. when you increment
			// you should be at the end
			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 1);
			auto iter = s.begin();
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter == s.end());
		}

		TEST_METHOD(cpotte4_test12)
		{
			myset<int> s;

			// Make sure you cant insert items twice
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(!s.insert(20));  // already inserted:
			Assert::IsTrue(s.size() == 1);
		}

		//TEST_METHOD(cpotte4_test13)
		//{
		//    myset<int> s;

		//    // Make sure you can insert items and size changes with
		//    // Then delete is
		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(s.size() == 1);

		//    Assert::IsTrue(s.insert(2));
		//    Assert::IsTrue(s.size() == 2);

		//    Assert::IsTrue(s.insert(3));
		//    Assert::IsTrue(s.size() == 3);

		//    auto iter = s.end();
		//    Assert::IsTrue(*iter == 3);

		//    delete[] & s;
		//}

		TEST_METHOD(cpotte4_test14) {
			// The set should be able to take any value
			// Because of this we need to test for a double
			myset<double>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(1.23));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[1.23]);
		}

		TEST_METHOD(cpotte4_test15) {
			// Check a simple find
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(1));

			auto iter = s.find(1);

			Assert::IsTrue(*iter == 1);

		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(cthiem2_tests)
	{
	public:

		//   TEST_METHOD(cthiem2_test01)
		//   {
		//     myset<int>  s;

		//     Assert::IsTrue(s.size() == 0);
		//     Assert::IsTrue(s.empty());
		//   }

		//   TEST_METHOD(cthiem2_test02)
		//   {
		//     myset<int>  s;

		//     Assert::IsTrue(s.size() == 0);
		//     Assert::IsTrue(s.empty());

		//     Assert::IsTrue(s.insert(12));

		//     Assert::IsTrue(s.size() == 1);
		//     Assert::IsTrue(!s.empty());
		//   }

		//   TEST_METHOD(cthiem2_test03)
		//   {
		//     myset<string>  s;

		//     Assert::IsTrue(s.size() == 0);
		//     Assert::IsTrue(s.empty());

		//     Assert::IsTrue(s.insert("apple"));

		//     Assert::IsTrue(s.size() == 1);
		//     Assert::IsTrue(!s.empty());

		//     Assert::IsTrue(s["apple"]);
		//   }
		//	
		//   TEST_METHOD(cthiem2_test04)
		//   {
		//     myset<string>  s;

		//     Assert::IsTrue(s.size() == 0);
		//     Assert::IsTrue(s.empty());

		//     Assert::IsTrue(s.insert("apple"));
		//     Assert::IsTrue(!s.insert("apple"));  // should not insert again

		//     Assert::IsTrue(s.size() == 1);
		//     Assert::IsTrue(!s.empty());

		//     Assert::IsTrue(s["apple"]);
		//     Assert::IsTrue(!s["pear"]);  // should not find
		//   }

		//TEST_METHOD(cthiem2_test05)
		//{
		//     myset<int>  s;

		//     Assert::IsTrue(s.size() == 0);
		//     Assert::IsTrue(s.empty());

		//     Assert::IsTrue(s.insert(12));
		//     Assert::IsTrue(s.insert(71));
		//     s += 20;  // another way to insert:
		//     Assert::IsTrue(!s.insert(20));  // already inserted:

		//     Assert::IsTrue(s.size() == 3);
		//     Assert::IsTrue(!s.empty());

		//     Assert::IsTrue(s[71]);
		//     Assert::IsTrue(s[12]);
		//     Assert::IsTrue(s[20]);
		//     Assert::IsTrue(!s[11]);
		//     Assert::IsTrue(!s[999]);;
		//   }

		//   TEST_METHOD(cthiem2_test06)
		//   {
		//     myset<int>  s;

		//     Assert::IsTrue(s.insert(10));
		//     Assert::IsTrue(s.insert(20));
		//     Assert::IsTrue(s.insert(30));

		//     Assert::IsTrue(s.size() == 3);
		//     Assert::IsTrue(!s.empty());

		//     auto iter = s.find(20);
		//     Assert::IsTrue(iter != s.end());
		//     Assert::IsTrue(*iter == 20);

		//     auto iter2 = s.find(40);
		//     Assert::IsTrue(iter2 == s.end());
		//   }

		//   TEST_METHOD(cthiem2_test07)
		//   {
		//     myset<int>  s;

		//     Assert::IsTrue(s.insert(12));
		//     Assert::IsTrue(s.insert(71));
		//     Assert::IsTrue(s.insert(20));
		//     Assert::IsTrue(s.insert(2));
		//     Assert::IsTrue(s.insert(99));

		//     Assert::IsTrue(s.size() == 5);
		//     Assert::IsTrue(!s.empty());

		//     auto iter = s.find(2);

		//     Assert::IsTrue(iter != s.end());
		//     Assert::IsTrue(*iter == 2);
		//     ++iter;
		//     Assert::IsTrue(iter != s.end());
		//     Assert::IsTrue(*iter == 12);
		//     ++iter;
		//     Assert::IsTrue(iter != s.end());
		//     Assert::IsTrue(*iter == 20);
		//     ++iter;
		//     Assert::IsTrue(iter != s.end());
		//     Assert::IsTrue(*iter == 71);
		//     ++iter;
		//     Assert::IsTrue(iter != s.end());
		//     Assert::IsTrue(*iter == 99);
		//     ++iter;
		//     Assert::IsTrue(iter == s.end());

		//     auto iter2 = s.find(1);
		//     Assert::IsTrue(iter2 == s.end());
		//   }

		//   TEST_METHOD(cthiem2_test08)
		//   {
		//     myset<int>  s;

		//     for (int i = 1000; i >= 100; --i)
		//     {
		//       Assert::IsTrue(s.insert(i));
		//     }

		//     Assert::IsTrue(s.size() == 901);
		//     Assert::IsTrue(!s.empty());

		//     int j = 100;
		//     auto iter = s.begin();
		//     while (iter != s.end())
		//     {
		//       Assert::IsTrue(*iter == j);
		//       ++iter;
		//       ++j;
		//     }

		//     int k = 100;
		//     for (auto x : s)
		//     {
		//       Assert::IsTrue(x == k);
		//       ++k;
		//     }
		//   }

		//TEST_METHOD(cthiem2_test09)
		//{
		//    myset<int> s;
		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.insert(7));
		//    Assert::IsTrue(s.insert(12));
		//    Assert::IsTrue(!s.empty());
		//    auto iter = s.begin();
		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(*iter == 7);
		//    Assert::IsTrue(s[7]);
		//    Assert::IsTrue(s[12]);
		//}

		TEST_METHOD(cthiem2_test10)
		{
			myset<int> s;
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(7));
			Assert::IsTrue(s.insert(14));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());
			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(!s[7]);
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(!s[7]);
			Assert::IsTrue(!s[14]);
		}

		TEST_METHOD(cthiem2_test11)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:
			Assert::IsTrue(s.insert(25));
			Assert::IsTrue(s.insert(75));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(s[25]);
			Assert::IsTrue(s[75]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(cthiem2_test12)
		{
			myset<int> s;
			Assert::IsTrue(s.insert(7));
			Assert::IsTrue(s.size() == 1);
			myset<int> t(s);
			Assert::IsTrue(!t.empty());
			Assert::IsTrue(t[7]);
			Assert::IsTrue(s[7]);
			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s[12]);
			Assert::IsTrue(!t[12]);
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(t.size() == 1);
		}

		TEST_METHOD(cthiem2_test13)
		{
			myset<int> s;
			Assert::IsTrue(s.insert(7));
			Assert::IsTrue(s.size() == 1);
			myset<int> t = s;
			Assert::IsTrue(!t.empty());
			Assert::IsTrue(t[7]);
			Assert::IsTrue(s[7]);
			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s[12]);
			Assert::IsTrue(!t[12]);
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(t.size() == 1);
		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // DANIEL DEAN ASUNCION
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(dasunc2_tests)
	{
	public:

		TEST_METHOD(dasunc2_test09)
		{
			myset<int> a;
			myset<int> b;

			Assert::IsTrue(a.insert(1));
			Assert::IsTrue(a.insert(2));
			Assert::IsTrue(a.insert(3));

			Assert::IsTrue(b.insert(3));
			Assert::IsTrue(b.insert(2));
			Assert::IsTrue(b.insert(1));

			Assert::IsTrue(a.size() == 3);
			Assert::IsTrue(!a.empty());

			Assert::IsTrue(b.size() == 3);
			Assert::IsTrue(!b.empty());

			auto iterA = a.begin();
			auto iterB = b.begin();

			Assert::IsTrue(iterA != a.end());
			Assert::IsTrue(iterB != b.end());
			Assert::IsTrue(*iterA == *iterB);
			++iterA;
			++iterB;

			Assert::IsTrue(iterA != a.end());
			Assert::IsTrue(iterB != b.end());
			Assert::IsTrue(*iterA == *iterB);
			++iterA;
			++iterB;

			Assert::IsTrue(iterA != a.end());
			Assert::IsTrue(iterB != b.end());
			Assert::IsTrue(*iterA == *iterB);
			++iterA;
			++iterB;

			Assert::IsTrue(iterA == a.end());
			Assert::IsTrue(iterB == b.end());
		}

		TEST_METHOD(dasunc2_test10)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			for (int i = 1; i <= 10; i++)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 10);
			Assert::IsTrue(!s.empty());

			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(dasunc2_test11)
		{
			myset<int> a;
			myset<int> b;

			Assert::IsTrue(a.size() == 0);
			Assert::IsTrue(a.empty());

			Assert::IsTrue(b.insert(1));
			Assert::IsTrue(b.insert(2));
			Assert::IsTrue(b.insert(3));

			Assert::IsTrue(b.size() == 3);
			Assert::IsTrue(!b.empty());

			a = b;

			Assert::IsTrue(a.size() == 3);
			Assert::IsTrue(!a.empty());

			Assert::IsTrue(a[1]);
			Assert::IsTrue(a[2]);
			Assert::IsTrue(a[3]);
		}

		TEST_METHOD(dasunc2_test12)
		{
			myset<int> s;

			s += 3;

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			s.clear();

			for (int i = 1; i <= 100; i++)
			{
				s += i;
			}

			Assert::IsTrue(s.size() == 100);
			Assert::IsTrue(!s.empty());

			auto iter = s.begin();
			int x = 1;

			while (iter != s.end())
			{
				Assert::IsTrue(*iter == x);
				++iter;
				x++;
			}
		}

		//TEST_METHOD(dasunc2_test13)
		//{
		//    myset<int> a;
		//    myset<int> b;
		//    myset<int> t;

		//    Assert::IsTrue(t.size() == 0);
		//    Assert::IsTrue(t.empty());

		//    for (int i = 1; i <= 100; i++)
		//    {
		//        a += i;
		//    }

		//    Assert::IsTrue(a.size() == 100);
		//    Assert::IsTrue(!a.empty());

		//    for (int i = 1000; i <= 2000; i++)
		//    {
		//        Assert::IsTrue(b.insert(i));
		//    }

		//    Assert::IsTrue(b.size() == 1000);
		//    Assert::IsTrue(!b.empty());

		//    t = a;
		//    a = b;

		//    Assert::IsTrue(t.size() == 100);
		//    Assert::IsTrue(!t.empty());

		//    Assert::IsTrue(a.size() == 1000);
		//    Assert::IsTrue(!a.empty());

		//    b = t;

		//    Assert::IsTrue(b.size() == 100);
		//    Assert::IsTrue(!b.empty());

		//    t.clear();

		//    Assert::IsTrue(t.size() == 0);
		//    Assert::IsTrue(t.empty());
		//}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // David Qiao
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(dqiao4_tests)
	{
	public:

		//TEST_METHOD(dqiao4_test01)
		//{
		//    myset<int> q;

		//    Assert::IsTrue(q.size() == 0);
		//    Assert::IsTrue(q.empty());

		//    Assert::IsTrue(q.insert(4));
		//    Assert::IsTrue(q.insert(1));
		//    Assert::IsTrue(q.insert(99));

		//    Assert::IsTrue(q.size() == 3);
		//    Assert::IsTrue(!q.empty());

		//    auto iter = q.begin();

		//    Assert::IsTrue(iter != q.end());
		//    Assert::IsTrue(*iter == 4);
		//    ++iter;

		//    Assert::IsTrue(iter != q.end());
		//    Assert::IsTrue(*iter == 99);
		//}

		//TEST_METHOD(dqiao4_tests02)
		//{
		//    myset<int> q;

		//    Assert::IsTrue(q.size() == 0);
		//    Assert::IsTrue(q.empty());

		//    Assert::IsTrue(q.insert(75));
		//    q += 11;

		//    Assert::IsTrue(q.size() == 2);

		//    auto iter = q.find(11);

		//    Assert::IsTrue(iter != q.end());
		//    Assert::IsTrue(*iter == 11);
		//    ++iter;

		//    Assert::IsTrue(iter == q.end());

		//    Assert::IsTrue(!q.insert(11));
		//    Assert::IsTrue(q[75]);
		//    Assert::IsTrue(q[11]);
		//    Assert::IsTrue(!q[12]);

		//}

		TEST_METHOD(dqiao4_tests03)
		{
			myset<string> q;

			Assert::IsTrue(q.size() == 0);
			Assert::IsTrue(q.empty());

			Assert::IsTrue(q.insert("You"));
			Assert::IsTrue(q.insert("Are"));
			q += "Lame";

			Assert::IsTrue(q.size() == 3);

			Assert::IsTrue(q["You"]);
			Assert::IsTrue(q["Are"]);
			Assert::IsTrue(q["Lame"]);

			Assert::IsTrue(!q["Cool"]);

			q.clear();

			Assert::IsTrue(q.size() == 0);
			Assert::IsTrue(q.empty());
		}

		//TEST_METHOD(dqiao4_tests04)
		//{
		//    myset<int> q;

		//    Assert::IsTrue(q.size() == 0);
		//    Assert::IsTrue(q.empty());

		//    for (int i = 0; i < 10; ++i) {
		//        Assert::IsTrue(q.insert(i));
		//    }

		//    Assert::IsTrue(!q.empty());
		//    Assert::IsTrue(q.size() == 10);

		//    myset<int> q2;

		//    q = q2;

		//    Assert::IsTrue(q.empty());
		//    Assert::IsTrue(q.size() == 0);

		//    auto iter = q2.find(0);
		//    Assert::IsTrue(iter != q.end());
		//    Assert::IsTrue(*iter == 0);
		//    ++iter;

		//    Assert::IsTrue(iter != q.end());
		//    Assert::IsTrue(*iter == 1);
		//    ++iter;

		//    Assert::IsTrue(iter != q.end());
		//    Assert::IsTrue(*iter == 2);
		//    ++iter;

		//    auto iter2 = q2.find(5);

		//    Assert::IsTrue(iter2 != q.end());
		//    Assert::IsTrue(*iter2 == 5);
		//    ++iter2;

		//    Assert::IsTrue(iter != q.end());
		//    Assert::IsTrue(*iter == 6);
		//}

		//TEST_METHOD(dqiao4_tests05)
		//{
		//    myset<int> q;

		//    Assert::IsTrue(q.insert(23));
		//    Assert::IsTrue(q.insert(34));
		//    Assert::IsTrue(q.insert(45));
		//    Assert::IsTrue(q.insert(56));

		//    myset<int> q2;

		//    Assert::IsTrue(q2[34]);
		//    Assert::IsTrue(q2[56]);
		//    Assert::IsTrue(q2[23]);
		//    Assert::IsTrue(q2[45]);

		//    auto iter2 = q2.begin();
		//    auto iter = q.begin();

		//    Assert::IsTrue(*iter == *iter2);
		//}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // David Torres
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //


 //#include <CppUnitTest.h>





namespace MyMapUnitTests
{
	TEST_CLASS(dtorres3_tests)
	{
	public:

		TEST_METHOD(dtorres3_test01)
		{
			myset<int>  s;
			for (int i = 0; i < 100; ++i) {
				Assert::IsTrue(s.insert(i));
				Assert::IsTrue(s.size() == i + 1);
			}

			auto i = s.begin();

			Assert::IsTrue(*i == 0);
			++i;
			Assert::IsTrue(*i == 1);
			Assert::IsTrue(!s.empty());
			auto x = s.begin();

			for (int j = 0; j < 100; ++j) {

				Assert::IsTrue(x == s.find(j));
				Assert::IsTrue(s[j]);
				Assert::IsTrue(!s[100 + j]);
				++x;

			}
			Assert::IsTrue(x == s.end());



		}

		//TEST_METHOD(dtorres3_test02)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.insert("David"));
		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(s.insert("Torres"));
		//    Assert::IsTrue(s.insert("was"));
		//    Assert::IsTrue(s.insert("here"));
		//    Assert::IsTrue(s.size() == 4);
		//    auto i = s.find("David");
		//    ++i;

		//    Assert::IsTrue(*i == "Torres");
		//    ++i;
		//    Assert::IsTrue(i == s.end());

		//}

		//TEST_METHOD(dtorres3_test03)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.insert("Chicago"));
		//    Assert::IsTrue(s["Chicago"]);
		//    Assert::IsTrue(!s["Bulls"]);
		//    auto i = s.find("Bulls");
		//    Assert::IsTrue(s.end() == i);
		//    Assert::IsTrue(s.insert("Bulls"));
		//    Assert::IsTrue(s.size() == 2);
		//    for (int i = 0; i < 2; ++i) {
		//        Assert::IsTrue(s.insert("Chicago"));
		//        Assert::IsTrue(s.insert("Bulls"));

		//    }
		//    Assert::IsTrue(s.size() == 2);

		//}

		TEST_METHOD(dtorres3_test04)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			for (int i = 0; i < 100; ++i) {
				Assert::IsTrue(s.insert(i));
				Assert::IsTrue(!s.insert(i));

			}
			Assert::IsTrue(s.size() == 100);
			s.clear();
			Assert::IsTrue(s.size() == 0);
			for (int i = 0; i < 100; ++i) {
				Assert::IsTrue(s.insert(i + 100));
				auto t = s.find(i + 100);
				Assert::IsTrue(*t == (i + 100));
				++t;
				Assert::IsTrue(t == s.end());
				s.clear();
				Assert::IsTrue(s.size() == 0);
			}

		}

		TEST_METHOD(dtorres3_test05)
		{
			myset<int>  s;
			myset<int>  names;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());


			for (int i = 0; i < 100; ++i) {
				Assert::IsTrue(s.insert(i));
				Assert::IsTrue(!s.insert(i));
				s.clear();
				Assert::IsTrue(s.insert(i));
				auto y = s.begin();
				Assert::IsTrue(*y == i);
				++y;
				Assert::IsTrue(y == s.end());

			}
			Assert::IsTrue(s.size() == 1);
			int k = 99;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}


			s.clear();
			Assert::IsTrue(s.size() == 0);




		}



	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_d_tests)
	{
	public:


		TEST_METHOD(emart37_test01)
		{
			myset<int>  s1;
			myset<int> s2;

			s1 += 1;
			s1 += 2;
			s1 += 3;
			s1 += 4;
			s1 += 5;

			Assert::IsTrue(s1.size() == 5);
			Assert::IsTrue(!s1.empty());

			//set s2 equal to s1, should do deep copy
			s2 = s1;

			Assert::IsTrue(s2.size() == 5);
			Assert::IsTrue(!s2.empty());

		}

		//TEST_METHOD(emart37_test02)
		//{
		//    myset<int>  s1;
		//    myset<int> s2;

		//    s1 += 1;
		//    s1 += 2;
		//    s1 += 3;
		//    s1 += 4;
		//    s1 += 5;

		//    Assert::IsTrue(s1.size() == 5);
		//    Assert::IsTrue(!s1.empty());

		//    s2 = s1;

		//    //clear s1 
		//    s1.clear();

		//    Assert::IsTrue(s1.size() == 0);
		//    Assert::IsTrue(!s1.empty());

		//    Assert::IsTrue(s2.size() == 5);
		//    Assert::IsTrue(!s2.empty());



		//}

		TEST_METHOD(emart37_test03)
		{
			myset<int>  s1;

			auto iter = s1.begin();

			//iter points to end if set is empty
			Assert::IsTrue(iter == s1.end());
		}

		TEST_METHOD(emart37_test04)
		{
			myset<int>  s1;
			int i = 1;
			s1 += 1;
			s1 += 2;
			s1 += 3;
			s1 += 4;
			s1 += 5;

			//copy constructor
			myset<int> s2(s1);

			Assert::IsTrue(s2.size() == 5);
			Assert::IsTrue(!s2.empty());

			for (auto &e : s2)
			{
				Assert::IsTrue(e == i);
				i++;
			}


		}

		TEST_METHOD(emart37_test05)
		{
			myset<int>  s1;
			s1 += 1;
			s1 += 2;
			s1 += 3;
			s1 += 4;
			s1 += 5;

			auto iter = s1.begin();
			*iter = 0;


			//iter pointer changes value in set
			Assert::IsTrue(*(s1.begin()) == 0);





		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Edgar Martinez-Ayala
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //








namespace MyMapUnitTests {
	TEST_CLASS(emart9_tests) {
public:

	//Test the size, empty, and grow elements
	//in the myset file with int data type
	TEST_METHOD(emart9_test01) {
		myset<int>  x;

		Assert::IsTrue(x.size() == 0);
		Assert::IsTrue(x.empty());

		//Inserts 0 - 9 in array
		int i = 0;
		while (i < 10) {
			Assert::IsTrue(x.insert(i));
			Assert::IsTrue(x.size() == i + 1);
			i++;
		}

		Assert::IsFalse(x.empty());    //check to see if array empty after inserts
		Assert::IsFalse(x.insert(5));  //shouldn't insert 
		Assert::IsTrue(x.insert(10));  //inserts 10
		Assert::IsFalse(x.insert(10));  //shouldn't insert 

		vector<int> tmp = { 0, 1, 2, 3, 4, 5,
			6, 7, 8, 9, 10 };
		Assert::IsTrue(x.size() == tmp.size()); //compares size

		i = 0;
		while (i < 12) {
			//            Assert::IsTrue(x[i] == tmp[i]); //compares elements from array
			i++;							  //to that of vector
		}
	}

	//Test the size, empty, and grow elements in the
	//myset file with a different data type (string)
	TEST_METHOD(emart9_test02) {
		myset<string>  x;

		Assert::IsTrue(x.size() == 0);
		Assert::IsTrue(x.empty());

		//Inserts into array
		Assert::IsTrue(x.insert("car"));
		Assert::IsFalse(x.insert("car"));  //shouldn't insert
		x += "airplane";

		Assert::IsFalse(x.empty());    //check to see if array empty after inserts
		Assert::IsTrue(x.size() == 2);

		//Assert::IsTrue(x.find("car") == x.begin);
		//        Assert::IsTrue(x.find("train") == x.end);

		//        x.clear;
		//Assert::IsTrue(x.size() == 0);
		//        Assert::IsTrue(x.empty);
	}

	//Test the clear call in the myset file
	//to see if it works correctly, by 
	//updating the size and emptying the array
	TEST_METHOD(emart9_test03) {
		myset<int>  x;

		Assert::IsTrue(x.size() == 0);
		Assert::IsTrue(x.empty());

		//Inserts 0 - 9 in array
		int i = 0;
		while (i < 10) {
			Assert::IsTrue(x.insert(i));
			Assert::IsTrue(x.size() == i + 1);
			i++;
		}

		Assert::IsFalse(x.empty());    //check to see if array empty after inserts 

									   //        x.clear;  //empties array and resets the size

									   //        Assert::IsTrue(x.size() == 0);
									   //        Assert::IsTrue(x.empty());

									   //        Assert::IsTrue(x.insert(4));  //previously in array but deleted
									   //        Assert::IsTrue(x.insert(5));  //so should insert

									   //        Assert::IsTrue(x.size == 2);
	}

	//Tests the +=operator along with the
	//find(e) and [e] calls 
	TEST_METHOD(emart9_test04) {
		myset<int>  x;

		Assert::IsTrue(x.size() == 0);
		Assert::IsTrue(x.empty());

		//Inserts 0 - 3 in array
		int i = 1;
		while (i < 4) {
			x += i;     //test +=operator
			Assert::IsTrue(x.size() == i);
			i++;
		}

		Assert::IsFalse(x.empty());    //check to see if array empty after inserts 

									   //Assert::IsTrue(x.find(1) == x.begin);  //checks that 1 is in first element
									   //Assert::IsTrue(x.find(4) == x.end);    //checks that 4 ism't in array
		Assert::IsTrue(x.operator[](1));	   //checks that its in array
		Assert::IsFalse(x.operator[](4));      //checks that its not in array	

											   //x.clear;  //empties array and resets the size
											   //Assert::IsTrue(x.empty());
											   //Assert::IsTrue(x.size() == 0);
	}

	//Test cases that call find to get address
	//of string that got located if found. Then it
	//dereferences it and compares to the acutal sting. 
	TEST_METHOD(emart9_test05) {
		myset<string>  x;

		Assert::IsTrue(x.size() == 0);
		Assert::IsTrue(x.empty());

		//Inserts three strings into array
		Assert::IsTrue(x.insert("car"));
		Assert::IsTrue(x.insert("bus"));
		Assert::IsTrue(x.insert("train"));

		//Assert::IsTrue(x.begin == "bus");

		auto i = x.find("car");  //gets position of car in array
		Assert::IsTrue(*i == "car");
		//i++;
		++i;
		Assert::IsFalse(*i == "bus");
		Assert::IsTrue(*i == "train");
		//i++;
		++i;
		//Assert::IsTrue(i == x.end);

		//x.clear;    //empties array 
		//Assert::IsTrue(x.begin == x.end);
	}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Funmilola Akintoye
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(fakint3_tests)
	{
	public:

		TEST_METHOD(fakint3_test01) //Test Case 1
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("hello"));
			Assert::IsTrue(s["hello"]);

			Assert::IsTrue(s.insert("world"));
			Assert::IsTrue(s["world"]);

			Assert::IsTrue(s.size() == 2);
			Assert::IsFalse(s.empty());

			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

		}

		TEST_METHOD(fakint3_test02) //Test Case 2
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			auto iter = s.find(22);
			Assert::IsTrue(!s[22]);
			Assert::IsTrue(iter == s.end());

			Assert::IsTrue(s.insert(44));
			Assert::IsTrue(s.insert(22));
			Assert::IsTrue(!s.insert(44));

			Assert::IsTrue(iter != s.end());


			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(fakint3_test03) // Test Case 3
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("first"));
			Assert::IsTrue(s.insert("second"));
			Assert::IsTrue(s.insert("third"));
			Assert::IsTrue(s.insert("fourth"));
			Assert::IsTrue(s.insert("fifth"));
			for (string x : s) {
				Assert::IsTrue(s[x]);
			}
			Assert::IsTrue(!s.insert("first"));
			Assert::IsTrue(!s.insert("third"));
			Assert::IsTrue(!s.insert("fifth"));

		}

		TEST_METHOD(fakint3_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("mary"));
			Assert::IsTrue(s.insert("had"));
			Assert::IsTrue(s.insert("a"));
			Assert::IsTrue(s.insert("little"));
			Assert::IsTrue(s.insert("lamb"));

			for (auto x : s) {
				Assert::IsTrue(s[x]);
			}
			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(!s["abc"]);

			s.clear();
			Assert::IsTrue(s.size() == 0);


		}

		TEST_METHOD(fakint3_test05) //Test Case 5
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(123));
			Assert::IsTrue(s.insert(456));

			Assert::IsTrue(s.insert(789));
			Assert::IsTrue(s.insert(999));
			Assert::IsTrue(!s.insert(123));

			Assert::IsTrue(s.size() == 4);
			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());


		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Fangfang Fu
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









 // SetTrueWhenDestruct class is to help test destruct
static bool __ffu3_flag;

class SetTrueWhenDestruct {
	bool* destructFlag;

public:
	SetTrueWhenDestruct() {
		destructFlag = &__ffu3_flag;
	}

	SetTrueWhenDestruct(bool* flag)
		: destructFlag(flag) {}

	~SetTrueWhenDestruct() {
		*destructFlag = true;
	}

	bool operator==(const SetTrueWhenDestruct& rhs) const {
		return this == &rhs;
	}

	bool operator<(const SetTrueWhenDestruct& rhs) const {
		return this < &rhs;
	}

}; // end of SetTrueWhenDestruct 

namespace MyMapUnitTests
{
	TEST_CLASS(ffu3_tests)
	{
	public:
		// test copy constructor
		TEST_METHOD(ffu3_test01)
		{
			myset<int> s;
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(40));

			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s.empty());

			myset<int> s1 = s;

			Assert::IsTrue(s1.size() == 4);
			Assert::IsTrue(!s1.empty());

			Assert::IsTrue(s1[10]);
			Assert::IsTrue(s1[20]);
			Assert::IsTrue(s1[30]);
			Assert::IsTrue(s1[40]);
			Assert::IsTrue(!s1[5]);
			Assert::IsTrue(!s1[100]);
		}

		// test assignment operator =
		TEST_METHOD(ffu3_test02)
		{
			myset<string> s1, s2;

			Assert::IsTrue(s1.insert("apple"));
			Assert::IsTrue(s1.insert("pear"));
			Assert::IsTrue(s1.insert("banana"));

			Assert::IsTrue(s1.size() == 3);
			Assert::IsTrue(!s1.empty());

			Assert::IsTrue(s2.insert("you"));
			Assert::IsTrue(s2.insert("are"));
			Assert::IsTrue(s2.insert("good"));
			Assert::IsTrue(s2.insert("right"));

			Assert::IsTrue(s2.size() == 4);
			Assert::IsTrue(!s2.empty());

			s2 = s1;

			Assert::IsTrue(s2.size() == 3);
			Assert::IsTrue(!s2.empty());

			auto iter1 = s2.find("apple");
			Assert::IsTrue(iter1 != s2.end());
			auto iter2 = s2.find("pear");
			Assert::IsTrue(iter2 != s2.end());
			auto iter3 = s2.find("banana");
			Assert::IsTrue(iter3 != s2.end());

			Assert::IsTrue(!s2["you"]);
			Assert::IsTrue(!s2["are"]);
			Assert::IsTrue(!s2["good"]);
			Assert::IsTrue(!s2["right"]);
		}

		// test clear
		TEST_METHOD(ffu3_test03)
		{
			myset<double> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(1.1));
			Assert::IsTrue(s.insert(2.2));
			s += 3.3;
			s += 4.4;

			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[1.1]);
			Assert::IsTrue(s[2.2]);
			Assert::IsTrue(s[3.3]);
			Assert::IsTrue(s[4.4]);

			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			auto iter1 = s.find(1.1);
			Assert::IsTrue(iter1 == s.end());
			auto iter2 = s.find(2.2);
			Assert::IsTrue(iter2 == s.end());
			auto iter3 = s.find(3.3);
			Assert::IsTrue(iter3 == s.end());
			auto iter4 = s.find(4.4);
			Assert::IsTrue(iter4 == s.end());
		}

		// test iterators
		TEST_METHOD(ffu3_test04)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(20));

			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s.empty());

			auto iter = s.begin();

			Assert::IsTrue(*iter == 1);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 3);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 10);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter == s.end());
		}

		// test destructor
		TEST_METHOD(ffu3_test05)
		{
			bool flag1 = false;
			bool flag2 = false;
			bool flag3 = false;
			bool flag4 = false;

			SetTrueWhenDestruct des1(&flag1);
			SetTrueWhenDestruct des2(&flag2);
			SetTrueWhenDestruct des3(&flag3);
			SetTrueWhenDestruct des4(&flag4);

			{
				myset<SetTrueWhenDestruct> s;

				Assert::IsTrue(s.size() == 0);
				Assert::IsTrue(s.empty());

				Assert::IsTrue(s.insert(des1));
				Assert::IsTrue(s.insert(des2));
				Assert::IsTrue(s.insert(des3));
				Assert::IsTrue(s.insert(des4));

				Assert::IsTrue(s.size() == 4);
				Assert::IsTrue(!s.empty());
			}

			Assert::IsTrue(flag1 == true);
			Assert::IsTrue(flag2 == true);
			Assert::IsTrue(flag3 == true);
			Assert::IsTrue(flag4 == true);
		}

	}; // end of test class
}

/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// Garfie Chiu
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(gchiu2_tests)
	{
	public:

		// Searching empty set
		TEST_METHOD(gchiu2_test09) {
			myset<int> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(!s[0]);
			Assert::IsTrue(!s[1]);
			Assert::IsTrue(!s[5]);
			Assert::IsTrue(!s[-1]);
			Assert::IsTrue(!s[2147483648]);

			auto iter = s.find(0);
			Assert::IsTrue(iter == s.end());

			iter = s.find(1);
			Assert::IsTrue(iter == s.end());

			iter = s.find(5);
			Assert::IsTrue(iter == s.end());

			iter = s.find(-1);
			Assert::IsTrue(iter == s.end());

			iter = s.find(2147483648);
			Assert::IsTrue(iter == s.end());
		}

		// Test copy constructor (int)
		TEST_METHOD(gchiu2_test10) {
			myset<int> a;
			Assert::IsTrue(a.insert(1));
			Assert::IsTrue(a.insert(2));
			Assert::IsTrue(a.insert(3));
			Assert::IsTrue(a.size() == 3);

			myset<int> b(a);
			Assert::IsTrue(b[1]);
			Assert::IsTrue(b[2]);
			Assert::IsTrue(b[3]);
			Assert::IsTrue(b.size() == 3);

			Assert::IsTrue(!b[0]);
			Assert::IsTrue(!b[-1]);

		}

		// Test copy constructor via equals operator (strings)
		TEST_METHOD(gchiu2_test11) {
			myset<string> a;
			Assert::IsTrue(a.insert("Lorem"));
			Assert::IsTrue(a.insert("Ipsum"));
			Assert::IsTrue(a.insert("Dolor"));
			Assert::IsTrue(a.size() == 3);

			myset<string> b = a;
			Assert::IsTrue(b["Lorem"]);
			Assert::IsTrue(b["Ipsum"]);
			Assert::IsTrue(b["Dolor"]);
			Assert::IsTrue(b.size() == 3);

			Assert::IsTrue(!b["Sit"]);
			Assert::IsTrue(!b["Amet"]);
		}

		// Test clear function
		TEST_METHOD(gchiu2_test12) {
			myset<int> a;
			Assert::IsTrue(a.insert(-1));
			Assert::IsTrue(a.insert(0));
			Assert::IsTrue(a.insert(1));

			a.clear();
			Assert::IsTrue(a.size() == 0);
			Assert::IsTrue(a.empty());
			Assert::IsTrue(!a[-1]);
			Assert::IsTrue(!a[0]);
			Assert::IsTrue(!a[1]);

			Assert::IsTrue(a.insert(0));
			Assert::IsTrue(a.insert(5));
			Assert::IsTrue(a.size() == 2);
		}

		// Test copy constructor mutual exclusivity (strings)
		//TEST_METHOD(gchiu2_test13) {
		//    myset<string> a;
		//    Assert::IsTrue(a.insert["Fusce"]);
		//    Assert::IsTrue(a.insert["Et"]);
		//    Assert::IsTrue(a.insert["Turpis"]);
		//    Assert::IsTrue(a.size() == 3);

		//    myset<string> b(a);
		//    Assert::IsTrue(b.size() == 3);

		//    a.clear();
		//    Assert::IsTrue(a.size() == 0);
		//    Assert::IsTrue(a.empty());
		//    Assert::IsTrue(b.size() == 3);
		//    Assert::IsTrue(!b.empty());

		//    // Should still have these elements and are accessible in memory
		//    Assert::IsTrue(b["Fusce"]);
		//    Assert::IsTrue(b["Et"]);
		//    Assert::IsTrue(b["Turpis"]);

		//}

	};
}/*guevarr2UnitTest.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Aaron Guevarra
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(guevarr2_tests)
	{
	public:

		TEST_METHOD(guevarr2_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(20));
			Assert::IsFalse(s.empty());
			Assert::IsTrue(s.size() == 1);

			Assert::IsTrue(s.insert(-1));
			Assert::IsFalse(s.empty());
			Assert::IsTrue(s.size() == 2);

			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
		}

		//TEST_METHOD(guevarr2_test02)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    s += 1;
		//    s += 5;
		//    s += 99999;
		//    s += -99999;

		//    Assert::IsTrue(s.size() == 4);
		//    Assert::IsFalse(s.empty());

		//    auto iter = s.find(-99999);
		//    Assert::IsTrue(iter == s.end());
		//    Assert::IsFalse(iter == s.begin());

		//    ++iter;
		//    Assert::IsTrue(*iter == 1);

		//    ++iter;
		//    Assert::IsTrue(*iter == 5);

		//    ++iter;
		//    Assert::IsTrue(*iter == 9999);
		//    Assert::IsFalse(iter == s.end());

		//    ++iter;
		//    Assert::IsTrue(iter == s.end());
		//}

		TEST_METHOD(guevarr2_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("hello"));
			Assert::IsTrue(s.insert("world"));

			Assert::IsFalse(s.empty());
			Assert::IsTrue(s.size() == 2);

			auto iter = s.find("hello");
			Assert::IsTrue(*iter == "hello");
			Assert::IsTrue(iter == s.begin());

			//auto iter = s.find("world");
			//Assert::IsTrue(*iter == "world");
			//Assert::IsFalse(iter == s.end());
		}

		TEST_METHOD(guevarr2_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("hello"));
			Assert::IsFalse(s.insert("hello"));

			Assert::IsTrue(s["hello"]);

			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsFalse(s["hello"]);

			Assert::IsTrue(s.insert("hello"));

			myset<string> t;
			t = s;

			Assert::IsFalse(t.empty());
			Assert::IsTrue(t.size() == 1);
		}

		TEST_METHOD(guevarr2_test05)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("hello"));
			Assert::IsTrue(s.insert("meow"));
			Assert::IsTrue(s.size() == 2);

			myset<string> t;

			Assert::IsTrue(t.size() == 0);
			Assert::IsTrue(t.empty());

			Assert::IsTrue(t.insert("world"));
			Assert::IsTrue(t.size() == 1);

			auto iter = t.find("world");
			Assert::IsTrue(*iter == "world");

			t = s;

			iter = t.find("world");
			//Assert::IsFalse(*iter == "world");
			Assert::IsTrue(iter == t.end());
			Assert::IsTrue(t.size() == 2);
		}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Hibah Alam
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //










 //Incase some of these strings don't make sense, just know that they are just names of pokemon
namespace MyMapUnitTests
{
	TEST_CLASS(halam2_tests)
	{
	public:

		TEST_METHOD(halam2_test01)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("Pikachu"));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s.insert("Machomp"));
			Assert::IsTrue(!s.empty());
			auto iter = s.find("Squirtle");
			Assert::IsTrue(iter == s.end());
			Assert::IsTrue(s.insert("Kakuna"));
			Assert::IsTrue(s.insert("Pidgey"));

			for (auto a : s) { //for loop that checks for each pokemon that has a name with atleast 7 letters
				Assert::IsTrue(a.size() <= 7);
			}

			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s["beedrill"]);


		}

		//TEST_METHOD(halam2_test02)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(010000));
		//    Assert::IsTrue(s.insert(10101));
		//    s += 10001;
		//    Assert::IsTrue(s.insert(10001));
		//    Assert::IsTrue(!s.empty());
		//    auto iter = s.find(10101);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(s.size() == 3);
		//    Assert::IsTrue(!s[1010101]);
		//    Assert::IsTrue(s.insert(100000));
		//}

		//TEST_METHOD(halam2_test03)
		//{
		//    myset<string>  s;


		//    Assert::IsTrue(s.insert("torchic"));

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(s.insert("treecko"));
		//    Assert::IsTrue(s.size() == 2);
		//    Assert::IsTrue(!s.insert("typholsion"));
		//    for (auto a : s) {
		//        Assert::IsTrue(a[0] == 't'); //will return false if any pokemon's name doesn't start with t
		//    }

		//    Assert::IsTrue(s.insert("togepi"));
		//    Assert::IsTrue(!s.empty());
		//    s.clear();
		//    Assert::IsTrue(s.empty());



		//}

		//TEST_METHOD(halam2_test04)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert("Chocolate"));
		//    Assert::IsTrue(s.insert("Vanilla"));
		//    Assert::IsTrue(s.insert("Strawberry"));
		//    Assert::IsTrue(s["Rocky Road"]);

		//    auto iter = s.begin();
		//    while (iter != s.end()) {  //if we find chocolate we add more chocolate
		//        if (*iter == "Chocolate") {
		//            Assert::IsTrue(s.insert("More Chocolate"));
		//        }

		//    }

		//    Assert::IsTrue(s.size() == 6);
		//    Assert::IsTrue(!s["Pistachio"]);
		//    Assert::IsTrue(!s.empty());

		//}

		//TEST_METHOD(halam2_test05)
		//{
		//    myset<string> s;

		//    Assert::IsTrue(s.insert("Red"));
		//    Assert::IsTrue(s.insert("Blue"));
		//    Assert::IsTrue(s.insert("Green"));
		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(s.insert("Orange"));
		//    Assert::IsTrue(s.insert("Dark Blue"));
		//    Assert::IsTrue(s.insert("Light Blue"));
		//    Assert::IsTrue(s.insert("Baby Blue"));

		//    int blues;
		//    for (auto a : s) {
		//        string color = "Blue";
		//        if (a.find(color) != string::npos) { //finds and counts blues
		//            blues++;
		//            Assert::IsTrue(a.size() <= 10); //check if color is longer thatn 10 characters
		//        }
		//    }

		//    s.clear();

		//    Assert::IsTrue(s.empty());

		//}
	};

}


/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// YOUR NAME
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(student_f_tests)
	{
	public:

		TEST_METHOD(hkhali2_test9)
		{
			myset<int>  s;
			Assert::IsTrue(s.insert(6));
			Assert::IsFalse(s.insert(6));
			Assert::IsTrue(s.size() == 1);
			Assert::IsFalse(s.empty());
		}
		TEST_METHOD(hkhali2_test10)
		{
			myset<string>  s;
			Assert::IsTrue(s.insert("hind"));
			Assert::IsTrue(s.insert("seba"));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(s["seba"]);
			Assert::IsTrue(!s["dana"]);
		}
		TEST_METHOD(hkhali2_test11)
		{
			myset<int>  s;
			Assert::IsTrue(!s.size() != 0);
			Assert::IsFalse(!s.empty());
		}

		TEST_METHOD(hkhali2_test12)
		{
			myset<int>  s;
			Assert::IsTrue(s.insert(1));
			Assert::IsFalse(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(!s.insert(3));
			Assert::IsFalse(s.insert(3));
			Assert::IsTrue(s.insert(7));
			Assert::IsTrue(s.insert(8));
			Assert::IsTrue(s.insert(9));
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.size() == 7);
		}
		TEST_METHOD(hkhali2_test13)
		{
			myset<string>  s;
			Assert::IsTrue(!s["apple"]);
			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s["apple"]);
		}



	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Heather Kuhn
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(hkuhn3_tests)
	{
	public:

		/*
		TEST_METHOD(hummel_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		TEST_METHOD(hummel_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(hummel_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(hummel_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(hummel_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(hummel_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(hummel_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(hummel_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}*/

		//insert 9 values, return false bc size doesn't match 5
		TEST_METHOD(hkuhn3_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert(89));
			Assert::IsTrue(s.insert(34));
			Assert::IsTrue(s.insert(52));
			Assert::IsTrue(s.insert(7));
			Assert::IsTrue(s.insert(67));
			Assert::IsTrue(s.insert(11));
			Assert::IsTrue(s.insert(99));
			Assert::IsTrue(s.insert(1234));
			Assert::IsTrue(s.insert(174));
			Assert::IsFalse(s.size() == 5);
			auto iter2 = s.find(7);
			Assert::IsTrue(iter2 != s.end());

		}

		//checking to see if strings inserted, check for duplicates, and checks end of set
		TEST_METHOD(hkuhn3_test02)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("microsoft"));
			Assert::IsTrue(s.insert("slack"));
			Assert::IsTrue(s.insert("workday"));
			Assert::IsTrue(!(s.insert("slack"))); //already inserted: 
			Assert::IsTrue(!(s.insert("workday"))); //already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!(s.empty()));

			auto iter = s.find("slack");
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "slack");

			auto iter2 = s.find("workday");
			Assert::IsTrue(iter2 != s.end());
			Assert::IsTrue(!(s.empty()));
		}

		//checks size of set, checks if correct int value is inserted into set s
		TEST_METHOD(hkuhn3_test03)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(22));
			Assert::IsTrue(s.insert(11));
			Assert::IsTrue(s.insert(28));
			Assert::IsTrue(s.insert(32));
			Assert::IsTrue(s.insert(14));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!(s.empty()));

			Assert::IsTrue(s[22]);
			Assert::IsFalse(s[13]); //not in set

		}

		//checks size of set, checks to see if value is not inserted into set
		TEST_METHOD(hkuhn3_test04)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(22));
			Assert::IsTrue(s.insert(11));
			Assert::IsTrue(s.insert(28));
			Assert::IsTrue(s.insert(32));
			Assert::IsTrue(s.insert(14));
			Assert::IsFalse(s.insert(11)); //not inserted

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!(s.empty()));

			Assert::IsFalse(s[13]); //not in set
		}

		//insert string, check size, and clear the list, check if set is empty
		TEST_METHOD(hkuhn3_test05)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("microsoft"));
			Assert::IsTrue(s.insert("slack"));
			Assert::IsTrue(s.insert("workday"));
			Assert::IsTrue(s.insert("grace"));
			Assert::IsTrue(s.insert("hopper"));
			Assert::IsTrue(s.insert("walmart"));
			Assert::IsTrue(s.insert("honeywell"));
			Assert::IsTrue(s.insert("twitter"));
			Assert::IsTrue(s.insert("snapchat"));
			Assert::IsTrue(!(s.insert("slack"))); //already inserted: 
			Assert::IsTrue(!(s.insert("workday"))); //already inserted:

			Assert::IsTrue(s.size() == 9);

			s.clear();
			Assert::IsTrue(s.empty());

		}

		////test student
		//TEST_METHOD(hkuhn3_test06)
		//{
		//    myset<Student>  s;

		//    Assert::IsTrue(s.insert(Student("90890")));
		//    s.clear();
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(Student("60606")));

		//}

		//test assignment operator
		TEST_METHOD(hkuhn3_test07)
		{
			myset<double>  s;

			Assert::IsTrue(s.insert(7.234));
			Assert::IsTrue(s.insert(0.1234));
			Assert::IsTrue(s.insert(99.99));

			myset<double> t = s;

			Assert::IsTrue(t.size() == 3);

			myset<double> u;

			u = t;

			Assert::IsTrue(u.size() == 3);
		}

	};
}
//
// Unit tests for mymap data structure.
//
// Hubert Plewa
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(hplewa2_tests)
	{
	public:

		TEST_METHOD(hplewa2_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(hplewa2_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(hplewa2_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(hplewa2_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(hplewa2_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(hplewa2_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(hplewa2_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(hplewa2_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}

		TEST_METHOD(hplewa2_test09) {
			//Testing access []
			myset<int> s;

			for (int i = 0; i < 500; i++) {
				Assert::IsTrue(s.insert(i));

				//No duplicates
				Assert::IsTrue(!s.insert(i));

			}
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 500);

			for (int i = 0; i < 500; i++) {
				Assert::IsTrue(s[i]);
			}

			auto cur = s.begin();
			Assert::IsTrue(*cur == 0);
			Assert::IsTrue(*(++cur) == 1);

			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			for (int i = 0; i < 500; i++) {
				Assert::IsTrue(!s[i]);
			}
		}

		TEST_METHOD(hplewa2_test10) {
			//Testing access []
			myset<string> s;

			for (int i = 0; i < 500; i++) {
				Assert::IsTrue(s.insert(to_string(i)));

				Assert::IsTrue(!s.insert(to_string(i)));
			}
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 500);

			for (int i = 0; i < 500; i++) {
				Assert::IsTrue(s[to_string(i)]);
			}

			auto cur = s.begin();
			Assert::IsTrue(*cur == "0");
			Assert::IsTrue(*(++cur) == "1");

			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			for (int i = 0; i < 500; i++) {
				Assert::IsTrue(!s[to_string(i)]);
			}
		}

		TEST_METHOD(hplewa2_test11) {
			//Testing access +=
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			for (int i = 0; i < 500; i++) {
				s += i;
				Assert::IsTrue(!s.insert(i));
				Assert::IsTrue(*(s.find(i)) == i);

				Assert::IsTrue(s.size() == i + 1);
				Assert::IsTrue(!s.empty());
			}
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 500);

			for (int i = 0; i < 500; i++) {
				Assert::IsTrue(s[i]);
			}

			auto cur = s.begin();
			Assert::IsTrue(*cur == 0);
			Assert::IsTrue(*(++cur) == 1);

			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			for (int i = 0; i < 500; i++) {
				Assert::IsTrue(!s[i]);
			}
		}

		//TEST_METHOD(hplewa2_test12) {
		//    //Testing access =
		//    myset<int> s1;
		//    myset<int> s2;

		//    //Initialized?
		//    Assert::IsTrue(s1.empty());
		//    Assert::IsTrue(s1.size() == 0);
		//    Assert::IsTrue(s2.empty());
		//    Assert::IsTrue(s2.size() == 0);

		//    //Fill s1
		//    for (int i = 0; i < 500; i++) {
		//        s1 += i;
		//        Assert::IsTrue(!s1.insert(i));
		//        Assert::IsTrue(*(s1.find(i)) == i);
		//        Assert::IsTrue(s1[i]);
		//        Assert::IsTrue(s1.size() == i + 1);
		//    }
		//    Assert::IsTrue(!s1.empty());
		//    Assert::IsTrue(s1.size() == 500);

		//    //do begin, ++, and *  on iterators work?
		//    auto cur = s1.begin();
		//    Assert::IsTrue(*cur == 0);
		//    Assert::IsTrue(*(++cur) == 1);


		//    for (int i = 500; i < 1000; i++) {
		//        s2 += i;
		//        Assert::IsTrue(!s2.insert(i));
		//        Assert::IsTrue(*(s2.find(i)) == i);
		//        Assert::IsTrue(s2[i]);
		//        Assert::IsTrue(s2.size() == i + 1);
		//    }
		//    Assert::IsTrue(!s2.empty());
		//    Assert::IsTrue(s2.size() == 500);
		//    cur = s2.begin();
		//    Assert::IsTrue(*cur == 500);
		//    Assert::IsTrue(*(++cur) == 501);

		//    for (int i = 0; i < 500; i++) {
		//        Assert::IsTrue(s1[i] != s2[i]);
		//    }

		//    //Deep copy
		//    s1 = s2;
		//    Assert::IsTrue(!s1.empty());
		//    Assert::IsTrue(s1.size() == 500);
		//    Assert::IsTrue(!s2.empty());
		//    Assert::IsTrue(s2.size() == 500);

		//    for (int i = 0; i < 500; i++) {
		//        Assert::IsTrue(s1[i]);
		//        Assert::IsTrue(s2[i]);
		//        Assert::IsTrue(*(s1.find(i)) == *(s2.find(i)));
		//    }

		//    cur = s1.begin();
		//    Assert::IsTrue(*cur == 500);
		//    Assert::IsTrue(*(++cur) == 501);

		//    //Will s1 be affected by s2 being cleared?
		//    s2.clear();
		//    Assert::IsTrue(s2.empty());
		//    Assert::IsTrue(s2.size() == 0);
		//    Assert::IsTrue(!s1.empty());
		//    Assert::IsTrue(s1.size() == 500);

		//    auto it1 = s1.begin();
		//    auto it2 = s2.begin();
		//    for (int i = 500; i < 1000; i++) {
		//        Assert::IsTrue(s1[i]);
		//        Assert::IsTrue(!s2[i]);
		//        Assert::IsTrue(it1 == it2);
		//        ++it1;
		//        Assert::IsTrue(it1 != it2);
		//        ++it2;
		//        Assert::IsTrue(it1 == it2);

		//    }

		//    s1.clear();
		//    Assert::IsTrue(s1.empty());
		//    Assert::IsTrue(s1.size() == 0);

		//    for (int i = 0; i < 500; i++) {
		//        Assert::IsTrue(!s1[i]);
		//    }
		//}
		//TEST_METHOD(hplewa2_test13) {
		//    //testing iterators
		//    myset<int> s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    for (int i = 0; i < 513; i++) {
		//        s += i;
		//        Assert::IsTrue(!s.insert(i));
		//        Assert::IsTrue(*(s.find(i)) == i);
		//        Assert::IsTrue(s.size() == i + 1);
		//        Assert::IsTrue(s.empty());
		//    }

		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(s.size() == 513);

		//    for (int i = 0; i < 513; i++) {
		//        Assert::IsTrue(*(s.find(i)) == i);
		//    }

		//    int i = 0;
		//    for (auto it : s) {
		//        Assert::IsTrue(it == i);
		//        i++;
		//    }
		//    Assert::IsTrue(i == 513);

		//    i = 0;
		//    for (auto it = s.begin(); it != s.end(); ++it) {
		//        Assert::IsTrue(*it == i);
		//        ++i;
		//    }
		//    Assert::IsTrue(i == 513);

		//    s.clear();
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());
		//}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Hamza Shahid
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_g_tests)
	{
	public:



		//TEST_METHOD(hshahi2_test01)
		//{
		//    myset <int> s;

		//    Assert::IsTrue(s.size() == 0);            // 0 since nothing inserted yet
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(100));
		//    Assert::IsTrue(s.insert(101));
		//    Assert::IsTrue(s.insert(99));
		//    Assert::IsTrue(s.insert(70));

		//    Assert::IsTrue(s.size() == 4);
		//    Assert::IsTrue(s[101]);

		//    Assert::IsTrue(!s[107]);                   // not in the list
		//    Assert::IsTrue(s[100]);

		//    for (auto k = 120; k >= 95; k--)
		//    {
		//        //if (s.insert(k) == 99)
		//        //    Assert::IsTrue(!s.insert(99));     // not insert, already inserted
		//        //if (s.insert(k) == 100)
		//        //    Assert::IsTrue(!s.insert(100));    // not insert, already inserted
		//        //if (s.insert(k) == 101)
		//        //    Assert::IsTrue(!s.insert(101));    // not insert, already inserted

		//        Assert::IsTrue(s.insert(k));
		//    }

		//    Assert::IsTrue(s[107]);                    // now in the list
		//    Assert::IsTrue(s.size() == 23);
		//}
		TEST_METHOD(hshahi2_test02)
		{
			myset<string> s;

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("grape"));
			Assert::IsTrue(s.insert("banana"));

			myset<string> k;
			Assert::IsTrue(k.empty());

			k = s;                                  // copy contents and s into k 

			Assert::IsTrue(!k.empty());             // contains 3 elements 

			auto iterator = k.find("banana");

			Assert::IsTrue(iterator != k.end());
			Assert::IsTrue(*iterator == "banana");
			++iterator;                             // go to the next element on the list 

			Assert::IsTrue(iterator != k.end());
			Assert::IsTrue(*iterator == "grape");
			++iterator;

			Assert::IsTrue(iterator == k.end());   // reached the end of the list 
		}
		//TEST_METHOD(hshahi2_test03)
		//{
		//    myset<double> s;

		//    Assert::IsTrue(s.insert(20.4));
		//    Assert::IsTrue(s.insert(20.53));
		//    Assert::IsTrue(s.insert(20.7));
		//    Assert::IsTrue(s.insert(20.5));
		//    Assert::IsTrue(s.insert(20.05));
		//    Assert::IsTrue(s.insert(20.005));
		//    Assert::IsTrue(s.insert(20.79));

		//    Assert::IsTrue(!s.operator[](20.69));

		//    auto iterator = s.find(20.4);
		//    ++iterator;

		//    Assert::IsTrue(iterator != s.end());
		//    //Assert::IsTrue(!*iterator == 20.05);    // not second element on the list 
		//    Assert::IsTrue(*iterator == 20.005);
		//    ++iterator;

		//    Assert::IsTrue(*iterator == 20.05);

		//    while (iterator != s.end())
		//    {
		//        ++iterator;
		//    }

		//    Assert::IsTrue(iterator == s.end());

		//}
		TEST_METHOD(hshahi2_test04)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(-2));
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(0));
			Assert::IsTrue(!s.insert(1));
			Assert::IsTrue(s.insert(-1));

			Assert::IsTrue(s.operator[](1));

			auto iterator = s.find(-2);

			Assert::IsTrue(*iterator == -2);
			++iterator;

			Assert::IsTrue(*iterator == -1);
			Assert::IsTrue(iterator != s.end());

			s.clear();

			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.size() == 1);
		}
		TEST_METHOD(hshahi2_test05)
		{
			myset<string> s;

			Assert::IsTrue(s.begin() == s.end());

			Assert::IsTrue(s.insert("car"));
			Assert::IsTrue(s.insert("cars"));
			Assert::IsTrue(s.insert("plane"));

			myset<string> h = s;
			s.clear();                       // delete all elements inside s set

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);   // empty 

			Assert::IsTrue(h.size() == 3);
			Assert::IsFalse(h.empty());

			Assert::IsFalse(s["car"]);       // since s is empty it won't find anything
			Assert::IsTrue(h["car"]);        // found!! since elements of s are now in h

			h.clear();
		}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Joshua Edoimioya
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(iedoim2)
	{
	public:

		TEST_METHOD(iedoim2_01) // Test set with different data type(double), test s.clear(), test inserting
		{
			myset<double>  s;

			Assert::IsTrue(s.insert(55.5));
			Assert::IsTrue(s.insert(55.3));
			Assert::IsTrue(s.insert(54.8));
			Assert::IsTrue(s.insert(54.1));

			Assert::IsTrue(s.size() == 4);

			auto iter = s.find(55.12);

			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(55.5);

			Assert::IsTrue(iter2 != s.end());

			Assert::IsTrue(*iter2 == 55.5);

			s.clear();

			Assert::IsTrue(s.size() == 0);

			for (double i = 0; i < 5; i++)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 5);


		}
		TEST_METHOD(iedoim2_02) // Test size limits (100 data values in set), ++iter, 
		{
			myset<int>  s;

			for (int i = 0; i < 100; i++)
			{
				Assert::IsTrue(s.insert(i));
			}

			auto iter = s.find(-1);
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(100);
			Assert::IsTrue(iter == s.end());

			iter = s.find(50);

			Assert::IsTrue(*iter == 50);

			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 51);

			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 52);

			Assert::IsTrue(s.insert(101));

			iter = s.find(101);

			Assert::IsTrue(iter != s.end());

			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

		}
		TEST_METHOD(iedoim2_03) // Test if no duplicates, check find function
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("dog"));
			Assert::IsFalse(s.insert("dog"));
			Assert::IsTrue(s.size() == 1);

			Assert::IsTrue(s.insert("doggy"));
			Assert::IsTrue(s.size() == 2);

			Assert::IsFalse(s.insert("doggy"));
			Assert::IsTrue(s.size() == 2);

			s.clear();

			Assert::IsTrue(s.insert("dog"));
			Assert::IsTrue(s.size() == 1);

			Assert::IsFalse(s["apple"]);
			Assert::IsTrue(s["dog"]);

			Assert::IsFalse(s.insert("dog"));
			Assert::IsTrue(s.insert("dogs"));

			auto iter = s.find("dog");

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "dog");

		}
		TEST_METHOD(iedoim2_04) // Test copy constructor, deep copy
		{
			myset<string>  s;
			myset<string> s1;

			Assert::IsTrue(s.insert("dog"));
			Assert::IsTrue(s1.insert("dog"));


			Assert::IsTrue(s.insert("do"));
			Assert::IsTrue(s1.insert("do"));

			Assert::IsTrue(s.insert("cat"));
			Assert::IsTrue(s1.insert("cat"));

			s1 = s;
			myset<string> s2 = s;

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(s1.size() == 3);
			Assert::IsTrue(s2.size() == 3);

			s.clear();

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s1.size() == 3);
			Assert::IsTrue(s2.size() == 3);

			Assert::IsTrue(s.insert("dog"));
			Assert::IsTrue(s.size() == 1);

			s1.clear();

			Assert::IsTrue(s1.size() == 0);
			Assert::IsTrue(s1.empty());

		}
		TEST_METHOD(iedoim2_05) // Test begin(), end(), ++iterator, *dereferencing work properly
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(5));
			Assert::IsFalse(s.insert(5));
			Assert::IsFalse(s.empty());
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s.begin() != s.end());

			Assert::IsTrue(s.insert(3));

			auto iter = s.begin();

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 3);

			++iter;

			Assert::IsTrue(*iter == 5);

			++iter;

			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(22);

			Assert::IsTrue(iter2 == s.end());

			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_h_tests)
	{
	public:
		/*
		TEST_METHOD(your_netid_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		TEST_METHOD(your_netid_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(your_netid_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(your_netid_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(your_netid_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(your_netid_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}
		*/
		// tests dynamically growing array and keeping da
		TEST_METHOD(jarciv2test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(51));
			Assert::IsTrue(s.insert(49));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[30]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(s[51]);
			Assert::IsTrue(s[49]);
			Assert::IsTrue(!s[999]);;
		}
		// Test to add strings and dynamically grow array making sure we didnt lose data
		TEST_METHOD(jarciv2test02)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("strawberry"));
			Assert::IsTrue(s.insert("banana"));
			Assert::IsTrue(s.insert("orange"));
			Assert::IsTrue(s.insert("grape"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(s["grape"]);
			Assert::IsTrue(s["orange"]);
			Assert::IsTrue(s["banana"]);
			Assert::IsTrue(s["strawberry"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}
		// Test to see if we can traverse an array of string using iter 
		TEST_METHOD(jarciv2test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("dog"));
			Assert::IsTrue(s.insert("cat"));
			Assert::IsTrue(s.insert("goat"));
			Assert::IsTrue(s.insert("bird"));
			Assert::IsTrue(s.insert("duck"));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find("bird");

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "bird");
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "cat");
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "dog");
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "duck");
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "goat");
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find("lizard");
			Assert::IsTrue(iter2 == s.end());
		}
		// Test to test adding doubles and dynamically growing that array while 
		// keeping data and then using an iter to check if it successfully 
		// traverses doubles and equals s.end correctly
		TEST_METHOD(jarciv2test04)
		{
			myset<double>  s;

			Assert::IsTrue(s.insert(12.23));
			Assert::IsTrue(s.insert(71.67));
			Assert::IsTrue(s.insert(20.33));
			Assert::IsTrue(s.insert(2.88));
			Assert::IsTrue(s.insert(99.99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2.88);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2.88);
			iter = s.find(99.99);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99.99);
			++iter;
			Assert::IsTrue(iter == s.end());
		}
		// Insert 6 ints then check it wont insert a duplicate then check if 
		// s.begin() truly points to the first element in the array and then 
		// find the last element and use ++iter and then make sure s.end() points
		// correctly
		TEST_METHOD(jarciv2test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(33));
			Assert::IsTrue(s.insert(45));
			Assert::IsTrue(s.insert(99));
			Assert::IsTrue(s.insert(7));
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(36));
			Assert::IsTrue(!s.insert(99)); // added earlier

			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(7);

			Assert::IsTrue(iter == s.begin());
			Assert::IsTrue(*iter == 7);
			iter = s.find(99);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());
		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Julio Castaneda
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(jcasta24_tests)
	{
	public:

		TEST_METHOD(jcasta24_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(jcasta24_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(jcasta24_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(jcasta24_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(jcasta24_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(jcasta24_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(jcasta24_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(jcasta24_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}

		// Test clear method
		TEST_METHOD(jcasta24_test09)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("banana"));
			Assert::IsTrue(s.insert("orange"));
			Assert::IsTrue(s.size() == 3);

			s += "pear";
			auto iter = s.find("pear");
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(s.size() == 4);

			s.clear();
			Assert::IsTrue(s.size() == 0);
			auto iter2 = s.find("pear");
			Assert::IsTrue(iter2 == s.end());
		}

		// Test copy constructor
		TEST_METHOD(jcasta24_test10)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(555));
			Assert::IsTrue(s.insert(55));
			Assert::IsTrue(s.insert(5));

			myset<int> t(s);
			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = t.begin();
			Assert::IsTrue(iter != t.end());
			Assert::IsTrue(*iter == 5);
			++iter;
			Assert::IsTrue(iter != t.end());
			Assert::IsTrue(*iter == 55);
			++iter;
			Assert::IsTrue(iter != t.end());
			Assert::IsTrue(*iter == 555);
			++iter;
			Assert::IsTrue(iter == t.end());
		}

		// Test assig (=) operator
		TEST_METHOD(jcasta24_test11)
		{
			myset<int>  s;

			// Create s set
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(5));
			Assert::IsTrue(s.insert(55));
			Assert::IsTrue(s.find(5) != s.end());
			Assert::IsTrue(s.find(6) == s.end());

			// Create t set
			myset<int> t;
			Assert::IsTrue(t.insert(7));
			Assert::IsTrue(t.insert(77));
			Assert::IsTrue(t.find(7) != t.end());
			Assert::IsTrue(t.find(5) == t.end());

			// Copy s set to t set
			t = s;
			Assert::IsTrue(t.find(7) == t.end()); // find in t
			Assert::IsTrue(t.find(5) != t.end());
			Assert::IsTrue(s.find(5) != s.end()); // make sure no changes were made to s
			Assert::IsTrue(s.find(7) == s.end());

		}

		// Test iterators
		TEST_METHOD(jcasta24_test12)
		{
			myset<string>  s;
			auto iter = s.begin();
			auto iter2 = s.end();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(iter == iter2);
			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("banana"));
			Assert::IsTrue(s.insert("mango"));
			Assert::IsTrue(s.size() == 3);


			auto iter3 = s.begin();
			auto iter4 = s.end();

			Assert::IsTrue(iter != iter4);
			++iter3;
			Assert::IsTrue(iter3 != iter4);
			++iter3;
			Assert::IsTrue(iter3 != iter4);
			++iter3;
			Assert::IsTrue(iter3 == iter4);

		}


		// Test operators
		TEST_METHOD(jcasta24_test13)
		{
			myset<string>  s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			s += "apple";
			s += "apple";
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["orange"]);
			Assert::IsTrue(!s.insert("apple"));

			s += "orange";
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.insert("orange"));
			Assert::IsTrue(s["orange"]);
			Assert::IsTrue(!s["pear"]);

		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Jose Galeano
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(jgalea5_tests)
	{
	public:

		TEST_METHOD(jgalea5_test01)
		{
			myset<double>  s;

			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(8.00));

			Assert::IsTrue(s.size() == 1);

			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(42.00));

			Assert::IsTrue(s.size() == 2);

			Assert::IsTrue(s.insert(32));

			Assert::IsTrue(s.size() == 3);

			Assert::IsTrue(s.insert(24.00));

			Assert::IsTrue(s.size() == 4);

			Assert::IsTrue(!s.insert(42.00));
		}

		TEST_METHOD(jgalea5_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.empty());

			for (int i = 0; i < 20; i++)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(!s.insert(15));

			Assert::IsTrue(s[3]);

			Assert::IsTrue(s[15]);

			Assert::IsTrue(s[9]);

			Assert::IsTrue(s.size() == 20);

			Assert::IsTrue(s[19]);

			Assert::IsTrue(s[2]);
		}

		TEST_METHOD(jgalea5_test03)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.empty());

			for (int i = 0; i < 100; i++)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.insert(101));

			s.clear();

			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert(8));

			Assert::IsTrue(s.size() == 1);

			s.clear();

			Assert::IsTrue(s.insert(8));

			Assert::IsTrue(s.size() == 1);

			Assert::IsTrue(s.insert(4));

			Assert::IsTrue(s.size() == 2);
		}

		TEST_METHOD(jgalea5_test04)
		{

			myset<string>  s;

			Assert::IsTrue(s.insert("Kobe"));

			Assert::IsTrue(s.insert("Magic"));

			Assert::IsTrue(!s.insert("Kobe"));

			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert("West"));

			Assert::IsTrue(s.insert("Shaq"));

			auto iterator1 = s.find("Kobe");

			Assert::IsTrue(iterator1 == s.begin());

			Assert::IsTrue(iterator1 != s.end());

			Assert::IsTrue(s.size() == 4);

			auto iterator2 = s.find("Magic");

			Assert::IsTrue(iterator1 != iterator2);
		}


		TEST_METHOD(jgalea5_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(5));

			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(6));
			Assert::IsTrue(!s.insert(5));

			Assert::IsTrue(s.size() == 6);

			auto iterator1 = s.find(1);

			Assert::IsTrue(iterator1 == s.begin());

			for (int i = 1; i < 7; i++)
			{
				Assert::IsTrue(*iterator1 == i);
				++iterator1;
			}

			s.clear();
			Assert::IsTrue(s.size() == 0);
		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for myset data structure.
 //
 // Johnson Ogunyomi
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(joguny2_tests)
	{
	public:

		/* TEST_METHOD(your_netid_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		TEST_METHOD(your_netid_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(your_netid_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(your_netid_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(your_netid_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(your_netid_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		/*TEST_METHOD(your_netid_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}*/


		// test insert, size
		TEST_METHOD(joguny2_test01)
		{
			myset<double>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(4.5));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		// test the lookup[e], clear
		TEST_METHOD(joguny2_test02)
		{
			myset<string> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("cat"));
			Assert::IsTrue(s.insert("dog"));

			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s["dog"]);

			Assert::IsTrue(s.insert("horse"));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s["horse"]);

			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

		}

		// test find(e), begin()
		//TEST_METHOD(joguny2_test03)
		//{
		//    myset<int> s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(10));
		//    Assert::IsTrue(s.insert(20));
		//    Assert::IsTrue(s.insert(30));
		//    Assert::IsTrue(s.insert(40));

		//    Assert::IsTrue(s.size() == 3);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.begin();
		//    Assert::IsTrue(*iter == 10);
		//    auto iter2 = s.find(20);
		//    Assert::IsTrue(*iter2 == 20);
		//}

		//// test += operator
		//TEST_METHOD(joguny2_test04)
		//{
		//    myset<int> s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(10));
		//    Assert::IsTrue(s.insert(20));
		//    Assert::IsTrue(s.insert(30));
		//    Assert::IsTrue(s.insert(40));
		//    Assert::IsTrue(s.insert(50));
		//    Assert::IsTrue(s.insert(60));
		//    Assert::IsTrue(s.insert(70));
		//    Assert::IsTrue(s.insert(80));
		//    Assert::IsTrue(s.insert(90));
		//    Assert::IsTrue(s.insert(100));
		//    s += 15;
		//    s += 25;
		//    s += 35;
		//    s += 45;
		//    s += 55;
		//    s += 65;
		//    s += 75;
		//    s += 85;
		//    s += 95;
		//    s += 105;

		//    Assert::IsTrue(s.size() == 10);
		//    Assert::IsTrue(!s.empty());
		//}

		//// test iterator, and the * and != operator
		//TEST_METHOD(joguny2_test05)
		//{
		//    myset<int> s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(10));
		//    Assert::IsTrue(s.insert(20));
		//    Assert::IsTrue(s.insert(30));
		//    Assert::IsTrue(s.insert(40));
		//    Assert::IsTrue(s.insert(50));
		//    Assert::IsTrue(s.insert(60));
		//    Assert::IsTrue(s.insert(70));
		//    Assert::IsTrue(s.insert(80));
		//    Assert::IsTrue(s.insert(90));
		//    Assert::IsTrue(s.insert(100));
		//    s += 15;
		//    s += 25;
		//    s += 35;
		//    s += 45;
		//    s += 55;
		//    s += 65;
		//    s += 75;
		//    s += 85;
		//    s += 95;
		//    s += 105;

		//    auto iter = s.begin();
		//    Assert::IsTrue(*s.begin() == 10);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 10);

		//    ++iter;
		//    Assert::IsTrue(s.begin() != iter);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 15);

		//    Assert::IsTrue(s.size() == 10);
		//    Assert::IsTrue(!s.empty());

		//}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Josh Peterson
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(jpeter62_tests)
	{
	public:

		TEST_METHOD(jpeter62_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(jpeter62_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(jpeter62_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(jpeter62_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(jpeter62_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(jpeter62_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(jpeter62_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(jpeter62_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}

		TEST_METHOD(jpeter62_test09)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(14));
			Assert::IsTrue(s.insert(16));

			Assert::IsFalse(s.empty());
			Assert::IsTrue(s.size() > 2);
			Assert::IsTrue(s.size() > 3);
			Assert::IsFalse(s.size() > 4);

		}

		//TEST_METHOD(jpeter62_test10)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(10));
		//    Assert::IsTrue(s.insert(12));
		//    Assert::IsTrue(s.insert(14));

		//    auto iter = s.begin();
		//    Assert::IsTrue(*iter == 16);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 12);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 14);
		//    ++iter;
		//    Assert::IsTrue(iter == s.end());

		//}

		TEST_METHOD(jpeter62_test11)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("dog"));
			Assert::IsTrue(s.insert("cat"));
			Assert::IsTrue(s.insert("bird"));
			Assert::IsTrue(s.size() == 3);

			Assert::IsFalse(s.insert("dog"));
			Assert::IsFalse(s.insert("cat"));
			Assert::IsFalse(s.insert("bird"));
			Assert::IsTrue(s.size() == 3);

			auto iter = s.find("cat");

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(s["bird"]);


		}
		TEST_METHOD(jpeter62_test12)
		{
			myset<char>  s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert('1'));
			Assert::IsTrue(s.insert('2'));
			Assert::IsTrue(s.insert('3'));
			Assert::IsTrue(s.insert('4'));

			Assert::IsFalse(s.empty());
			Assert::IsTrue(s.size() == 4);

			auto iter = s.begin();

			while (iter != s.end())
			{
				//Assert::IsTrue(isdigit(*iter));
				++iter;
			}

			Assert::IsFalse(s['5']);
			//Assert::IsTrue(s.insert['5']);
			//Assert::IsTrue(s['5']);

		}

		TEST_METHOD(jpeter62_test13)
		{

			myset<int>  s;

			for (int i = 0; i < 200; i++)
			{
				Assert::IsTrue(s.insert(i + 1));
			}

			Assert::IsFalse(s.empty());

			auto iter = s.begin();
			Assert::IsTrue(iter != s.end());
			Assert::IsFalse(iter == s.end());

			int j = 1;

			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				j++;
			}

			Assert::IsTrue(iter == s.end());
			Assert::IsFalse(iter == s.begin());

			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.begin() == s.end());
			Assert::IsTrue(s.size() == 0);
		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for myset data structure.
 //
 // Jake TerHark
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(jterha2_tests)
	{
	public:

		TEST_METHOD(jterha2_test01) {
			myset<int> ints;
			Assert::IsTrue(ints.insert(10));
			Assert::IsTrue(ints.insert(20));
			Assert::IsTrue(ints.insert(30));

			int tot = 0;
			vector<int> test;
			for (int i : ints) {
				tot += i;
				test.push_back(i);
			}

			Assert::IsTrue(tot == 60);
			Assert::IsTrue(test[0] == 10);
			Assert::IsTrue(test[1] == 20);
			Assert::IsTrue(test[2] == 30);
			Assert::IsTrue(test.size() == 3);
			Assert::IsTrue(ints.size() == 3);

			ints.clear();

			tot = 0;
			for (int i : ints) {
				tot += i;
			}

			Assert::IsTrue(tot == 0);
		}

		TEST_METHOD(jterha2_test02) {
			myset<char> set;
			Assert::IsTrue(set.insert('C'));
			Assert::IsTrue(!set.empty());
			Assert::IsFalse(set.insert('C'));

			Assert::IsTrue(set.insert('Z'));
			Assert::IsTrue(set.size() == 2);

			//check if any static vars
			myset<int> set2;
			Assert::IsTrue(set2.empty());
			Assert::IsTrue(set2.begin() == set2.end());
			Assert::IsTrue(set2.insert(25));
			Assert::IsTrue(set2.insert('C'));
			Assert::IsTrue(set2['C']);
			set2 += 25;
			Assert::IsTrue(set2.size() == 2);
		}

		TEST_METHOD(jterha2_test03) {
			myset<string> strings;
			Assert::IsTrue(strings.insert("t"));
			Assert::IsTrue(strings.insert("e"));
			Assert::IsTrue(strings.insert("s"));
			Assert::IsFalse(strings.insert("t"));

			string test = "";
			for (auto s : strings) {
				test += s;
			}

			Assert::IsTrue(test == "est");
			Assert::IsTrue(strings.size() == 3);
			Assert::IsTrue(strings["t"]);
			Assert::IsTrue(strings.insert(test));
			Assert::IsTrue(strings.size() == 4);
			strings.clear();
			Assert::IsTrue(strings.size() == 0);
		}

		TEST_METHOD(jterha2_test04) {
			myset<double> set1;
			myset<double> set2;

			Assert::IsTrue(set1.insert(1.00));
			Assert::IsTrue(set1.insert(1.05));
			Assert::IsTrue(set1.insert(1.10));

			Assert::IsTrue(set2.insert(2.00));
			Assert::IsTrue(set2[2.00]);

			set2 = set1;

			Assert::IsFalse(set2[2.00]);
			Assert::IsTrue(set1.size() == 3);
			Assert::IsTrue(set2.size() == 3);
			Assert::IsTrue(set1[1.05]);
			Assert::IsTrue(set2[1.05]);
		}

		TEST_METHOD(jterha2_test05) {
			myset<int> set;
			int i;

			Assert::IsTrue(set.empty());

			for (i = 50; i > 0; --i) {
				Assert::IsTrue(set.insert(i));
			}

			for (i = 50; i > 0; --i) {
				Assert::IsFalse(set.insert(i));
			}

			Assert::IsTrue(*(set.begin()) == 1);
			Assert::IsFalse(set[0]);
			Assert::IsTrue(set[50]);
			Assert::IsTrue(set.size() == 50);

			i = 1;

			for (int x : set) {
				Assert::IsTrue(x == i);
				++i;
			}

			Assert::IsTrue(i == 51);
			set.clear();
			Assert::IsTrue(set.empty());
		}


		//  TEST_METHOD(your_netid_test01)
		//  {
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());
		//  }

		//  TEST_METHOD(your_netid_test02)
		//  {
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(12));

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());
		//  }

		//  TEST_METHOD(your_netid_test03)
		//  {
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert("apple"));

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s["apple"]);
		//  }
		//
		//  TEST_METHOD(your_netid_test04)
		//  {
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert("apple"));
		//    Assert::IsTrue(!s.insert("apple"));  // should not insert again

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s["apple"]);
		//    Assert::IsTrue(!s["pear"]);  // should not find
		//  }

		//TEST_METHOD(your_netid_test05)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(12));
		//    Assert::IsTrue(s.insert(71));
		//    s += 20;  // another way to insert:
		//    Assert::IsTrue(!s.insert(20));  // already inserted:

		//    Assert::IsTrue(s.size() == 3);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s[71]);
		//    Assert::IsTrue(s[12]);
		//    Assert::IsTrue(s[20]);
		//    Assert::IsTrue(!s[11]);
		//    Assert::IsTrue(!s[999]);;
		//  }

		//  TEST_METHOD(your_netid_test06)
		//  {
		//    myset<int>  s;

		//    Assert::IsTrue(s.insert(10));
		//    Assert::IsTrue(s.insert(20));
		//    Assert::IsTrue(s.insert(30));

		//    Assert::IsTrue(s.size() == 3);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find(20);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 20);

		//    auto iter2 = s.find(40);
		//    Assert::IsTrue(iter2 == s.end());
		//  }

		//  TEST_METHOD(your_netid_test07)
		//  {
		//    myset<int>  s;

		//    Assert::IsTrue(s.insert(12));
		//    Assert::IsTrue(s.insert(71));
		//    Assert::IsTrue(s.insert(20));
		//    Assert::IsTrue(s.insert(2));
		//    Assert::IsTrue(s.insert(99));

		//    Assert::IsTrue(s.size() == 5);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find(2);

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 2);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 12);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 20);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 71);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 99);
		//    ++iter;
		//    Assert::IsTrue(iter == s.end());

		//    auto iter2 = s.find(1);
		//    Assert::IsTrue(iter2 == s.end());
		//  }

		//  TEST_METHOD(your_netid_test08)
		//  {
		//    myset<int>  s;

		//    for (int i = 1000; i >= 100; --i)
		//    {
		//      Assert::IsTrue(s.insert(i));
		//    }

		//    Assert::IsTrue(s.size() == 901);
		//    Assert::IsTrue(!s.empty());

		//    int j = 100;
		//    auto iter = s.begin();
		//    while (iter != s.end())
		//    {
		//      Assert::IsTrue(*iter == j);
		//      ++iter;
		//      ++j;
		//    }

		//    int k = 100;
		//    for (auto x : s)
		//    {
		//      Assert::IsTrue(x == k);
		//      ++k;
		//    }
		//  }


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // JAMES TRINH - jtrinh3
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(jtrinh3_tests)
	{
	public:

		TEST_METHOD(jtrinh3_test01)
		{ //test insertion order + clear
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(13));

			Assert::IsTrue(s.size() == 2);

			Assert::IsTrue(s.insert(9));

			Assert::IsTrue(s[10]);
			Assert::IsFalse(s[12]);

			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(jtrinh3_test02)
		{ //test the order of insertion
			myset<int> int1;
			myset<int> int2;

			Assert::IsTrue(int1.size() == 0);
			Assert::IsTrue(int1.empty());
			Assert::IsTrue(int2.size() == 0);
			Assert::IsTrue(int2.empty());

			for (int i = 5; i >= 0; i--)
				Assert::IsTrue(int1.insert(i));

			for (int i = 0; i <= 5; i++)
				Assert::IsTrue(int2.insert(i));

			Assert::IsTrue(int1.size() == 6);
			Assert::IsTrue(int2.size() == 6);

			for (int i = 0; i <= 5; i++) {
				Assert::AreEqual(int2[i], int1[i]);
			}
		}

		TEST_METHOD(jtrinh3_test03)
		{
			myset<double> double1;
			myset<double> double2;

			Assert::IsTrue(double1.size() == 0);
			Assert::IsTrue(double1.empty());
			Assert::IsTrue(double2.size() == 0);
			Assert::IsTrue(double2.empty());

			Assert::IsTrue(double1.insert(1.71));
			Assert::IsTrue(double1.insert(7.25));

			Assert::IsTrue(double1.size() == 2);

			double2 = double1;

			Assert::IsTrue(double2[0] == double1[0]);
			Assert::IsTrue(double2[1] == double1[1]);
		}

		TEST_METHOD(jtrinh3_test04)
		{
			myset<int> s;

			Assert::IsTrue(s.insert(8));
			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(16));
			Assert::IsTrue(s.insert(23));
			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(42));

			s += 420;
			s += 69;

			Assert::IsTrue(s[420]);
			Assert::IsTrue(s[4]);

			auto iter = s.begin();
			Assert::IsTrue(iter != s.end());
			++iter;
			Assert::IsTrue(iter != s.end());
			++iter;
			Assert::IsTrue(*iter == 15);
		}

		TEST_METHOD(jtrinh3_test05)
		{
			myset<string> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("dank"));
			Assert::IsTrue(s.insert("memes"));

			Assert::IsTrue(!s.insert("dank"));

			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(!s["pcmr"]);
			Assert::IsTrue(s.insert("darthPlagueis"));
			Assert::IsTrue(!s["theWise"]);
		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(jwalle9_tests)
	{
	public:

		TEST_METHOD(jwalle9_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(jwalle9_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(jwalle9_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(jwalle9_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(jwalle9_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(jwalle9_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(jwalle9_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(jwalle9_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}

		/*Start My Tests*/

		TEST_METHOD(jwalle9_test09) {
			myset<int> s;
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);


			const int numElems = 10000;
			for (int i = 0; i < numElems; i++) {
				Assert::IsTrue(s.size() == i);
				Assert::IsTrue(s.insert(i));
			}

			for (int i = 0; i < numElems; i++) {
				Assert::IsFalse(s.insert(i));
			}

			for (int i = 0; i < numElems; i++) {
				Assert::IsTrue(s[i]);
			}
			s.clear();

			Assert::IsTrue(s.empty());
			for (int i = 0; i < numElems; i++) {
				Assert::IsFalse(s[i]);
			}


		}

		TEST_METHOD(jwalle9_test10) {
			myset<int> s;
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			int numElems = 10000;
			for (int x = 0; x < numElems; x++) {
				Assert::IsTrue(s.size() == x);
				Assert::IsTrue(s.insert(x));
			}

			Assert::IsTrue(s.size() == numElems);

			for (int x = 0; x < numElems; x++) {
				Assert::IsTrue(*s.find(x) == x);
			}
			Assert::IsTrue(s.find(numElems) == s.end());
			Assert::IsTrue(s.find(-1) == s.end());

			s.clear();

			for (int x = 0; x < numElems; x++) {
				Assert::IsTrue(s.find(x) == s.end());
			}

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(jwalle9_test11) {
			myset<int> s;
			myset<int> t;
			Assert::IsTrue(s.empty());
			Assert::IsTrue(t.empty());

			const int numElems = 10000;

			for (int x = 0; x < numElems; x++) {
				Assert::IsTrue(s.insert(x));
				Assert::IsTrue(s[x]);
			}

			Assert::IsFalse(s.empty());
			Assert::IsTrue(t.empty());
			t = s;
			Assert::IsFalse(t.empty());

			for (int x = 0; x < numElems; x++) {
				Assert::IsTrue(t[x]);
				Assert::IsTrue(t.find(x) != t.end());
			}

			s.clear();

			Assert::IsFalse(t.empty());
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(jwalle9_test12) {
			myset<int> s;
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			s.insert(1);
			s.insert(2);
			auto it = s.begin();
			Assert::IsTrue(*it == 1);
			++it;
			Assert::IsTrue(*it == 2);
			++it;
			Assert::IsTrue(it == s.end());

			it = s.begin();
			++it;
			auto l = s.find(2);
			Assert::IsTrue(it == l);

			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.find(1) == s.end());
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.find(1) != s.end());
		}

		//TEST_METHOD(jwalle9_test13) {
		//    myset<int> s;
		//    const int num = 100000;
		//    for (int x = 0; x < num; x++) {
		//        Assert::IsTrue(s.empty());
		//        Assert::IsTrue(s.size() == 0);
		//        Assert::IsTrue(s.insert(1));
		//        Assert::IsTrue(s.size() == 1);
		//        Assert::IsFalse(s.empty());
		//        s.clear();
		//    }

		//    for (int x = 0; x < num; x++) {
		//        Assert::IsTrue(s.size() == x);
		//        Assert::IsTrue(s.insert(x));
		//    }

		//    Assert::IsFalse(s.insert(1));
		//    Assert::IsFalse(s.empty());
		//    s.clear();
		//    Assert::IsTrue(s.empty());
		//}



	};
}
//--------------------------------------------
//my unit tests start

namespace MyMapUnitTests
{
	TEST_CLASS(jwarda4_tests)
	{
	public:
		//test sees if inserting a double works
		TEST_METHOD(jwarda4_test01) {
			myset<double>  s;

			//ceck to make sure the size and empty functions work
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());


			//start by inserting a few random doubles
			Assert::IsTrue(s.insert(0.8));
			Assert::IsTrue(s.insert(0.88556));
			Assert::IsTrue(s.insert(0.851515615616516516));
			Assert::IsTrue(s.insert(0.000009));
			Assert::IsTrue(s.insert(158.8));
			Assert::IsTrue(s.insert(111188888.8));

			//inserting a int should fail
			//Assert::IsTrue(!s.insert);

			double count = 0.0;
			//now test large amounts of inserts for double
			for (int i = 0; i < 800; i++) {
				Assert::IsTrue(s.insert(count));
				count++;
			}
		}

		//test checks for float inserts and size
		TEST_METHOD(jwarda4_test02) {
			myset<double>  s;

			//ceck to make sure the size and empty functions work
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());


			//start by inserting a few random doubles
			Assert::IsTrue(s.insert(0.8));
			Assert::IsTrue(s.insert(0.88556));
			Assert::IsTrue(s.insert(0.851515615616516516));
			Assert::IsTrue(s.insert(0.000009));
			Assert::IsTrue(s.insert(158.8));
			Assert::IsTrue(s.insert(111188888.8));

			//inserting a int should fail
			//Assert::IsTrue(!s.insert);

			//clear and make sure it worked
			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());


		}

		//test checks for vector inserts and size
		TEST_METHOD(jwarda4_test03) {
			myset<vector<int>>  s;
			vector<int> testVec = vector<int>();

			//first lets make sure the set is empty
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			//insert some data in to the vector
			testVec.push_back(1);
			testVec.push_back(2);
			testVec.push_back(3);

			//now try and push the vector on to the set
			Assert::IsTrue(s.insert(testVec));

			//now we shoubld have one item in the list
			Assert::IsTrue(s.size() == 1);

			//clear the list and make sure that still works
			s.clear();

			//check to make sure the clear went through
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			//now inset the same vector twice and make sure it fails
			Assert::IsTrue(s.insert(testVec));
			Assert::IsTrue(!s.insert(testVec));

			//add to vector to see if it will go through
			testVec.push_back(4);
			Assert::IsTrue(s.insert(testVec));

			//make sure the size is two now
			Assert::IsTrue(s.size() == 2);

		}

		//test checks for vector inserts and size with vector of strings
		TEST_METHOD(jwarda4_test04) {
			myset<vector<string>>  s;
			vector<string> testVec = vector<string>();

			//first lets make sure the set is empty
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			//insert some data in to the vector
			testVec.push_back("james");
			testVec.push_back("is");
			testVec.push_back("cool");

			//now try and push the vector on to the set
			Assert::IsTrue(s.insert(testVec));

			//now we shoubld have one item in the list
			Assert::IsTrue(s.size() == 1);

			//clear the list and make sure that still works
			s.clear();

			//check to make sure the clear went through
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			//now inset the same vector twice and make sure it fails
			Assert::IsTrue(s.insert(testVec));
			Assert::IsTrue(!s.insert(testVec));

			//add to vector to see if it will go through
			testVec.push_back("this should work");
			Assert::IsTrue(s.insert(testVec));

			//make sure the size is two now
			Assert::IsTrue(s.size() == 2);

		}

		//function tests for vector of doubles
		TEST_METHOD(jwarda4_test05) {
			myset<vector<double>>  s;
			vector<double> testVec = vector<double>();

			//first lets make sure the set is empty
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			//insert some data in to the vector
			testVec.push_back(0.2);
			testVec.push_back(0.5);
			testVec.push_back(0.8);

			//now try and push the vector on to the set
			Assert::IsTrue(s.insert(testVec));

			//now we shoubld have one item in the list
			Assert::IsTrue(s.size() == 1);

			//clear the list and make sure that still works
			s.clear();

			//check to make sure the clear went through
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			//now inset the same vector twice and make sure it fails
			Assert::IsTrue(s.insert(testVec));
			Assert::IsTrue(!s.insert(testVec));

			//add to vector to see if it will go through
			testVec.push_back(0.888999999);
			Assert::IsTrue(s.insert(testVec));

			//make sure the size is two now
			Assert::IsTrue(s.size() == 2);
		}

	};
}
//--------------------------------------------
//my unit tests end/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// Kyle Aguilar
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//










namespace MyMapUnitTests
{
	TEST_CLASS(kaguil6_tests)
	{
	public:

		TEST_METHOD(kaguil6_test1)
		{

			myset<int> s = myset<int>(); // empty constructor

			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(100));
			//s += 200;
			s.operator+=(200); //another way to insert
			Assert::IsTrue(!s.insert(200)); // don't insert 200 twice
			Assert::IsTrue(s.insert(150));
			Assert::IsTrue(s.insert(175));

			myset<int> s2 = myset<int>(s); // (shallow) copy constructor
			Assert::IsTrue(s2.size() == 4);

			Assert::IsFalse(s.size() == 3);
			Assert::IsTrue(s.size() == 4);

			Assert::IsTrue(s.operator[](175));
			Assert::IsTrue(s[150]);
			Assert::IsFalse(s[176]);

			auto iter = s.begin();
			Assert::IsTrue(*iter == 100);

			s.clear();
			Assert::IsFalse(s.size() != 0);

		}

		//TEST_METHOD(kaguil6_test2)
		//{

		//    myset<char> s;

		//    Assert::IsTrue(s.empty());

		//    //inserting the alphabet based on values of ASCII table
		//    for (int i = 65; i <= 90; i++) {
		//        Assert::IsTrue(s.insert((char)i));
		//    }

		//    Assert::IsTrue(s.size() == 26);

		//    Assert::IsFalse(s['c']);
		//    Assert::IsTrue(s['C']);

		//    auto iter = s.find('A');
		//    int letter = 65;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsFalse(iter.operator==(s.end()));
		//    Assert::IsTrue(iter == s.begin());
		//    while (iter != s.end()) {
		//        Assert::IsTrue(*iter == (char)letter);
		//        ++iter; //infinite loop
		//    }


		//    Assert::IsFalse(s.empty());
		//    s.clear();
		//    Assert::IsTrue(s.size() == 0);

		//}


		TEST_METHOD(kaguil6_test3)
		{

			myset<string> s;
			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert("there"));
			Assert::IsTrue(s.insert("hello"));
			Assert::IsTrue(s.insert("world"));
			Assert::IsTrue(!s.insert("world")); //don't insert "world" twice

			Assert::IsFalse(s["Hello"]);
			Assert::IsTrue(s["hello"]);
			Assert::IsTrue(s["world"]);

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 3);

		}

		TEST_METHOD(kaguil6_test4)
		{

			myset<int> s;

			Assert::IsFalse(!s.empty());

			for (int i = 1; i < 101; i++) {
				Assert::IsTrue(s.insert(i));
			}

			auto iter = s.find(2);
			int num = 2;

			while (iter != s.end()) {
				Assert::IsTrue(*iter == num);
				//Another way of advancing the iterator
				iter.operator++();
				++num;
			}

			Assert::IsTrue(s.size() == 100);

			Assert::IsTrue(s[3]);
			Assert::IsTrue(s[58]);
			Assert::IsTrue(s[68]);
			Assert::IsFalse(s[101]);
			Assert::IsFalse(s[-1]);

			s.clear();
			Assert::IsTrue(s.size() == 0);

		}

		//TEST_METHOD(kaguil6_test5)
		//{

		//    myset<int> s;

		//    Assert::IsTrue(s.empty());

		//    //insert all even numbers up to 500 starting at 2
		//    for (int i = 2; i <= 500; i += 2) {
		//        Assert::IsTrue(s.insert(i));
		//    }

		//    Assert::IsTrue(s.size() > 0);

		//    Assert::IsTrue(s[50]);
		//    Assert::IsTrue(!s[37]);
		//    Assert::IsFalse(s[11]);

		//    auto iter = s.find(46);
		//    //Another way of testing if iter is at the end
		//    Assert::IsTrue(iter.operator!=(s.end()));
		//    int i = 46;

		//    while (iter != s.end()) {
		//        Assert::IsTrue(iter != s.end());
		//        Assert::IsTrue(*iter == 46);
		//        //Another way to dereference iterator
		//        Assert::IsTrue(iter.operator*() == 46);
		//        ++iter;
		//        i += 2;
		//    }
		//    Assert::IsTrue(iter == s.end());
		//    Assert::IsTrue(iter.operator==(s.end()));

		//    auto iter2 = s.find(501);
		//    Assert::IsTrue(iter2 == s.end());

		//}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_r_tests)
	{
	public:



		TEST_METHOD(kburks2_test01)
		{
			myset<int>  s;
			Assert::IsTrue(s.empty());

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(!s.insert(1000));

			auto itr = (s.begin());
			Assert::IsTrue(*itr == 100);
			int i = 0;
			while (i < 200) {
				++itr;
				++i;
			}
			Assert::IsTrue(*itr == 300);
			Assert::IsTrue(!s[99]);
			Assert::IsTrue(!s[1]);
			Assert::IsTrue(s[100]);
		}

		TEST_METHOD(kburks2_test02)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("fo"));
			Assert::IsTrue(s.insert("foo"));
			Assert::IsTrue(s.insert("fooo"));  // should not insert again

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["fo"]);
			Assert::IsTrue(s["foo"]);
			Assert::IsTrue(s["fooo"]);  // should not find
		}

		TEST_METHOD(kburks2_test03)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			int i = 0, j = 0;

			Assert::IsTrue(s.insert(i));

			while (j < 100) {
				Assert::IsTrue(!s.insert(i));
				j++;
			}

			Assert::IsTrue(!s.insert(0));
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));

			auto itr = s.find(1);
			Assert::IsTrue(*itr == 1);
			++itr;
			Assert::IsTrue(*itr == 2);

			itr = s.end();
			//Assert::IsTrue(*itr != 4);

			Assert::IsTrue(!s.empty());

		}

		//TEST_METHOD(kburks_test04) {

		//    myset<float> s;

		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(12.5));
		//    Assert::IsTrue(s.insert(71.1));
		//    Assert::IsTrue(s.insert(20.2));
		//    Assert::IsTrue(s.insert(2.3));
		//    Assert::IsTrue(s.insert(99.4));

		//    Assert::IsTrue(s.size() == 5);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find(2.3);

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 2.3);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 12.5);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 20.2);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 71.1);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 99.4);
		//    ++iter;
		//    Assert::IsTrue(iter == s.end());

		//    auto iter2 = s.find(1.0);
		//    Assert::IsTrue(iter2 == s.end());

		//}

		//TEST_METHOD(kburks_test05) {

		//    myset<int> s;

		//    Assert::IsTrue(s.empty());

		//    for (int i = 0; i <= 500; ++i)
		//    {
		//        Assert::IsTrue(s.insert(i));
		//    }

		//    Assert::IsTrue(s.size() == 501);
		//    Assert::IsTrue(!s.empty());

		//    int j = 0;
		//    auto iter = s.begin();
		//    while (iter != s.end())
		//    {
		//        Assert::IsTrue(*iter == j);
		//        ++iter;
		//        ++j;
		//    }

		//    int k = 20;
		//    for (auto x : s)
		//    {
		//        Assert::IsTrue(!x == k);
		//        ++k;
		//    }

		//}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(kfan9)
	{
	public:


		TEST_METHOD(kfan9_01)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(-1));
			Assert::IsTrue(s.insert(0));
			Assert::IsTrue(s.size() == 2);

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(100));
			Assert::IsTrue(s.insert(1000));

			Assert::IsTrue(!s.insert(10));

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 5);

			Assert::IsTrue(!s[50]);
		}

		TEST_METHOD(kfan9_02)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(!(s.size() == 1));

			Assert::IsTrue(s.insert(0));
			Assert::IsTrue(s.insert(100));
			Assert::IsTrue(!(s.size() == 0));

			Assert::IsTrue(!s.empty());

			Assert::IsTrue(!s[500]);
			Assert::IsTrue(!s[1000]);;
		}

		TEST_METHOD(kfan9_03)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(!(s.size() == 1));

			s += 100;
			s += 0;
			Assert::IsTrue(!s.insert(0));

			Assert::IsFalse(s.empty());

			Assert::IsTrue(s[0]);
			Assert::IsTrue(s[100]);;

			Assert::IsFalse(!s[0]);
			Assert::IsFalse(!s[100]);;

			Assert::IsFalse(s[1]);
			Assert::IsFalse(s[101]);;
		}

		//TEST_METHOD(kfan9_04)
		//{
		//    myset<int> s;

		//    for (int i = 0; i <= 100; ++i)
		//    {
		//        Assert::IsTrue(s.insert(i + 100));
		//        Assert::IsTrue(s.size() == i);
		//    }

		//    for (int i = 0; i <= 100; ++i)
		//    {
		//        Assert::IsTrue(s[i + 100]);
		//    }

		//    for (int i = 0; i <= 100; ++i)
		//    {
		//        Assert::IsTrue(!s[i]);
		//    }

		//    auto iter = s.find(110);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 110);

		//    //auto iter = s.find(201);
		//    //Assert::IsTrue(iter != s.end());
		//    //Assert::IsTrue(!(*iter == 201));
		//}

		TEST_METHOD(kfan9_05)
		{
			myset<string> s;

			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("Today"));
			Assert::IsTrue(s.insert("Is"));
			Assert::IsTrue(s.insert("A"));
			Assert::IsTrue(s.insert("Good"));
			Assert::IsTrue(s.insert("Day"));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.size() == 0);

			Assert::IsTrue(!s["today"]);
			Assert::IsTrue(!s["is"]);
			Assert::IsTrue(!s["a"]);
			Assert::IsTrue(!s["good"]);
			Assert::IsTrue(!s["day"]);

			s += "I Think So";
			Assert::IsTrue(s["I Think So"]);
			Assert::IsTrue(s.size() == 6);


		}

	};
}



/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// Karol Grycuk 679725089
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(kgrycu2)
	{
	public:


		TEST_METHOD(kgrycu201)
		{
			myset<int>  s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			s.insert(1);
			Assert::IsTrue(s.size() != 0);
			Assert::IsTrue(!s.empty());
			s.insert(1);
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
			s += 1;
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(kgrycu202)
		{
			myset<string>  s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert("doonk"));
			Assert::IsTrue(s.insert("boonk"));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.insert("doonk"));
			Assert::IsTrue(!s["a"]);
			auto a = s.find("boonk");
			Assert::IsTrue(a != s.end());
			Assert::IsTrue(*a == "boonk");
			s.clear();
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(kgrycu203)
		{
			myset<int>  s;
			s += 69696969;
			s += 99999999;
			s += 69696969;
			s += 99999999;
			s += 99696969;
			s += 99999699;
			s += 69696699;
			s += 66996699;
			s += 69996999;
			s += 99696969;
			s += 69696969;
			s += 99999999;
			s += 99696969;
			s += 99999699;
			s += 69696699;
			s += 66996699;
			s += 69996999;
			s += 99999699;
			s += 69696699;
			s += 69696969;
			s += 99999999;
			s += 99696969;
			s += 99999699;
			s += 69696699;
			s += 66996699;
			s += 69996999;
			s += 66996699;
			s += 69996999;
			s += 69696969;
			s += 99999999;
			s += 69696969;
			s += 99999999;
			s += 99696969;
			s += 99999699;
			s += 69696699;
			s += 69696969;
			s += 99999999;
			s += 99696969;
			s += 99999699;
			s += 69696699;
			s += 66996699;
			s += 69996999;
			s += 66996699;
			s += 69996999;
			s += 99696969;
			s += 99999699;
			s += 69696699;
			s += 66996699;
			s += 69996999;


			Assert::IsTrue(s.size() == 7);

			auto a = s.find(66996699);

			Assert::IsTrue(a != s.end());
			Assert::IsTrue(*a == 66996699);
			//a++;
			++a;
			Assert::IsTrue(a != s.end());
			Assert::IsTrue(*a == 69696699);
			//a++;
			++a;
			Assert::IsTrue(a != s.end());
			Assert::IsTrue(*a == 69696969);
			++a;
			Assert::IsTrue(a != s.end());
			Assert::IsTrue(*a == 69996999);
			++a;
			Assert::IsTrue(a != s.end());
			Assert::IsTrue(*a == 99696969);
			++a;
			Assert::IsTrue(a != s.end());
			Assert::IsTrue(*a == 99999699);
			++a;
			Assert::IsTrue(a != s.end());
			Assert::IsTrue(*a == 99999999);
			++a;
			Assert::IsTrue(a == s.end());

		}

		TEST_METHOD(kgrycu204)
		{
			myset<char>  s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			s += 'd';
			s += 'c';
			s += 'b';
			s += 'a';
			auto x = s.begin();
			Assert::IsTrue(*x == 'a');
			Assert::IsTrue(s.size() == 4);
			myset<char> s2 = s;
			auto b = s2.begin();
			Assert::IsTrue(*b == 'a');
			//Assert::IsTrue(b.size() == 4);
			//b++;
			//x++;
			++b;
			++x;
			Assert::IsTrue(*b == 'b');
			Assert::IsTrue(*x == 'b');
			s.clear();
			s2.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.empty());

		}

		TEST_METHOD(kgrycu205)
		{
			myset<int>  s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			s += 111;
			s += 37;
			s += 74;
			Assert::IsTrue(s[37]);
			auto a = s.find(37);
			Assert::IsTrue(a != s.end());
			Assert::IsTrue(s.size() == 3);
			int g = 37;
			for (auto b : s)
			{
				Assert::IsTrue(g == b);
				g = g + 37;
			}


			myset<int> steak = s;

			Assert::IsTrue(steak[74]);
			auto q = steak.find(74);
			Assert::IsTrue(q != steak.end());
			Assert::IsTrue(steak.size() == 3);
			int z = 37;
			for (auto b : steak)
			{
				Assert::IsTrue(z == b);
				z = z + 37;
			}




		}


	};
}
/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// Kyle Kirby
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(kskirby2_tests)
	{
	public:



		/*==========================================================================================
		Begin my tests

		*/
		TEST_METHOD(kskirby2_test01)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("a"));
			Assert::IsTrue(s.insert("b"));
			Assert::IsTrue(s.insert("c"));
			Assert::IsTrue(s.insert("q"));
			Assert::IsTrue(s.insert("z"));
			Assert::IsTrue(s.insert("d"));
			Assert::IsTrue(s.insert("e"));

			Assert::IsTrue(s.size() == 7);

			int i = 0;
			for (auto &str : s) {
				if (i == 2) {
					Assert::IsTrue(str == "c");
				}
				else if (i == 6)
					Assert::IsTrue(str == "z");
				i++;
			}
		}

		//TEST_METHOD(kskirby2_test02)
		//{
		//    myset<int> s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(500));
		//    Assert::IsTrue(s.insert(300));
		//    Assert::IsFalse(s.insert(300));
		//    Assert::IsTrue(s.insert(3));
		//    Assert::IsTrue(s.insert(4));
		//    Assert::IsTrue(s.size() == 4);

		//    auto it = s.begin();
		//    Assert::IsTrue(*it == 3);
		//    ++it;
		//    Assert::IsTrue(*it == 300);
		//}


		//TEST_METHOD(kskirby2_test03)
		//{
		//    myset<double> s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(0));
		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(s.insert(0.25));
		//    Assert::IsTrue(s.insert(0.75));

		//    Assert::IsTrue(s.size() == 4);

		//    auto s2 = s;

		//    Assert::IsTrue(s.size() == 4);
		//    Assert::IsFalse(s.empty());

		//    auto it = s.begin();
		//    ++it;
		//    auto it2 = s2.begin();
		//    ++it;
		//    Assert::IsTrue(*it == *it2);


		//}

		//TEST_METHOD(kskirby2_test04)
		//{
		//    myset<myset<int>*> sets;


		//    myset<int>* s = new myset<int>();


		//    Assert::IsTrue(s->size() == 0);
		//    Assert::IsTrue(s->empty());

		//    Assert::IsTrue(s->insert(0));
		//    Assert::IsTrue(s->insert(1));

		//    Assert::IsTrue(sets.insert(s));
		//    Assert::IsTrue(sets.size() == 1);
		//    Assert::IsFalse(sets.empty());

		//    auto it = sets.begin();

		//    Assert::IsNotNull(*it);
		//    Assert::IsTrue(*it == s);
		//    delete s;
		//    Assert::IsNull(*it);


		//}


		//TEST_METHOD(kskirby2_test05)
		//{
		//    myset<int> s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(4));
		//    Assert::IsTrue(s.insert(1));

		//    myset<int> s2;
		//    s2 = s;

		//    Assert::IsTrue(s2.size() == 2);
		//    Assert::IsFalse(s2.empty());

		//    s.clear();

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s2.size() == 2);
		//    Assert::IsFalse(s2.empty());



		//}



		/*=============================================================================================
		End my tests

		*/


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Ken WU
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_i_tests)
	{
	public:


		//test if myset() can handle various types 
		TEST_METHOD(kwu3_test01) {
			myset<int>  i;
			myset<string> s;
			myset<char> c;
			myset<double> d;
			myset<bool> b;

			Assert::IsTrue(i.size() == 0);
			Assert::IsTrue(i.empty());

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(c.size() == 0);
			Assert::IsTrue(c.empty());

			Assert::IsTrue(d.size() == 0);
			Assert::IsTrue(d.empty());

			Assert::IsTrue(b.size() == 0);
			Assert::IsTrue(b.empty());
		}

		//test if myset can hande the insert of various types of insert()
		TEST_METHOD(kwu3_test02) {
			myset<int>  i;
			myset<string> s;
			myset<char> c;
			myset<double> d;
			myset<bool> b;

			Assert::IsTrue(i.insert(2));
			Assert::IsTrue(i.insert(4));
			Assert::IsTrue(i.size() == 2);


			Assert::IsTrue(s.insert("testing"));
			Assert::IsTrue(s.insert("again"));
			Assert::IsTrue(s.size() == 2);

			Assert::IsTrue(c.insert('C'));
			Assert::IsTrue(c.insert('D'));
			Assert::IsTrue(c.size() == 2);

			Assert::IsTrue(d.insert(0.5));
			Assert::IsTrue(d.insert(100.6));
			Assert::IsTrue(d.size() == 2);

			Assert::IsTrue(b.insert(true));
			Assert::IsTrue(b.insert(false));
			Assert::IsTrue(b.size() == 2);

		}


		//test if instert() can handle all insert from back in a row and incease array size and count element right
		TEST_METHOD(kwu3_test03) {
			myset<int> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(1));

			s += 2;
			Assert::IsTrue(!s.insert(2));
			Assert::IsTrue(!s.insert(2));

			Assert::IsTrue(s.insert(4));
			s += 4;

			Assert::IsTrue(s.insert(8));

			Assert::IsTrue(s.insert(16));

			s += 32;

			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

		}

		//test push all in front in a row and edge test not insert at the edge of array grow
		TEST_METHOD(kwu3_test04) {
			myset<int> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(9));
			Assert::IsTrue(s.insert(8));
			Assert::IsTrue(!s.insert(8));
			Assert::IsTrue(s.size() == 4);

			Assert::IsTrue(s.insert(7));
			Assert::IsTrue(s.insert(6));

			Assert::IsTrue(s.size() == 6);

		}


		//test random insert over array size along with [], find() founctions. also, the array is in ascending order.   
		TEST_METHOD(kwu3_test05) {
			myset<int> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(22));
			Assert::IsTrue(s.insert(33));
			Assert::IsTrue(s.insert(44));
			Assert::IsTrue(!s.insert(44));
			Assert::IsTrue(s.insert(55));
			Assert::IsTrue(s.insert(11));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[11]);
			Assert::IsTrue(s[33]);
			Assert::IsTrue(s[22]);
			Assert::IsTrue(!s[66]);
			Assert::IsTrue(!s[77]);

			auto iter33 = s.find(33);
			Assert::IsTrue(iter33 != s.begin());
			Assert::IsTrue(iter33 != s.end());
			Assert::IsTrue(*iter33 == 33);

			auto iter55 = s.find(55);
			Assert::IsTrue(iter55 != s.begin());
			Assert::IsTrue(iter55 != s.end());

			auto iter11 = s.find(11);
			Assert::IsTrue(iter11 != s.end());
			Assert::IsTrue(iter11 == s.begin());

			auto iter66 = s.find(66);
			Assert::IsTrue(iter66 != s.begin());
			Assert::IsTrue(iter66 == s.end());

		}








	};
}
/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// Kareem Yacoub
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MySetUnitTests
{
	TEST_CLASS(kyacou2_tests)
	{
	public:

		TEST_METHOD(kyacou2_test1)
		{
			myset<int> set;

			Assert::IsTrue(set.insert(1));
			Assert::IsTrue(set.insert(3));
			Assert::IsTrue(set.insert(2));
			Assert::IsTrue(set.insert(4));
			Assert::IsTrue(set.insert(0));

			Assert::IsTrue(set.size() == 5);

			Assert::IsTrue(!set.empty());

			auto iter = set.begin();

			Assert::IsTrue(*iter == 0);

			++iter;

			Assert::IsTrue(*iter == 1);

			++iter;

			Assert::IsTrue(*iter == 2);

			++iter;

			Assert::IsTrue(*iter == 3);

			++iter;

			Assert::IsTrue(*iter == 4);

		}

		TEST_METHOD(kyacou2_test2)
		{
			myset<int> set;

			Assert::IsTrue(set.insert(12));
			Assert::IsTrue(set.insert(11));
			Assert::IsTrue(set.insert(5));
			Assert::IsTrue(set.insert(7));
			Assert::IsTrue(!set.insert(12));
			Assert::IsTrue(!set.insert(5));

			Assert::IsTrue(set.size() == 4);
			Assert::IsTrue(!set.empty());

			myset<int> set2;

			set2 = set;
			Assert::IsTrue(set2.size() == 4);
			Assert::IsTrue(!set2.empty());

			auto iter = set2.begin();

			Assert::IsTrue(*iter == 5);
		}

		TEST_METHOD(kyacou2_test3)
		{
			myset<int> set;
			Assert::IsTrue(set.insert(1));
			Assert::IsTrue(set.insert(2));
			Assert::IsTrue(set.insert(3));
			Assert::IsTrue(set.insert(4));

			Assert::IsTrue(!set.empty());
			Assert::IsTrue(set.size() == 4);

			auto iter = set.find(3);

			Assert::IsTrue(iter != set.end());

			iter = set.find(1);

			Assert::IsTrue(iter != set.end());

			iter = set.find(5);

			Assert::IsTrue(iter == set.end());

			set.clear();

			Assert::IsTrue(set.empty());

		}

		TEST_METHOD(kyacou2_test4)
		{
			myset<string> set;

			Assert::IsTrue(set.empty());

			set += "dennis";
			set += "alfred";
			set += "frank";
			set += "derrek";
			set += "ben";
			set += "roy";

			Assert::IsTrue(!set.empty());
			Assert::IsTrue(set.size() == 6);

			Assert::IsTrue(set["alfred"]);
			Assert::IsTrue(set["ben"]);
			Assert::IsTrue(set["dennis"]);
			Assert::IsTrue(set["derrek"]);
			Assert::IsTrue(set["frank"]);
			Assert::IsTrue(set["roy"]);

			Assert::IsTrue(!set["jeremy"]);
			Assert::IsTrue(!set["manuel"]);

		}

		TEST_METHOD(kyacou2_test5)
		{
			myset<char> set;

			Assert::IsTrue(set.empty());
			Assert::IsTrue(set.size() == 0);

			set += 'a';
			set += 'c';
			set += 'f';
			set += 'b';

			Assert::IsTrue(!set.empty());
			Assert::IsTrue(set.size() == 4);

			auto iter = set.find('a');
			Assert::IsTrue(iter != set.end());

			Assert::IsTrue(set['c']);
			Assert::IsTrue(set['f']);

			Assert::IsTrue(!set['d']);

			myset<char> * setptr;
			if (0 < 1)
			{
				myset<char> tempSet;
				Assert::IsTrue(tempSet.insert('c'));
				setptr = &tempSet;

				Assert::IsTrue(setptr->size() == 1);
			}

			// passes if destructor is called
			//Assert::IsTrue(setptr->size() == 0);
		}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(lgarib2_tests)
	{
	public:
		TEST_METHOD(lgarib2_test01)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			int a = 1;
			for (int i = 0; i < 1000; ++i)
			{
				a *= -1;
				Assert::IsTrue(s.insert(i*a));
				Assert::IsTrue(s[i*a]);
				Assert::IsTrue(!s.insert(i*a));
			}

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 1000);
			Assert::IsTrue(!s[1001]);
			Assert::IsTrue(!s[-1001]);

			int last = 1001;
			for (int& n : s)
			{
				if (last == 1001)
				{
					last = n;
					continue;
				}

				Assert::IsTrue(n >= last);

				last = n;
			}
		}

		TEST_METHOD(lgarib2_test02)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			for (int i = 0; i < 200; ++i)
			{
				Assert::IsTrue(s.insert(i));
				Assert::IsTrue(!s.insert(i));
			}

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 200);
			Assert::IsTrue(!s[201]);

			myset<int> s2(s);

			Assert::IsTrue(!s2.empty());
			Assert::IsTrue(s2.size() == s.size());

			for (int& n : s)
				Assert::IsTrue(s2[n]);
		}

		TEST_METHOD(lgarib2_test03)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			for (int i = 0; i < 1000; ++i)
			{
				Assert::IsTrue(s.insert(i));
				Assert::IsTrue(!s.insert(i));
			}

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 1000);
			Assert::IsTrue(!s[1001]);
			Assert::IsTrue(!s[-1001]);

			s += 1001;

			Assert::IsTrue(s[1001]);
			Assert::IsTrue(!s.insert(1001));
		}

		TEST_METHOD(lgarib2_test04)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			for (int i = 0; i < 1000; ++i)
			{
				Assert::IsTrue(s.insert(i));
				Assert::IsTrue(!s.insert(i));
			}

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 1000);
			Assert::IsTrue(!s[1001]);
			Assert::IsTrue(!s[-1001]);

			auto iter = s.find(899);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 899);
		}

		TEST_METHOD(lgarib2_test05)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			for (int i = 0; i < 1000; ++i)
			{
				Assert::IsTrue(s.insert(i));
				Assert::IsTrue(s[i]);
				Assert::IsTrue(!s.insert(i));
			}

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 1000);
			Assert::IsTrue(!s[1001]);
			Assert::IsTrue(!s[-1001]);

			auto iter = s.begin();
			for (int& n : s)
			{
				Assert::IsTrue(*iter == n);
				++iter;
			}
		}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(ljager2_tests)
	{
	public:

		//TEST_METHOD(ljager2_test01)
		//{
		//    test the validity of the = operator
		//    myset<int> = a;
		//    myset<int> = b;
		//    myset<int> = c;
		//    myset<int> = d;
		//    Assert::IsTrue(s.insert(10))
		//        Assert::IsTrue(s.insert(20))

		//        b = a;
		//    auto iter = b.begin();
		//    iter++;
		//    Assert::IsTrue(b.size() == 2);
		//    Assert::IsTrue(*iter == 20);
		//    Assert::IsTrue(b.insert(30));

		//    c = b;
		//    iter = c.find(20);
		//    iter++;
		//    Assert::IsTrue(b.size() == 3);
		//    Assert::IsTrue(*iter == 30);
		//    Assert::IsTrue(b.insert(40));

		//    d = c;
		//    iter = d.find(30);
		//    iter++;
		//    Assert::IsTrue(b.size() == 4);
		//    Assert::IsTrue(*iter == 40);
		//    Assert::IsTrue(b.insert(50));
		//}

		//TEST_METHOD(ljager2_test02)
		//{
		//    //checks if data is freed after Data Structure grows
		//    //this one is kinda sketchy
		//    myset<int> = s;
		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(s.insert(2));
		//    Assert::IsTrue(s.insert(3));
		//    auto iter = s.find(1);
		//    Assert::IsTrue(*iter == 1);
		//    Assert::IsTrue(s.insert(4));
		//    Assert::IsTrue(s.insert(5));
		//    iter++;
		//    Assert::IsFalse(*iter == 2);
		//    iter++;
		//    Assert::IsFalse(*iter == 3);
		//    iter++;
		//    Assert::IsFalse(*iter == 4);
		//}

		//TEST_METHOD(ljager2_test03)
		//{
		//    //checks if data is properly ordered after inserts
		//    myset<int> = s;
		//    Assert::IsTrue(s.size() == 0);
		//    for (int i = 9; i >= 0; i++) {
		//        Assert::IsTrue(s.size() == i);
		//        Assert::IsTrue(s += i);
		//    }
		//    auto curr = s.begin();
		//    auto next = s.begin();
		//    next++;
		//    Assert::IsTrue(*curr == 0);
		//    Assert::IsTrue(*next == 1);
		//    for (int i = 0; i<9; i++) {
		//        Assert::IsTrue(*curr < *next);
		//        curr++;
		//        next++;
		//    }
		//}

		//TEST_METHOD(ljager2_test04)
		//{
		//    //test to make sure the equals operator makes a new sperate instance of the righ hand 
		//    myset<srtring> s;
		//    Assert::IsTrue(s += "Zebra");
		//    Assert::IsTrue(s += "Bat");
		//    int size;
		//    bool loop = true;
		//    while (loop) {//do this to make copy leave scope and delete
		//        myset<srtring> c;
		//        Assert::IsTrue(c += "Dog");
		//        Assert::IsTrue(c += "Cat");
		//        size = c.size();
		//        s = c;
		//        Assert::AreNotSameObject(s, c);
		//    }
		//    auto iter = s.begin();
		//    Assert::IsFalse(*iter == "Bat");
		//    Assert::IsTrue(*iter == "Cat");
		//    iter++;
		//    Assert::IsFalse(*iter == "Zebra");
		//    Assert::IsTrue(*iter == "Dog");

		//    Assert::IsTrue(s.size() == size);

		//}

		//helper(myset<int> s) {

		//}

		//TEST_METHOD(ljager2_test05)
		//{
		//    //tests for flexibility
		//    myset<myset<char>> s;
		//    myset<char> a;
		//    myset<char> b;
		//    myset<char> c;
		//    myset<char> d;
		//    Assert::IsTrue(a += 'a');
		//    Assert::IsTrue(b += 'b');
		//    Assert::IsTrue(c += 'c');

		//    Assert::IsTrue(s += a);
		//    Assert::IsTrue(s += b);
		//    Assert::IsTrue(s += c);


		//    Assert::IsTrue(s[a]);
		//    Assert::IsTrue(s[b]);
		//    Assert::IsTrue(s[c]);
		//    Assert::IsFalse(s[a]);

		//    a.clear();
		//    b.clear();
		//    c.clear();

		//    auto iter = s.begin();
		//    auto iner = (*iter).begin();
		//    Assert::IsTrue((*iner).size() == 1);
		//}



	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Mario Betancourt
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //




 //#include "myset1.h"




namespace MyMapUnitTests
{
	TEST_CLASS(student_j_tests)
	{
	public:

		//TEST_METHOD(your_netid_test01)
		//{
		//  myset<int>  s;

		//  Assert::IsTrue(s.size() == 0);
		//  Assert::IsTrue(s.empty());
		//}

		//TEST_METHOD(your_netid_test02)
		//{
		//  myset<int>  s;

		//  Assert::IsTrue(s.size() == 0);
		//  Assert::IsTrue(s.empty());

		//  Assert::IsTrue(s.insert(12));

		//  Assert::IsTrue(s.size() == 1);
		//  Assert::IsTrue(!s.empty());
		//}



		//   TEST_METHOD(your_netid_test03)
		//   {
		//     myset<string>  s;

		//     Assert::IsTrue(s.size() == 0);
		//     Assert::IsTrue(s.empty());

		//     Assert::IsTrue(s.insert("apple"));

		//     Assert::IsTrue(s.size() == 1);
		//     Assert::IsTrue(!s.empty());

		//     Assert::IsTrue(s["apple"]);
		//   }

		//
		//	
		//   TEST_METHOD(your_netid_test04)
		//   {
		//     myset<string>  s;

		//     Assert::IsTrue(s.size() == 0);
		//     Assert::IsTrue(s.empty());

		//     Assert::IsTrue(s.insert("apple"));
		//     Assert::IsTrue(!s.insert("apple"));  // should not insert again

		//     Assert::IsTrue(s.size() == 1);
		//     Assert::IsTrue(!s.empty());

		//     Assert::IsTrue(s["apple"]);
		//     Assert::IsTrue(!s["pear"]);  // should not find
		//   }
		//
		//TEST_METHOD(your_netid_test05)
		//	{
		//     myset<int>  s;

		//     Assert::IsTrue(s.size() == 0);
		//     Assert::IsTrue(s.empty());

		//     Assert::IsTrue(s.insert(12));
		//     Assert::IsTrue(s.insert(71));
		//     s += 20;  // another way to insert:
		//     Assert::IsTrue(!s.insert(20));  // already inserted:

		//     Assert::IsTrue(s.size() == 3);
		//     Assert::IsTrue(!s.empty());

		//     Assert::IsTrue(s[71]);
		//     Assert::IsTrue(s[12]);
		//     Assert::IsTrue(s[20]);
		//     Assert::IsTrue(!s[11]);
		//     Assert::IsTrue(!s[999]);;
		//   }

		/*
		TEST_METHOD(your_netid_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}
		*/

		//Test to insert in order
		TEST_METHOD(mbetan4_01) {
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(113));
			Assert::IsTrue(s.insert(19));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(50));


			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[1]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[19]);
			Assert::IsTrue(s[30]);
			Assert::IsTrue(s[50]);
			Assert::IsTrue(s[113]);
		}


		//Test to insert in order with operator
		TEST_METHOD(mbetan4_02) {
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(1));
			s += 20;
			Assert::IsTrue(s.insert(19));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(50));


			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[1]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[19]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(s[30]);
			Assert::IsTrue(s[50]);

		}

		//Test clear method
		TEST_METHOD(mbetan4_03) {
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(1));
			s += 20;
			Assert::IsTrue(s.insert(19));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(50));
			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

		}

		//insetion in order for string
		TEST_METHOD(mbetan4_04) {
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("zebra"));
			Assert::IsTrue(s.insert("guts"));

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("love"));
			Assert::IsTrue(s.insert("deer"));


			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(s["deer"]);
			Assert::IsTrue(s["guts"]);
			Assert::IsTrue(s["love"]);
			Assert::IsTrue(s["zebra"]);

		}

		//Test deep copy
		TEST_METHOD(mbetan4_05) {
			myset<int>  s;
			myset<int>  s1;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(1));
			s += 20;
			Assert::IsTrue(s.insert(19));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(50));

			s1 = s;

			Assert::IsTrue(s1[1]);
			Assert::IsTrue(s1[12]);
			Assert::IsTrue(s1[19]);
			Assert::IsTrue(s1[20]);
			Assert::IsTrue(s1[30]);
			Assert::IsTrue(s1[50]);

			Assert::IsTrue(s1.size() == 6);
			Assert::IsTrue(!s1.empty());


		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Michal Bochnak, Netid: mbochn2
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{

	TEST_CLASS(mbochn2_tests)
	{
	public:

		TEST_METHOD(mbochn2_test10)
		{
			myset<double> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			for (int i = 1; i < 500; i++) {
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 499);
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(!s.insert(1));
			Assert::IsTrue(!s.insert(499));
			Assert::IsTrue(s.size() == 499);
			Assert::IsTrue(s.insert(0));
			Assert::IsTrue(s.size() == 500);
		}

		TEST_METHOD(mbochn2_test11)
		{
			myset<int> s;

			Assert::IsTrue(s.begin() == s.end());
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.begin() != s.end());
			auto iter = s.find(1);
			Assert::IsTrue(iter == s.begin());
			Assert::IsTrue(!(iter == s.end()));
			++iter;
			Assert::IsTrue(!(iter == s.begin()));
			Assert::IsTrue(iter == s.end());
			//Assert::IsTrue(s.insert(2));
			//Assert::IsTrue(!(iter == s.end()));
			//++iter;
			//Assert::IsTrue(iter == s.end());
		}

		TEST_METHOD(mbochn2_test12)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(!s.insert(10));
			Assert::IsTrue(!s.insert(10));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(!s.insert(20));
			Assert::IsTrue(!s.insert(10));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(mbochn2_test13)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(99));
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 2);
			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert(99));
			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(1054));
			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());
			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
		}

		TEST_METHOD(mbochn2_test14)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert(40));
			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(80));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(55));

			auto iter = s.begin();
			Assert::IsTrue(*iter == 15);
			++iter;
			Assert::IsTrue(*iter == 30);
			++iter;
			Assert::IsTrue(*iter == 40);
			++iter;
			Assert::IsTrue(*iter == 55);
			++iter;
			Assert::IsTrue(*iter == 80);
			++iter;
			Assert::IsTrue(iter == s.end());

			s.clear();
			Assert::IsTrue(s.begin() == s.end());

			Assert::IsTrue(s.insert(40));
			Assert::IsTrue(s.insert(15));

			Assert::IsTrue(s.size() == 2);

			iter = s.find(15);
			Assert::IsTrue(iter == s.begin());
			Assert::IsTrue(*iter == *(s.begin()));
			Assert::IsTrue(iter != s.end());
			//Assert::IsTrue(*iter != *(s.end()));
		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Muhammad Arsalan Chaudhry (mchaud25)
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_k_tests)
	{
	public:



		//checking size and finding element
		TEST_METHOD(mchaud25_test01) {

			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			int i;
			for (i = 0; i < 100; i++) {
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 100);
			Assert::IsTrue(!s.empty());


			myset<string> s2;
			Assert::IsTrue(s2.size() == 0);
			Assert::IsTrue(s2.empty());

			Assert::IsTrue(s2.insert("A"));
			Assert::IsTrue(s2.insert("B"));

			Assert::IsTrue(s2["A"]);
			Assert::IsTrue(!s2.empty());

		}

		//Checking size gets updated
		TEST_METHOD(mchaud25_test02)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s.empty());
		}


		//tests to see to how the set handles size limitations
		//As the size increases what will happen? Will the program crash?
		//TEST_METHOD(mchaud25_test3) {

		//    //100
		//    myset<int> s;

		//    for (int i = 0; i < 100; i++) {
		//        Assert::IsTrue(s.insert(i));

		//    }

		//    Assert::IsTrue(s.size() == 100);
		//    Assert::IsTrue(!s.empty());

		//    //1000
		//    myset<int> s2;
		//    for (int i = 0; i < 1000; i++) {
		//        Assert::IsTrue(s2.insert(i));
		//    }

		//    Assert::IsTrue(s2.size() == 100);
		//    Assert::IsTrue(!s2.empty());

		//    //10,000
		//    myset<int> s3;
		//    for (int i = 0; i < 10000; i++) {
		//        Assert::IsTrue(s3.insert(i));
		//    }

		//    Assert::IsTrue(s3.size() == 100);
		//    Assert::IsTrue(!s3.empty());

		//    //100,000
		//    myset<int> s4;
		//    for (int i = 0; i < 100000; i++) {
		//        Assert::IsTrue(s4.insert(i));
		//    }

		//    Assert::IsTrue(s4.size() == 100);
		//    Assert::IsTrue(!s4.empty());


		//    //1,000,000
		//    myset<int> s5;
		//    for (int i = 0; i < 1000000; i++) {
		//        Assert::IsTrue(s5.insert(i));
		//    }

		//    Assert::IsTrue(s5.size() == 100);
		//    Assert::IsTrue(!s5.empty());

		//}

		//Testing ++
		//TEST_METHOD(mchaud25_test04)
		//{

		//    myset<int> s;
		//    for (int i = 0; i < 10; i++) {
		//        Assert::IsTrue(s.insert(i));
		//    }
		//    Assert::IsTrue(s.size() == 10);
		//    Assert::IsTrue(!s.empty());

		//    auto op = s.begin();
		//    ++op;

		//    Assert::IsTrue(*op == 1);
		//    Assert::IsTrue(*op == 2);
		//    Assert::IsTrue(*op == 3);
		//    Assert::IsTrue(*op == 4);
		//    Assert::IsTrue(*op == 5);
		//    Assert::IsTrue(*op == 6);
		//    Assert::IsTrue(*op == 7);
		//    Assert::IsTrue(*op == 8);
		//    Assert::IsTrue(*op == 9);

		//    auto op2 = s.find(3);
		//    Assert::IsTrue(op2 == s.end());
		//}

		//Check the copies are copied correctly 
		TEST_METHOD(mchaud25_test05) {

			myset<int> s;
			Assert::IsTrue(s.empty());


			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));


			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			myset<int> sCopy;
			Assert::IsTrue(sCopy.empty());

			auto it = s.begin();
			auto it2 = sCopy.begin();


			sCopy = s;

			Assert::IsTrue(sCopy.size() == 3);
			Assert::IsTrue(!sCopy.empty());

			Assert::IsTrue(s.size() == sCopy.size());
		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Mark Chen
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_s_tests)
	{
	public:

		TEST_METHOD(mchen200test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(-5));
			Assert::IsTrue(!s.insert(-5));
			Assert::IsTrue(s.insert(-20));
			Assert::IsTrue(s.insert(20));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[-20]);
			Assert::IsTrue(s[-5]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(s[19 + 1]);
			Assert::IsTrue(!s[-6]);;
		}

		TEST_METHOD(mchen200test02)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("pie"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["pie"]);

			s.clear();

			Assert::IsTrue(!s["pie"]);
			Assert::IsTrue(s.insert("pie"));

			Assert::IsTrue(s.insert("pie1"));
			Assert::IsTrue(s.insert("pie1 1"));
			Assert::IsTrue(s.insert("pie2"));
			Assert::IsTrue(s.insert("pie3"));
			Assert::IsTrue(!s.insert("pie3"));

			myset<string> copys = s;

			Assert::IsTrue(copys["pie1"]);
			Assert::IsTrue(copys["pie1 1"]);
			Assert::IsTrue(copys["pie2"]);
			Assert::IsTrue(copys["pie3"]);
			Assert::IsTrue(!copys["pie11"]);

			Assert::IsTrue(copys.size() == 5);
			Assert::IsTrue(!copys.empty());
		}

		//TEST_METHOD(mchen200test03)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.insert(-20));
		//    Assert::IsTrue(s.insert(20));

		//    Assert::IsTrue(s.size() == 2);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find(-20);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == -20);

		//    s.clear();

		//    auto iter2 = s.find(-20);
		//    Assert::IsTrue(iter2 != s.end());
		//    Assert::IsTrue(*iter2 != 20);
		//    Assert::IsTrue(*iter2 == -20);

		//    Assert::IsTrue(s.size() == 2);
		//    Assert::IsTrue(!s.empty());

		//    auto iter3 = s.find(-20);
		//    Assert::IsTrue(iter3 == s.begin());
		//    Assert::IsTrue(*iter3 == -20);

		//    Assert::IsTrue(iter2 == iter3);
		//}

		//TEST_METHOD(mchen200test04)
		//{
		//    myset<string>  s;

		//    s += "pie";

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s["pie"]);

		//    Assert::IsTrue(!s["pi"]);
		//    Assert::IsTrue(!s["Pi"]);
		//    Assert::IsTrue(!s["Pie"]);
		//    Assert::IsTrue(!s["PIE"]);
		//    Assert::IsTrue(!s["pies"]);

		//    s.clear();
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(!s["pie"]);

		//}

		TEST_METHOD(mchen200test05)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("pie"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["pie"]);

			s.clear();

			Assert::IsTrue(!s["pie"]);
			Assert::IsTrue(s.insert("pie"));

			Assert::IsTrue(s.insert("pie1"));
			Assert::IsTrue(s.insert("pie1 1"));
			Assert::IsTrue(s.insert("pie2"));
			Assert::IsTrue(s.insert("pie3"));
			Assert::IsTrue(!s.insert("pie3"));

			myset<string> copys(s);

			Assert::IsTrue(copys["pie1"]);
			Assert::IsTrue(copys["pie1 1"]);
			Assert::IsTrue(copys["pie2"]);
			Assert::IsTrue(copys["pie3"]);
			Assert::IsTrue(!copys["pie11"]);

			Assert::IsTrue(copys.size() == 5);
			Assert::IsTrue(!copys.empty());

		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Mark Haynie
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(mhaynie2_tests)
	{
	public:

		//the followng are the tests that I am submitting for project 3 part 1

		TEST_METHOD(mhaynie2_testClearString)
		{
			myset<string> sString;

			Assert::IsTrue(sString.size() == 0);
			Assert::IsTrue(sString.empty());

			Assert::IsTrue(sString.insert("String to Clear 1"));
			Assert::IsTrue(sString.insert("String to Clear 2"));
			Assert::IsTrue(sString.insert("String to Clear 3"));
			Assert::IsTrue(!sString.insert("String to Clear 3"));
			Assert::IsTrue(sString.insert("String to Clear 4"));

			Assert::IsTrue(sString.size() == 4);
			Assert::IsTrue(!sString.empty());

			sString.clear();

			Assert::IsTrue(sString.size() == 0);
			Assert::IsTrue(sString.empty());
		}

		TEST_METHOD(mhaynie2_testClearInt)
		{
			myset<int> sInt;

			Assert::IsTrue(sInt.size() == 0);
			Assert::IsTrue(sInt.empty());

			Assert::IsTrue(sInt.insert(1));
			Assert::IsTrue(sInt.insert(20));
			Assert::IsTrue(sInt.insert(3));
			Assert::IsTrue(sInt.insert(40));
			Assert::IsTrue(!sInt.insert(3));
			Assert::IsTrue(sInt.insert(5));

			Assert::IsTrue(sInt.size() == 5);
			Assert::IsTrue(!sInt.empty());

			sInt.clear();

			Assert::IsTrue(sInt.size() == 0);
			Assert::IsTrue(sInt.empty());
		}

		TEST_METHOD(mhaynie2_test1000Strings)
		{
			myset<string> sString;

			Assert::IsTrue(sString.size() == 0);
			Assert::IsTrue(sString.empty());

			for (int i = 0; i < 100; i++)
			{
				Assert::IsTrue(sString.insert(std::to_string(i)));
			}

			Assert::IsTrue(sString.size() == 100);
			Assert::IsTrue(!sString.empty());

			sString.clear();

			Assert::IsTrue(sString.size() == 0);
			Assert::IsTrue(sString.empty());

			for (int i = 0; i < 100; i++)
			{
				Assert::IsTrue(sString.insert(std::to_string(i)));
			}

			for (int i = 0; i < 100; i++)
			{
				Assert::IsTrue(!sString.insert(std::to_string(i)));
			}

			for (int i = 0; i < 900; i++)
			{
				Assert::IsTrue(sString.insert(std::to_string(i + 100)));
			}

			Assert::IsTrue(sString.size() == 1000);
			Assert::IsTrue(!sString.empty());
		}

		TEST_METHOD(mhaynie2_testPlusEqualsOp)
		{
			myset<string> sString;

			Assert::IsTrue(sString.size() == 0);
			Assert::IsTrue(sString.empty());

			sString += "String to Check 1";
			Assert::IsTrue(!sString.insert("String to Check 1"));

			sString += "String to Check 2";
			Assert::IsTrue(!sString.insert("String to Check 2"));

			sString += "String to Check 3";
			Assert::IsTrue(!sString.insert("String to Check 3"));

			sString += "String to Check 4";
			Assert::IsTrue(!sString.insert("String to Check 4"));

			Assert::IsTrue(sString.size() == 4);
			Assert::IsTrue(!sString.empty());

			sString += "String to Check 5";
			sString += "String to Check 6";
			sString += "String to Check 7";
			sString += "String to Check 8";

			Assert::IsTrue(sString.size() == 8);
			Assert::IsTrue(!sString.empty());
		}

		TEST_METHOD(mhaynie2_testCopy)
		{
			myset<string> aString;

			Assert::IsTrue(aString.size() == 0);
			Assert::IsTrue(aString.empty());

			Assert::IsTrue(aString.insert("String to Check 1"));
			Assert::IsTrue(aString.insert("String to Check 2"));
			Assert::IsTrue(aString.insert("String to Check 3"));
			Assert::IsTrue(aString.insert("String to Check 4"));

			Assert::IsTrue(aString.size() == 4);
			Assert::IsTrue(!aString.empty());

			myset<string> bString = aString;

			Assert::IsTrue(!bString.insert("String to Check 1"));
			Assert::IsTrue(!bString.insert("String to Check 2"));
			Assert::IsTrue(!bString.insert("String to Check 3"));
			Assert::IsTrue(!bString.insert("String to Check 4"));
			Assert::IsTrue(bString.insert("String to Check 5"));
			Assert::IsTrue(bString.insert("String to Check 6"));
			Assert::IsTrue(bString.insert("String to Check 7"));
			Assert::IsTrue(bString.insert("String to Check 8"));

			Assert::IsTrue(bString.size() == 8);
			Assert::IsTrue(!bString.empty());
		}




	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Margi Katwala
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(mkatwa3_tests)
	{
	public:

		TEST_METHOD(mkatwa3_test01)
		{

			myset<int>s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsFalse(!s.empty());

		}

		TEST_METHOD(mkataw3_test02)
		{

			myset<string>s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsFalse(!s.empty());
			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("pear"));
			Assert::IsTrue(!s.empty());
			s += "orange";//+= works should work with string adding it to the set -s 
			Assert::IsTrue(s.size() == 3);
			s.clear();
			Assert::IsFalse(s.size() == 3);
			Assert::IsTrue(s.size() == 0);


		}

		TEST_METHOD(mkatwa3_test03)

		{
			myset<int>s;
			myset<int>s1;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert(12));




		}

		TEST_METHOD(mkatwa3_test04)
		{
			//check iter

		}

		TEST_METHOD(mkatwa3_test05)

		{// test copy  



		}




	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Mariia Melnikova
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(mmelni4_tests)
	{
	public:


		TEST_METHOD(mmelni4_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			// inputs 50 int elements, checks for size and emptyness after each input

			for (int i = 1; i <= 50; i++)
			{
				s += i;
				Assert::IsTrue(s.size() == i);
				Assert::IsTrue(!s.empty());
			}

			// check if fails to insert existing elements

			for (int i = 1; i <= 50; i++)
			{
				Assert::IsTrue(!s.insert(i));
			}

			// after successfully inserting 50 elements

			Assert::IsTrue(s.size() == 50);
			Assert::IsTrue(!s.empty());

			for (int i = 1; i <= 50; i++)
			{
				Assert::IsTrue(s[i]);
			}

			// range of elements not in set (51...100)
			// check if fails to find those in existing set

			for (int i = 51; i <= 100; i++)
			{
				Assert::IsFalse(s[i]);
			}

		}

		// testing set of strings

		TEST_METHOD(mmelni4_test02)
		{
			myset<string>  s;

			// insert new elements of type string not in order 

			Assert::IsTrue(s.insert("c"));
			Assert::IsTrue(s.insert("b"));
			Assert::IsTrue(s.insert("a"));
			Assert::IsTrue(s.insert("e"));
			Assert::IsTrue(s.insert("d"));

			// check if fails to insert existing elements of type string

			Assert::IsFalse(s.insert("a"));
			Assert::IsFalse(s.insert("b"));
			Assert::IsFalse(s.insert("c"));
			Assert::IsFalse(s.insert("d"));
			Assert::IsFalse(s.insert("e"));

			// check if elements are found

			Assert::IsTrue(s["a"]);
			Assert::IsTrue(s["b"]);
			Assert::IsTrue(s["c"]);
			Assert::IsTrue(s["d"]);
			Assert::IsTrue(s["e"]);

			// check if elements cannot be found
			Assert::IsFalse(s["f"]);
			Assert::IsFalse(s["g"]);
			Assert::IsFalse(s["h"]);
			Assert::IsFalse(s["i"]);
			Assert::IsFalse(s["j"]);

			// since 5 elements are successfully inserted, check if size matches

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(mmelni4_test03)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			for (int i = 1; i <= 10; i++)
			{
				s += i;
				Assert::IsTrue(s.size() == i);
				Assert::IsFalse(s.empty());
				Assert::IsFalse(s.insert(i));
			}

			// check for every elements in the set

			for (int i = 1; i <= 10; i++)
			{
				auto iter = s.find(i);
				Assert::IsTrue(iter != s.end());
				Assert::IsTrue(*iter == i);
			}

			// check for iterators for elements that don't exist in the set

			for (int i = 11; i <= 20; i++)
			{
				auto iter = s.find(i);
				Assert::IsTrue(iter == s.end());
			}

			Assert::IsTrue(s.size() == 10);
			Assert::IsTrue(!s.empty());
		}

		// test find function with strings inserted not in order 
		TEST_METHOD(mmelni4_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("pineapple"));
			Assert::IsTrue(s.insert("kiwi"));
			Assert::IsTrue(s.insert("appricot"));

			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s.empty());

			auto iter = s.find("apple");

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "apple");
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "appricot");
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "kiwi");
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "pineapple");
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find("orange");
			Assert::IsTrue(iter2 == s.end());
		}

		// tests clear() and copy =
		TEST_METHOD(mmelni4_test05)
		{
			myset<int>  s;
			myset<int>  s2;
			myset<int>  s3;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(100));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			s.clear(); // delete array and set size back to 0

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			s2 = s; // make a copy

			Assert::IsTrue(s2.size() == 0);
			Assert::IsTrue(s2.empty());

			Assert::IsTrue(s.insert(100));

			s3 = s; // copy third set

			Assert::IsTrue(s3.size() == 1);
			Assert::IsFalse(s3.empty());
		}

		/*TEST_METHOD(your_netid_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		TEST_METHOD(your_netid_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(your_netid_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(your_netid_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(your_netid_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(your_netid_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}*/


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Michael Patel
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_v_tests)
	{
	public:

		TEST_METHOD(mpate95_test01) {
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(5));
			Assert::IsTrue(s.insert(8));
			Assert::IsTrue(s.insert(9));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());
			s.clear();

			Assert::IsTrue(s.empty());

		}

		TEST_METHOD(mpate95_test02) {

			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(5));
			Assert::IsTrue(s.insert(6));
			Assert::IsTrue(s.insert(7));
			Assert::IsTrue(s.insert(8));
			Assert::IsTrue(s.insert(9));
			Assert::IsTrue(s.insert(10));

			Assert::IsTrue(s.size() == 10);
			Assert::IsTrue(!s.empty());

		}

		//TEST_METHOD(mpate95_test03) {

		//    myset<string> s;

		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.size() == 10);

		//    Assert::IsTrue(s.insert("A"));
		//    Assert::IsTrue(s.insert("B"));
		//    Assert::IsTrue(s.insert("C"));
		//    Assert::IsTrue(s.insert("D"));
		//    Assert::IsTrue(s.insert("E"));
		//    Assert::IsTrue(s.insert("F"));
		//    Assert::IsTrue(s.insert("G"));

		//    Assert::IsTrue(s.size() == 7);
		//    Assert::IsTrue(!s.empty());

		//}

		TEST_METHOD(mpate95_test04) {
			myset<string> s;

			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert("G"));
			Assert::IsTrue(s.insert("F"));
			Assert::IsTrue(s.insert("E"));
			Assert::IsTrue(s.insert("D"));
			Assert::IsTrue(s.insert("C"));
			Assert::IsTrue(s.insert("B"));
			Assert::IsTrue(s.insert("A"));

			Assert::IsTrue(s.begin() != s.end());
			Assert::IsTrue(s["A"] == true);

		}

		TEST_METHOD(mpate95_test05) {
			myset<int> s;

			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(5));
			Assert::IsTrue(s.insert(2));

			Assert::IsTrue(*s.begin() == 1);

			auto e = s.find(21);
			Assert::IsTrue(e == s.end());

			Assert::IsTrue(!s.insert(1));
			Assert::IsTrue(s.size() == 4);
			s.clear();
			Assert::IsTrue(s.size() == 0);

		}




	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Michael Pedraza
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{


	TEST_CLASS(student_l_tests)
	{
	public:


		//////////////////////////////////////////

		TEST_METHOD(mpedra5_test01)
		{
			myset<char>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert('a'));
			Assert::IsTrue(!(s.empty()));
			Assert::IsTrue(!(s['A']));
			Assert::IsTrue(s.insert('A'));
			Assert::IsTrue(!(s.insert('A')));
			Assert::IsTrue(s.insert('B'));
			Assert::IsTrue(s.insert('C'));
			Assert::IsTrue(s.insert('D'));
			Assert::IsTrue(!s['c']);

		}

		TEST_METHOD(mpedra5_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert(2));
			s += 4;
			s += 6;
			s += 8;
			Assert::IsTrue(!s.empty());
			s += 10;
			Assert::IsTrue(!s[7]);
			Assert::IsTrue(!s[3]);
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s[3]);
		}

		//TEST_METHOD(mpedra5_test03)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.insert("hey!"));
		//    Assert::IsTrue(s.insert("go to office hours"));
		//    Assert::IsTrue(s.insert("raise your hand"));
		//    Assert::IsTrue(s.insert("raise your hand"));
		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(!(s.insert("zombies")));
		//    Assert::IsTrue(!s["walkers"]);
		//    Assert::IsTrue(!s["clickers"]);
		//    Assert::IsTrue(s.insert("morgan"));
		//    Assert::IsTrue(s["go to office hours"]);
		//}

		TEST_METHOD(mpedra5_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("computer"));
			Assert::IsTrue(s.insert("Computer"));
			Assert::IsTrue(s.insert("computeR"));
			Assert::IsTrue(s.insert("ComputER"));
			Assert::IsTrue(!s["COMPUTER"]);
			Assert::IsTrue(!s["CompuTER"]);



		}

		TEST_METHOD(mpedra5_test05)
		{
			myset<double>  s;

			Assert::IsTrue(s.insert(2.5 + 6.3));
			Assert::IsTrue(s.insert(4 + 3.2));

		}

		//////////////////////////////////////////////////////////




	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Michael Slomczynski
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(ms11_tests)
	{
	public:

		/*
		//empty test
		TEST_METHOD(ms11_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		//insert test
		TEST_METHOD(ms11_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		//works with other types and the insert is inserting correctly (not just incrementing)
		TEST_METHOD(ms11_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		//no double insert, no finding elements that arent there
		TEST_METHOD(ms11_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		//insert multi things in different ways, no multi, size of set
		TEST_METHOD(ms11_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		//find and iterators
		TEST_METHOD(ms11_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		//insert out of order iterate in order
		TEST_METHOD(ms11_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		//
		TEST_METHOD(ms11_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}
		*/
		//clear test
		TEST_METHOD(ms11_test09)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());



			Assert::IsTrue(s.insert(123));
			Assert::IsTrue(s.insert(456));
			Assert::IsTrue(s.insert(789));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

		}

		//deep copy test
		//TEST_METHOD(ms11_test10)
		//{
		//    myset<int>  lhs;
		//    myset<int>  rhs;

		//    Assert::IsTrue(lhs.size() == 0);
		//    Assert::IsTrue(lhs.empty());

		//    Assert::IsTrue(rhs.size() == 0);
		//    Assert::IsTrue(rhs.empty());

		//    Assert::IsTrue(lhs.insert(123));
		//    Assert::IsTrue(lhs.insert(456));
		//    Assert::IsTrue(lhs.insert(789));
		//    Assert::IsTrue(lhs.insert(258));

		//    Assert::IsTrue(rhs.insert(777));

		//    auto iter = lhs.find(777);
		//    Assert::IsTrue(iter == lhs.end());

		//    Assert::IsTrue(lhs.size() == 4);
		//    Assert::IsTrue(!lhs.empty());

		//    Assert::IsTrue(rhs.size() == 1);
		//    Assert::IsTrue(!rhs.empty());

		//    lhs = rhs;

		//    auto iter2 = lhs.find(777);
		//    Assert::IsTrue(iter != lhs.end());
		//    Assert::IsTrue(*iter == 777);

		//    Assert::IsTrue(lhs.size() == 1);
		//    Assert::IsTrue(!lhs.empty());

		//    Assert::IsTrue(rhs.size() == 1);
		//    Assert::IsTrue(!rhs.empty());
		//}

		//iterator begin end test
		TEST_METHOD(ms11_test11)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			auto iter = s.find(123);
			Assert::IsTrue(iter == s.end());
			Assert::IsTrue(s.begin() == s.end());
			Assert::IsTrue(iter == s.begin());

			Assert::IsTrue(s.insert(123));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			auto iter2 = s.find(123);
			Assert::IsTrue(iter2 != s.end());
			Assert::IsTrue(s.begin() != s.end());
			Assert::IsTrue(iter2 == s.begin());

			Assert::IsTrue(*iter2 == 123);
			Assert::IsTrue(*s.begin() == 123);

			++iter2;
			Assert::IsTrue(iter2 == s.end());
			Assert::IsTrue(s.begin() != s.end());
			Assert::IsTrue(iter2 != s.begin());

			Assert::IsTrue(*s.begin() == 123);
		}

		//destructor test
		/*TEST_METHOD(ms11_test12)
		{
		typedef shared_ptr<myset<int>> MySetPtr;
		MySetPtr spa, spb, spc;

		Assert::IsTrue(spa.use_count() == 0);

		myset<int>  a;

		Assert::IsTrue((a).insert(123));

		Assert::IsTrue((a).size() == 1);
		Assert::IsTrue(!(a).empty());

		*spa = a;
		{
		myset<int>  *b = new myset<int>();

		Assert::IsTrue((*b).insert(123));

		Assert::IsTrue((*b).size() == 1);
		Assert::IsTrue(!((*b).empty()));

		myset<int>  c;

		Assert::IsTrue(c.insert(123));

		Assert::IsTrue(c.size() == 1);
		Assert::IsTrue(!c.empty());

		*spb = *b;
		*spb = c;

		Assert::IsTrue(spa.use_count() == 1);
		Assert::IsTrue(spb.use_count() == 1);
		Assert::IsTrue(spc.use_count() == 1);

		delete b;

		Assert::IsTrue(spb.use_count() == 0);
		}

		Assert::IsTrue(spa.use_count() == 1);
		Assert::IsTrue(spb.use_count() == 0);
		Assert::IsTrue(spc.use_count() == 0);
		}*/

		//copy constructor test
		TEST_METHOD(ms11_test13)
		{
			myset<int>  lhs;

			Assert::IsTrue(lhs.size() == 0);
			Assert::IsTrue(lhs.empty());

			Assert::IsTrue(lhs.insert(123));
			Assert::IsTrue(lhs.insert(456));
			Assert::IsTrue(lhs.insert(789));
			Assert::IsTrue(lhs.insert(258));

			myset<int>  rhs(lhs);

			Assert::IsTrue(rhs.size() == 4);
			Assert::IsTrue(!rhs.empty());

			Assert::IsTrue(rhs.insert(777));

			auto iter = lhs.find(777);
			Assert::IsTrue(iter == lhs.end());

			auto iter2 = rhs.find(777);
			Assert::IsTrue(iter2 != rhs.end());

			Assert::IsTrue(lhs.size() == 4);
			Assert::IsTrue(!lhs.empty());

			Assert::IsTrue(rhs.size() == 5);
			Assert::IsTrue(!rhs.empty());
		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_m_tests)
	{
	public:


		TEST_METHOD(mvahor3_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(25));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(35));
			Assert::IsTrue(s.insert(100));

			Assert::IsTrue(!s.insert(15));
			Assert::IsTrue(!s.insert(25));
			Assert::IsTrue(!s.insert(30));
			Assert::IsTrue(!s.insert(35));
			Assert::IsTrue(!s.insert(100));


		}

		TEST_METHOD(mvahor3_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s.insert(25));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(s.insert(35));
			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(s.insert(100));
			Assert::IsTrue(s.size() == 5);


		}

		TEST_METHOD(mvahor3_test03)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(25));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(35));
			Assert::IsTrue(s.insert(100));

			auto iter = s.find(100);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 100);

			iter = s.find(15);

			Assert::IsTrue(iter == s.begin());
			Assert::IsTrue(*iter == 15);

			iter = s.find(30);
			Assert::IsTrue(iter != s.begin() && iter != s.end());

		}

		TEST_METHOD(mvahor3_test04)
		{
			myset<int>  s;


			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(35));
			Assert::IsTrue(s.insert(100));

			auto iter = s.find(35);
			Assert::IsTrue(*iter == 35);

			//iter++;
			++iter;
			Assert::IsTrue(*iter == 100);
			Assert::IsTrue(iter != s.end());

			//iter++;
			++iter;
			Assert::IsTrue(iter == s.end());

			Assert::IsTrue(s.insert(105));
			//Assert::IsTrue(*iter == 105);
			//Assert::IsTrue(iter != s.end());
		}

		//TEST_METHOD(mvahor3_test05)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.insert("apple"));
		//    Assert::IsTrue(s.insert("banana"));
		//    Assert::IsTrue(s.insert("cake"));

		//    Assert::IsTrue(s.size() == 3);
		//    Assert::IsTrue(s["apple"]);
		//    Assert::IsTrue(!s["bapple"]);

		//    auto iter = s.find("cake");
		//    Assert::IsTrue(*iter == "cake");
		//    Assert::IsTrue(iter != s.end());

		//    s.insert("aardvark ");
		//    iter = s.find("aardvark");
		//    Assert::IsTrue(iter == s.begin());
		//    Assert::IsTrue(*iter != "apple");
		//    Assert::IsTrue(*iter == "aardvark");





		//}

	};
}/*nhe3_unittest.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Nathan He
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03









namespace MyMapUnitTests {
	TEST_CLASS(nhe3_tests) {
public:
	//test 1, test the the find function in myset
	TEST_METHOD(nhe3_test01) {
		myset<int>  s;

		//insert 5 random numbers
		Assert::IsTrue(s.insert(37));
		Assert::IsTrue(s.insert(140));
		Assert::IsTrue(s.insert(901));
		Assert::IsTrue(s.insert(549));
		Assert::IsTrue(s.insert(18));
		//Elements in order: 18, 37, 140, 549, 901

		//check number of elements in myset
		Assert::IsTrue(s.size() == 5);
		//check if myset is empty
		Assert::IsTrue(!s.empty());

		//find all elements in myset
		auto iter1 = s.find(37);
		auto iter2 = s.find(140);
		auto iter3 = s.find(901);
		auto iter4 = s.find(549);
		auto iter5 = s.find(18);

		//check if each dereferenced iterator matches values
		Assert::IsTrue(*iter1 == 37);
		Assert::IsTrue(*iter2 == 140);
		Assert::IsTrue(*iter3 == 901);
		Assert::IsTrue(*iter4 == 549);
		Assert::IsTrue(*iter5 == 18);
	}

	//test 2, test clear function in myset
	TEST_METHOD(nhe3_test02) {
		myset<string>  s;

		//insert two animals
		Assert::IsTrue(s.insert("zebra"));
		Assert::IsTrue(s.insert("cow"));

		//clear myset
		s.clear();

		//check empty set and no set size
		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		//inesrt animals in reverse order
		Assert::IsTrue(s.insert("dog"));
		Assert::IsTrue(s.insert("cat"));

		//clear myset
		s.clear();

		//check empty set and set size is 0
		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		//insert animals
		Assert::IsTrue(s.insert("bear"));
		Assert::IsTrue(s.insert("aardvark"));

		//check if set size is 2
		Assert::IsTrue(s.size() == 2);
		Assert::IsTrue(!s.empty());

		//clear myset
		s.clear();

		//check if set is empty and set size is zero
		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
	}

	//test 3, test begin and end function and for duplicates in myset
	TEST_METHOD(nhe3_test03) {
		myset<int>  s;

		//insert 4 random numbers (including negative numbers)
		Assert::IsTrue(s.insert(-11));
		Assert::IsTrue(s.insert(-18));
		Assert::IsTrue(s.insert(3));
		Assert::IsTrue(s.insert(17));
		//in order: -18, -11, 3, 17

		//find begin and end of myset
		auto iter1 = s.begin();
		auto iter2 = s.find(17);
		auto iter3 = s.end();

		//check if iterators point to right elements
		Assert::IsTrue(*iter1 == -18);
		Assert::IsTrue(*iter2 == 17);

		//increment iter2 two times
		++iter2;

		//check end of myset
		Assert::IsTrue(iter2 == iter3);

		//clear myset
		s.clear();

		//check size and empty
		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		//insert 3 new numbers
		Assert::IsTrue(s.insert(84));
		Assert::IsTrue(s.insert(98));
		Assert::IsTrue(s.insert(52));
		//in order: 52, 84, 98

		//reassign begin and end iterators
		iter1 = s.begin();
		iter2 = s.find(98);
		iter3 = s.end();

		//check if elements match iterators
		Assert::IsTrue(*iter1 == 52);
		Assert::IsTrue(*iter2 == 98);

		//increment iter2 
		++iter2;

		//check if ends match in myset
		Assert::IsTrue(iter2 == iter3);
	}

	//test 4, check for duplicates
	TEST_METHOD(nhe3_test04) {
		myset<string>  s;

		//insert colors
		Assert::IsTrue(s.insert("yellow"));
		Assert::IsTrue(s.insert("blue"));
		Assert::IsTrue(s.insert("red"));
		Assert::IsTrue(s.insert("white"));

		//insert duplicates
		Assert::IsTrue(!s.insert("white")); //duplicate, don't insert
		Assert::IsTrue(!s.insert("red"));   //duplicate, don't insert
		Assert::IsTrue(!s.insert("blue"));  //duplicate, don't insert
		Assert::IsTrue(!s.insert("yellow"));  //duplicate, don't insert

											  //clear myset
		s.clear();

		//check if myset is cleared and empty
		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		//insert cities
		Assert::IsTrue(s.insert("Chicago"));
		Assert::IsTrue(s.insert("New York"));
		Assert::IsTrue(s.insert("Los Angeles"));

		//insert duplicate cities
		Assert::IsTrue(!s.insert("New York"));  //duplicate, don't insert
		Assert::IsTrue(!s.insert("Los Angeles")); //duplicate, don't insert
		Assert::IsTrue(!s.insert("Chicago"));   //duplicate, don't insert

												//check size and if empty
		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		//clear myset
		s.clear();

		//check empty set and size
		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
	}

	//test 5, test += and [] operator in myset
	TEST_METHOD(nhe3_test05) {
		myset<int>  s;

		//insert elements using += operator
		s += 7;
		s += 5;
		s += 3;

		//check if myset size is 3 and isn't empty
		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		//check if numbers are all inserted
		Assert::IsTrue(s[3]);
		Assert::IsTrue(s[5]);
		Assert::IsTrue(!s[10]);

		//add two more elements
		s += 9;
		s += 0;

		//check if next two elements are added
		Assert::IsTrue(s[7]);
		Assert::IsTrue(s[0]);
		Assert::IsTrue(s[9]);
		Assert::IsTrue(!s[2]);

		//check myset size and if empty
		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		//clear myset
		s.clear();

		//check size and if empty again
		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
	}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Omar Zorob
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //










namespace MyMapUnitTests
{
	TEST_CLASS(ozorob2_tests)
	{
	public:

		TEST_METHOD(ozorob2_test01)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("banana"));

			Assert::IsTrue(s.insert("apricot"));
			Assert::IsTrue(!s.insert("apricot"));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto findApple = s.find("apple");
			auto notFound = s.find("Not In Tree");

			Assert::IsTrue(findApple != s.end());
			Assert::IsTrue(notFound == s.end());

			Assert::IsTrue(s["banana"]);
			Assert::IsTrue(!s["Not In Tree"]);
		}

		TEST_METHOD(ozorob2_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(8));
			Assert::IsTrue(s.insert(3));

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(!s.insert(10));

			Assert::IsTrue(s.insert(6));

			auto begin = s.begin();
			Assert::IsTrue(*begin == 3);

			Assert::IsFalse(*begin == 6);
			++begin;
			Assert::IsTrue(*begin == 6);

			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.begin() != s.end());
		}

		//TEST_METHOD(ozorob2_test03)
		//{
		//    myset<double>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    s += 100.0;
		//    Assert::IsTrue(!s.insert(100.0));

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(s.empty());

		//    double i = 0.0;
		//    while (i < 10.0)
		//    {
		//        Assert::IsTrue(s.insert(i));
		//        i = i + 1.0;
		//    }

		//    auto begin = s.begin();

		//    Assert::IsTrue(*begin == 0.0);
		//    Assert::IsTrue(s[2.0]);
		//    Assert::IsTrue(!s[10.0]);

		//    s += 10.0;
		//    Assert::IsTrue(s[10.0]);

		//}

		TEST_METHOD(ozorob2_test04)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			int i = 0;
			while (i < 10)
			{
				Assert::IsTrue(s.insert(i));
				i++;
			}

			Assert::IsTrue(!s.insert(1));
			Assert::IsTrue(s[0]);
			Assert::IsTrue(s.size() == 10);
			Assert::IsTrue(!s.empty());

			s.clear();

			Assert::IsTrue(!s[0]);
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

		}

		TEST_METHOD(ozorob2_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			myset<int> s2 = s;

			Assert::IsTrue(s2.size() == 3);
			Assert::IsTrue(!s2.empty());

			auto begin = s2.begin();
			Assert::IsTrue(*begin == 12);

			Assert::IsTrue(s2[71]);
			Assert::IsTrue(!s2.insert(20));
		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_t_tests)
	{
	public:
		/*
		TEST_METHOD(your_netid_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		TEST_METHOD(your_netid_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(your_netid_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(your_netid_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(your_netid_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(your_netid_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}
		*/
		//
		//Tests that begin() iterator stays at the front of the list after insertions
		//Last inserts check that begin() points to new head if 
		TEST_METHOD(pherou2_test1)
		{
			myset<int> s;

			Assert::IsTrue(s.insert(2));

			auto iter = s.begin();
			Assert::IsTrue((*iter) == 2);

			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));

			iter = s.begin();
			Assert::IsTrue((*iter) == 2);

			Assert::IsTrue(s.insert(5));
			Assert::IsTrue(s.insert(6));

			iter = s.begin();
			Assert::IsTrue((*iter) == 2);

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(7));

			iter = s.begin();
			Assert::IsTrue((*iter) == 1);

		}

		//
		//Tests that size is correct after attempts at dupe/valid insertions
		//
		//TEST_METHOD(pherou2_test2)
		//{
		//    myset<int> s;

		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(s.insert(1));

		//    Assert::IsTrue(s.size() == 1);

		//    Assert::IsTrue(s.insert(2));
		//    Assert::IsTrue(s.insert(3));
		//    Assert::IsTrue(s.insert(1));

		//    Assert::IsTrue(s.size() == 3);





		//}

		//Tests the ++operator to make sure it is traversing the set correctly
		//Last test checks that the iter (which has traversed to the set end)
		//is updated to point to an inserted element
		TEST_METHOD(pherou2_Test3)
		{
			myset<int> s;

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));

			auto iter = s.begin();

			Assert::IsTrue(*iter == 1);

			++iter;

			Assert::IsFalse(*iter == 1);
			Assert::IsTrue(*iter == 2);

			++iter;

			//Assert::IsFalse(*iter == 1);
			//Assert::IsFalse(*iter == 2);
			Assert::IsTrue(iter == s.end());

			//Assert::IsTrue(s.insert(3));
			//Assert::IsTrue(*iter == 3);
			//Assert::IsFalse(iter == s.end());
		}

		//
		//Test 4 checks if the copy constructor works by setting t equal to s
		//
		//TEST_METHOD(pherou2_Test4)
		//{
		//    myset<int> s;

		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(s.insert(2));
		//    Assert::IsTrue(s.insert(3));
		//    Assert::IsTrue(s.insert(4));


		//    myset<int> t = s;

		//    Assert::IsFalse(t.empty());
		//    Assert::IsTrue(t.size() == 4);

		//    Assert::IsTrue(t[0] == 1);
		//    Assert::IsTrue(t[1] == 2);
		//    Assert::IsTrue(t[2] == 3);
		//    Assert::IsTrue(t[3] == 4);




		//}

		//test 5 checks if the clear function works by deleting elements of the set and 
		//setting the size to 0. Also checks that iter begin() is set correctly once a list is 
		//reestablished
		TEST_METHOD(pherou2_test5)
		{
			myset<int> s;

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));

			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());

			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			auto iter = s.begin();

			Assert::IsTrue(iter == s.end());
			Assert::IsTrue(s.insert(3));
			iter = s.begin();

			Assert::IsTrue(iter != s.end());

			s.clear();

			Assert::IsTrue(s.begin() == s.end());
		}

	};




}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Priyank Patel
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(ppate313_tests)
	{
	public:

		// New Tests
		// /* 
		TEST_METHOD(ppate313_test_01)		// Test myset.clear()
		{
			myset<int> s;

			//Assert::IsNull(s);

			for (int i = 0; i < 50; i++)
			{
				s.insert(i);
			}

			Assert::IsTrue(s.size() == 50);

			s.clear();

			Assert::IsTrue(s.empty());

			auto iter = s.find(1);
			Assert::IsTrue(iter == s.end());

			Assert::IsTrue(s.insert(19));
			s += 9;

			Assert::IsTrue(s.size() < (s.size() + 1));
			Assert::IsTrue(!s[18]);
			Assert::IsTrue(s.size() == 2);

		}

		//TEST_METHOD(ppate313_test_02)		// Test myset operator=
		//{
		//    myset<int> lhs;

		//    Assert::IsFalse(lhs.size() == 4);		// Size has to be 0.

		//    for (int i = 0; i < 50; i++)
		//    {
		//        lhs.insert(i + 101);
		//    }

		//    Assert::IsTrue(lhs.size() == 50);

		//    myset<int> rhs;

		//    Assert::IsTrue(rhs.begin() == rhs.end());

		//    lhs = rhs;

		//    Assert::IsTrue(lhs.size() == 0);
		//    Assert::IsTrue(!lhs[500]);

		//    Assert::IsTrue(rhs.insert(15));
		//    Assert::IsTrue(rhs.insert(98));
		//    Assert::IsTrue(rhs.insert(6));
		//    Assert::IsTrue(rhs.insert(30));
		//    Assert::IsTrue(rhs.insert(18));
		//    Assert::IsTrue(rhs.insert(1));
		//    Assert::IsFalse(rhs.insert(1));			// Already inserted
		//    Assert::IsTrue(rhs.insert(63));
		//    Assert::IsTrue(rhs.insert(9));
		//    Assert::IsTrue(rhs.insert(27));

		//    lhs = rhs;

		//    Assert::IsTrue(lhs.size() == rhs.size());

		//    auto iter = lhs.find(501);
		//    Assert::IsTrue(iter == lhs.end());		// Not found already destroyed previous data

		//    auto iterL = lhs.find(18);
		//    auto iterR = rhs.find(18);

		//    Assert::IsTrue(iterR == iterL);

		//}

		TEST_METHOD(ppate313_test_03)		// Test myset copy constructor
		{
			myset<string> set1;

			Assert::IsTrue(set1.insert("Turtle"));
			Assert::IsTrue(set1.insert("20"));
			Assert::IsTrue(set1.insert("Lion"));
			Assert::IsTrue(set1.insert("12"));

			Assert::IsTrue(set1.size() == 4);

			myset<string> set2 = set1;

			Assert::IsTrue(set1.size() == set2.size());

			Assert::IsFalse(set2.insert("Lion"));
			Assert::IsFalse(set2.insert("12"));

			Assert::IsTrue(set2.insert("Cat"));
			Assert::IsTrue(set2.insert("3"));

			Assert::IsTrue(set2.size() == 6);
			Assert::IsTrue(set1.size() == 4);

			Assert::IsFalse(set1["Cat"]);
			Assert::IsTrue(set2["Turtle"]);

		}

		TEST_METHOD(ppate313_test_04)
		{
			myset<int> s1;

			Assert::IsTrue(s1.size() == 0);
			Assert::IsTrue(s1.empty());

			for (int i = 0; i < 500; i++)
			{
				Assert::IsTrue(s1.insert(i));
			}

			Assert::IsTrue(s1.size() == 500);
			Assert::IsTrue(!s1.empty());

			myset<int> s2;

			auto iter = s1.begin();


			while (iter != s1.end())
			{
				Assert::IsTrue(s2.insert((*iter) * 2));
				++iter;

			}

			Assert::IsTrue(s2.size() == s1.size());

			Assert::IsTrue(!s1[999]);
			Assert::IsTrue(s2[0]);

		}

		TEST_METHOD(ppate313_test_05)		// Test with large size
		{

			myset<int> set1;

			Assert::IsTrue(set1.empty());

			for (int i = 0; i < 2000; i++)
			{
				set1.insert(i + 1);
			}

			Assert::IsFalse(set1.insert(222));
			Assert::IsTrue(set1.size() == 2000);
			Assert::IsFalse(set1.empty());

			Assert::IsFalse(set1[2001]);
			Assert::IsTrue(set1[18]);

			myset<int> set2 = set1;

			set1.clear();

			Assert::IsTrue(set1.begin() == set1.end());

			auto iter = set2.find(999);

			Assert::IsTrue(*iter == 999);

		}
		// */
	};
}
/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// Patryk Toczko
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(ptoczk2_tests)
	{
	public:


		TEST_METHOD(ptoczk2_test01)
		{
			myset<double>  s;

			Assert::IsTrue(s.insert(1.0));
			Assert::IsTrue(s.insert(2.0));
			Assert::IsTrue(s.insert(3.0));


		}

		TEST_METHOD(ptoczk2_test02)
		{
			myset<int>  s;

			for (int i = 0; i < 101; i++)
				Assert::IsTrue(s.insert(i));

			Assert::IsTrue(s.size() == 101);

			myset<int> s2(s);
			Assert::IsTrue(s2.size() == 101);

			s.clear();
			Assert::IsTrue(s.size() == 0);

		}

		TEST_METHOD(ptoczk2_test03)
		{
			myset<int>  s;
			Assert::IsTrue(s.empty());

			for (int i = 0; i < 101; i++)
				Assert::IsTrue(s.insert(i));

			Assert::IsTrue(s.size() == 101);

			Assert::IsTrue(!s.empty());

			myset<int> s2 = s;
			Assert::IsTrue(s2.size() == 101);

			s2 += 101;

			Assert::IsTrue(s2.size() == 102);

		}

		//TEST_METHOD(ptoczk2_test04)
		//{
		//    myset<int>  s;
		//    Assert::IsTrue(s.empty());

		//    for (int i = 0; i < 50; i++)
		//        Assert::IsTrue(s.insert(i + 10));

		//    Assert::IsTrue(!s.empty());

		//        auto iter = s.find(5);
		//    Assert::IsTrue(iter == s.end());

		//    auto iter2 = s.find(25);
		//    Assert::IsTrue(iter != s.end());



		//}

		/*TEST_METHOD(ptoczk2_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert("Java"));
		Assert::IsTrue(s.insert("Python"));
		Assert::IsTrue(s.insert("Ruby"));

		Assert::IsFalse(s.insert("Python"));

		Assert::IsTrue(!s["C++"]);
		Assert::IsTrue(s["Python"]);

		auto iter = s.begin();
		++iter;
		Assert::IsTrue((*iter) == "Python");
		Assert::IsTrue((*iter) != "Ruby");

		}*/


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Rina Binxhiu
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(student_n_tests)
	{
	public:



		//tests 

		//TEST_METHOD(rbinxh2_test01)
		//{
		//    myset<double>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(2.2));
		//    Assert::IsTrue(s.insert(5.6));
		//    Assert::IsTrue(s.insert(6.9));
		//    Assert::IsTrue(s.insert(7.3));
		//    Assert::IsTrue(s.insert(10.1));
		//    Assert::IsTrue(s.insert(8.6));

		//    Assert::IsTrue(s.size() == 6);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find(5.6);

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 5.6);
		//    ++iter;

		//    auto a = 5.3;
		//    auto b = 2.2;
		//    Assert::IsTrue(s.insert(a + b));
		//    Assert::IsFalse(s.insert(a = b));

		//    auto iter1 = s.find(7.5);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 7.5);
		//    ++iter;


		//}
		//TEST_METHOD(rbinxh2_test02)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert("Monday"));
		//    Assert::IsTrue(s.insert("Tuesday"));
		//    Assert::IsTrue(s.insert("Wednesday"));
		//    Assert::IsTrue(s.insert("Thursday"));
		//    Assert::IsTrue(s.insert("Friday"));
		//    Assert::IsTrue(s.insert("Saturday"));
		//    Assert::IsTrue(s.insert("Sunday"));

		//    Assert::IsTrue(s.size() == 7);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find("Thursday");

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == "Thusday");
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == "Saturday");
		//    ++iter;

		//    auto iter1 = s.begin();
		//    auto iter2 = s.end();
		//    Assert::IsTrue(iter1 != iter2);

		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    auto iter3 = s.find("Wednesday");
		//    Assert::IsTrue(iter3 == s.end());

		//}
		//TEST_METHOD(rbinxh2_test03) {
		//    myset<double> s;
		//    s.clear();
		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.insert(420.69));
		//    Assert::IsTrue(s.insert(-1231.60912));
		//    Assert::IsTrue(s.insert(231.094239194));
		//    Assert::IsTrue(s.insert(111111.23213));
		//    s += 6342.0000000000;
		//    //Assert::IsTrue(s.insert(6342.0000000000));

		//    Assert::IsTrue(s.size() == 5);

		//    auto iter = s.find(-1231.60912);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == -1231.60912);

		//    s.clear();
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.size() == 0);

		//    iter = s.begin();
		//    Assert::IsTrue(*iter == -1231.60912);
		//    auto iter2 = s.find(231.094239194);
		//    ++iter;
		//    Assert::IsTrue(iter == iter2);
		//    iter = s.find(0);
		//    Assert::IsTrue(iter == s.end());
		//}
		//TEST_METHOD(rbinxh2_test04) {
		//    myset<string> s;
		//    string v;
		//    for (int i = 0; i < 3; i++) {
		//        switch (i) {
		//        case 0: v = "Hello";
		//            break;

		//        case 1: v = "341";
		//            break;

		//        case 2: v = "people";
		//            break;
		//        }
		//        s.clear();
		//        Assert::IsTrue(s.size() == 0);
		//        Assert::IsTrue(s.empty() == 1);
		//        Assert::IsTrue(s.insert(v));
		//        s += "trash";

		//        auto iter = s.find("trash");
		//        Assert::IsTrue(iter != s.end());
		//        Assert::IsTrue(*iter == "trash");


		//        auto iter2 = s.begin();
		//        ++iter2;
		//        Assert::IsTrue(iter == iter2);
		//        auto iter3 = s.end();
		//        Assert::IsTrue(iter2 != iter3);
		//        s.clear();
		//        Assert::IsTrue(iter2 == iter3);
		//    }
		//}
		TEST_METHOD(rbinxh2_test05)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("aad"));
			Assert::IsTrue(s.insert("aab"));
			Assert::IsTrue(s.insert("aaa"));
			Assert::IsTrue(s.insert("aac"));

			Assert::IsTrue(s.size() == 4);
			auto iter = s.find("aab");
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(iter != s.begin());
			Assert::IsTrue(*iter == "aab");
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "aac");
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "aad");
			++iter;
			Assert::IsTrue(iter == s.end());
			s.clear();

			Assert::IsTrue(s.empty());
			s += "finished";
		}




	};
};/*unittest1.cpp*/

  //
  // Unit tests for mymap data structure.
  //
  // Rana Chiu
  // U. of Illinois, Chicago
  // CS 341, Fall 2017
  // Project #03
  //









namespace MyMapUnitTests
{
	TEST_CLASS(rchiu5_tests)
	{
	public:

		TEST_METHOD(rchiu5_test01)
		{
			myset<char> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert('t'));
			Assert::IsTrue(s.insert('e'));
			Assert::IsTrue(s.insert('s'));
			Assert::IsTrue(!s.insert('t'));  // should not insert again

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			// test clear()
			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			auto iter = s.find('t');

			Assert::IsTrue(iter == s.end());
		}

		TEST_METHOD(rchiu5_test02)
		{
			myset<char> s1;

			Assert::IsTrue(s1.insert('t'));
			Assert::IsTrue(s1.insert('e'));
			Assert::IsTrue(s1.insert('s'));
			Assert::IsTrue(!s1.insert('t'));  // should not insert again

											  // test operator=
			myset<char> s2 = s1;

			Assert::IsTrue(s1.size() == s2.size());
			Assert::IsTrue(!s2.empty());

			auto iter1 = s1.begin();
			auto iter2 = s2.begin();

			Assert::IsTrue(iter1 != s1.end());
			Assert::IsTrue(iter2 != s2.end());
			Assert::IsTrue(*iter1 == *iter2);

			Assert::IsTrue(s2['s']);
			Assert::IsTrue(!s2['x']);  // should not find
		}

		TEST_METHOD(rchiu5_test03)
		{
			myset<string> s1;

			Assert::IsTrue(s1.insert("cherry"));
			Assert::IsTrue(s1.insert("banana"));
			Assert::IsTrue(s1.insert("strawberry"));
			Assert::IsTrue(s1.insert("kiwi"));

			// test copy constructor
			myset<string> s2(s1);

			Assert::IsTrue(s1.size() == s2.size());
			Assert::IsTrue(!s2.empty());

			auto iter1 = s1.begin();
			auto iter2 = s2.begin();

			Assert::IsTrue(iter1 != s1.end());
			Assert::IsTrue(iter2 != s2.end());
			Assert::IsTrue(*iter1 == *iter2);
			Assert::IsTrue(*iter1 == "banana");

			Assert::IsTrue(s2["kiwi"]);
			Assert::IsTrue(!s2["apple"]);  // should not find
		}

		TEST_METHOD(rchiu5_test04)
		{
			myset<double> s;
			double val = 0.0;

			Assert::IsTrue(s.insert(22.0));
			s += 22.0;  // should not insert again

			Assert::IsTrue(s.size() == 1);

			s += 11.0;
			s += 33.0;
			s += 0.0;
			s += 44.0;

			Assert::IsTrue(s.size() == 5);

			// test iterators
			for (auto iter = s.begin(); iter != s.end(); ++iter)
			{
				Assert::IsTrue(*iter == val);
				val += 11.0;
			}

			Assert::IsTrue(val == 55.0);
			Assert::IsTrue(!s[55.0]);  // should not find
			Assert::IsTrue(s.insert(55.0));
			Assert::IsTrue(s[55.0]);
		}

		//TEST_METHOD(rchiu5_test05)
		//{
		//    // test destructor
		//    myset<myset<int>*> s;

		//    Assert::IsTrue(s.size() == 0);

		//    if (s.empty())
		//    {
		//        myset<int> temp;

		//        Assert::IsTrue(temp.insert(789));
		//        Assert::IsTrue(temp.insert(456));
		//        Assert::IsTrue(temp.insert(123));
		//        Assert::IsTrue(temp.size() == 3);

		//        // insert only one set for simplicity
		//        Assert::IsTrue(s.insert(&temp));
		//        Assert::IsTrue(s.size() == 1);
		//        Assert::IsTrue(!s.empty());

		//        auto iter1 = s.begin();
		//        auto ptrTemp = *iter1;
		//        auto iter2 = ptrTemp->begin();

		//        Assert::IsTrue(*iter2 == 123);
		//        Assert::IsTrue(iter1 == s.find(&temp));
		//        Assert::IsTrue(s[&temp]);
		//    }

		//    auto iter1 = s.begin();
		//    auto ptrTemp = *iter1;
		//    auto iter2 = ptrTemp->begin();

		//    // s should still contain one element except it no longer points to
		//    // anything since temp has left the scope and called its destructor
		//    Assert::IsTrue(*iter2 != 123);
		//    Assert::IsTrue(s.size() == 1);
		//}

		/* TEST_METHOD(your_netid_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		TEST_METHOD(your_netid_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(your_netid_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(your_netid_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(your_netid_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(your_netid_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		} */


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Robert J. Hickok
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









static const char ALPHA_NUM[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

namespace MyMapUnitTests
{
	TEST_CLASS(student_u_tests)
	{
	public:



		TEST_METHOD(rhicko2_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(19));
			Assert::IsTrue(s.insert(28));
			Assert::IsTrue(s.insert(23));
			Assert::IsTrue(s.insert(42));
			Assert::IsTrue(s.insert(87));
			Assert::IsTrue(s.insert(99));

			s.clear();

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			s += 100;
			s += 101;
			s += 102;

			Assert::IsFalse(s.empty());

			Assert::IsTrue(s[100]);
			Assert::IsTrue(s[101]);
			Assert::IsTrue(s[102]);

			Assert::IsTrue(s.size() == 3);
		}


		TEST_METHOD(rhicko2_test02)
		{
			myset<int> s;
			myset<int> s2;
			for (int i = 0; i < 1500; ++i) {
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 1500);

			for (int i = 0; i < 1231; ++i) {
				Assert::IsTrue(s2.insert(i));
			}

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s2.size() == 1231);

			myset<int> s3 = s2;

			Assert::IsTrue(s3.size() == s2.size());

			auto iter = s2.begin();
			auto it = s3.begin();
			Assert::IsTrue(*iter == *it);

			s.clear();
			s2.clear();
			s3.clear();

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s2.empty());
			Assert::IsTrue(s3.empty());
		}

		//TEST_METHOD(rhicko2_test03)
		//{
		//    myset<string> s;

		//    s += "foo";
		//    s += "bar";
		//    s += "baz";

		//    auto iter = s.begin();
		//    auto foo = s.find("foo");
		//    auto bar = s.find("bar");
		//    auto baz = s.find("baz");

		//    Assert::IsTrue(*bar == *iter);

		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*baz == *iter);

		//    ++iter;
		//    Assert::IsTrue(iter == s.end());
		//    Assert::IsTrue(*foo == *iter);

		//    Assert::IsTrue(*baz != *iter);
		//    Assert::IsTrue(*bar != *iter);

		//    myset<string> s2 = s;
		//    foo = s2.find("foo");
		//    bar = s2.find("bar");
		//    baz = s2.find("baz");

		//    Assert::IsFalse(*iter != *foo);
		//    Assert::IsFalse(*iter == *bar);
		//    Assert::IsFalse(*iter == *baz);

		//    s.clear();
		//    s2.clear();

		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s2.empty());
		//}

		TEST_METHOD(rhicko2_test04)
		{
			myset<char> s;
			for (int i = 0; i < sizeof(ALPHA_NUM) - 1; ++i) {
				Assert::IsTrue(s.insert(ALPHA_NUM[i]));
			}

			Assert::IsTrue(s['A']);
			Assert::IsFalse(s['>']);

			auto iter = s.begin();

			Assert::IsTrue(*iter);

			auto found = s.find('!');

			Assert::IsTrue(iter == found);

			++iter;
			found = s.find('#');
			Assert::IsTrue(iter == found);

			for (int i = 0; i < sizeof(ALPHA_NUM) - 1; ++i) {
				Assert::IsTrue(s[ALPHA_NUM[i]]);
			}

			Assert::IsFalse(s['<']);
			Assert::IsFalse(s[',']);


			s.clear();
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(rhicko2_test05)
		{
			myset<int> s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			s += 100;
			s += 200;
			s += 300;

			Assert::IsTrue(s[100]);
			Assert::IsTrue(s[200]);
			Assert::IsTrue(s[300]);
			Assert::IsFalse(s[999]);

			auto iter = s.find(100);
			Assert::IsTrue(*iter == 100);

			auto it = s.find(930);
			Assert::IsTrue(it == s.end());

			myset<int> s2;
			for (int i = 0; i < 1000; ++i) {
				Assert::IsTrue(s2.insert(i));
			}

			int j = 0;
			for (auto x : s2) {
				Assert::IsTrue(x == j);
				++j;
			}

		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MySetUnitTests
{
	TEST_CLASS(rinsle2_tests)
	{
	public:

		TEST_METHOD(rinsle2_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(rinsle2_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(rinsle2_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(rinsle2_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(rinsle2_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(rinsle2_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(rinsle2_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(rinsle2_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}

		//TEST_METHOD(rinsle2_new_test01)
		//{
		//    myset<string> set;

		//    //initialized correctly
		//    Assert::IsFalse((set.size()) != 0);
		//    Assert::IsTrue(set.empty());
		//    //does this work????
		//    Assert::IsTrue(set.insert("hello"));
		//    Assert::IsTrue(set.insert("potato"));
		//    Assert::IsTrue(set.insert("potatoes"));
		//    Assert::IsTrue(set.insert("Meeeee"));

		//    auto iter = set.begin();
		//    Assert::IsTrue(*iter == "hello");
		//    set.clear();
		//    Assert::IsTrue(set.size() == 0);
		//    set += "boi";
		//    Assert::IsTrue(*iter == "boi");
		//    Assert::IsTrue(set[0] == true);
		//}

		TEST_METHOD(rinsle2_new_test02)
		{
			myset<char> s;

			//check insertions
			Assert::IsTrue(s.insert('a'));
			Assert::IsTrue(s.insert('b'));
			Assert::IsTrue(s.insert('c'));
			Assert::IsTrue(s.insert('d'));
			Assert::IsFalse(s.insert('d'));
			Assert::IsTrue(s.insert('e'));
			Assert::IsTrue(s.insert('f'));
			Assert::IsFalse(s.size() != 6);
			Assert::IsFalse(s.empty());
			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsFalse(s.size() != 0);

		}

		//TEST_METHOD(rinsle2_new_test03)
		//{
		//    myset<int> s;
		//    //check loop inserting
		//    for (int i = 0; i < 10; i++)
		//    {
		//        Assert::IsTrue(s.insert(i));
		//    }
		//    for (int j = 0; j < 20; j++)
		//    {
		//        if (j < 11)
		//            Assert::IsFalse(s.insert(j));
		//        else
		//            Assert::IsTrue(s.insert(j));
		//    }
		//}

		TEST_METHOD(rinsle2_new_test04)
		{
			myset<bool> s;
			Assert::IsTrue(s.insert(true));
			Assert::IsTrue(s.insert(false));
			Assert::IsFalse(s.size() != 2);
			for (int i = 0; i < 10; i++)
			{
				Assert::IsFalse(s.insert(true));
				Assert::IsFalse(s.insert(false));
				Assert::IsFalse(s.size() > 2);
			}
		}

		//TEST_METHOD(rinsle2_new_test05)
		//{
		//    myset<int> s;
		//    Assert::IsFalse(s.size() == 0);

		//    Assert::IsFalse(!s.insert(15));
		//    Assert::IsFalse(!s.insert(25));
		//    Assert::IsFalse(!s.insert(35));
		//    Assert::IsFalse(!s.insert(45));
		//    Assert::IsFalse(!s.insert(125));

		//    //check for duplicate
		//    Assert::IsFalse(s.insert(15));
		//    Assert::AreEqual(s.size(), 5);
		//    Assert::IsTrue(s[5]);
		//    Assert::IsFalse(*s.end() == 125);
		//}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Ryan Moran
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(rmoran8_tests)
	{
	public:

		//TEST_METHOD(rmoran8_test01) {			// test inserting one element 

		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);		// initial size 0
		//    Assert::IsTrue(s.insert(5));			// insert 5			s = 5
		//    Assert::IsTrue(!s.empty());			// set should not be empty
		//    Assert::IsFalse(s.insert(5));			// 5 already in array so don't insert... return false

		//    Assert::IsTrue(s.size() == 1);		// size should be 1
		//    Assert::IsTrue(s[5]);
		//    s += 5;								// try inserting 5 again
		//    Assert::IsTrue(s.size() == 1);		// size should be 1

		//    s += 1;								// insert 1         s = 1, 5
		//    Assert::IsTrue(s[1]);
		//    Assert::IsTrue(s.size() == 2);		// size should be 2
		//    Assert::IsTrue(s.insert(1));

		//    Assert::IsTrue(!s[99]);
		//}

		TEST_METHOD(rmoran8_test02) {			// test clearing  array

			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));		// add 3 elements    s = 1, 5, 12
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(5));

			Assert::IsTrue(s.size() == 3);		// size should be 3
			Assert::IsTrue(!s.empty());			// shouldn't be empty

												// Fails for 1

			Assert::IsTrue(s[5]);

			s.clear();							// clears all contents in array		s = empty

			Assert::IsTrue(s.size() == 0);		// size should be 0
			Assert::IsTrue(s.empty());			// should be empty

			Assert::IsFalse(s[1]);				// should return false 
		}

		TEST_METHOD(rmoran8_test03) {			// copy constructor test

			myset<string>  s;

			Assert::IsTrue(s.size() == 0);		// size should be 0
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));	// s = apple, banana, peach
			Assert::IsTrue(s.insert("banana"));
			Assert::IsTrue(s.insert("peach"));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(s["apple"]);

			myset<string>  s1(s);					// copies contents of s to s1       s1 = apple, banana, peach

			Assert::IsTrue(!s1.insert("apple"));	// should return false
			Assert::IsTrue(s1.size() == 3);

			Assert::IsTrue(s1.find("pear") == s1.end());		// shouldn't find "pear"
			Assert::IsTrue(s.find("apple") != s1.end());		// should find apple
		}

		TEST_METHOD(rmoran8_test04) {
			myset<double>  s;

			Assert::IsTrue(s.insert(5.0));	// s = 5.0
			Assert::IsTrue(!s.insert(5.0));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			s += 5.0;

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s[5.0]);

			s += 3.0;
			Assert::IsTrue(s.size() == 2);
			Assert::IsFalse(s[1.0]);

			s += 10.4;
			s += 3.5;
			s += 78.4;
			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(s[5.0]);
			Assert::IsTrue(!s[99.3]);
			s.clear();
			Assert::IsTrue(s.size() == 0);


		}

		TEST_METHOD(rmoran8_test05) {
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			s += 12;
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			s.clear();

			Assert::IsTrue(!s[71]);
			Assert::IsTrue(!s[12]);
			Assert::IsTrue(!s[5]);
			Assert::IsTrue(!s[44]);
			Assert::IsTrue(!s[99]);
		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(Rrashi3_tests)
	{
	public:

		//TEST_METHOD(Rrashi3_test01)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert("Rashid"));
		//    Assert::IsTrue(s.insert("Banana"));
		//    Assert::IsTrue(s.insert("Apple"));

		//    Assert::IsTrue(s.size() == 3);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.begin();
		//    ++iter;
		//    ++iter;

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsFalse(*iter == "Banana");
		//    Assert::IsTrue(*iter == "Apple");


		//}

		TEST_METHOD(Rrashi3_test02)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("Red"));
			Assert::IsTrue(s.insert("Blue"));
			Assert::IsTrue(s.insert("Green"));
			Assert::IsTrue(s.insert("Purple"));

			Assert::IsTrue(!s.insert("Red"));
			Assert::IsTrue(!s.insert("Blue"));
			Assert::IsTrue(!s.insert("Green"));
			Assert::IsTrue(!s.insert("Purple"));

			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(Rrashi3_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(s.insert("Green"));
			Assert::IsTrue(s.insert("Purple"));

			Assert::IsFalse(s.size() == 1);
			Assert::IsTrue(s.size() == 3);

			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["Rashid"]);
		}

		//TEST_METHOD(Rrashi3_test04)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert("apple"));
		//    Assert::IsTrue(!s.insert("apple"));  // should not insert again
		//    Assert::IsTrue(s.insert("UIC"));
		//    Assert::IsTrue(s.insert("UFC"));

		//    auto iter = s.begin();

		//    while (iter != s.end())
		//    {
		//        Assert::IsTrue(s[*iter]);

		//        ++iter;
		//    }


		//    Assert::IsTrue(!s.size() == 1);
		//    Assert::IsTrue(!s.empty());
		//}



		TEST_METHOD(Rrashi3_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}



	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{

	TEST_CLASS(rtrieu2_tests)
	{
	public:
		//TEST_METHOD(rtrieu2_test1) //test clear
		//{
		//    myset<int> s;
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(s.insert(19));
		//    Assert::IsTrue(s.insert(10));
		//    Assert::IsTrue(s.insert(9));
		//    Assert::IsTrue(s.insert(8));
		//    Assert::IsTrue(s.insert(7));
		//    Assert::IsTrue(s.insert(6));
		//    Assert::IsTrue(s.insert(100));
		//    Assert::IsTrue(s.size() == 8);

		//    s.clear();
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(!s.empty());
		//}
		//TEST_METHOD(rtrieu2_test2)//test clear using strings
		//{
		//    myset<string> s;
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s.insert("z"));
		//    Assert::IsTrue(s.insert("y"));
		//    Assert::IsTrue(s.insert("x"));
		//    Assert::IsTrue(s.insert("a"));
		//    Assert::IsTrue(s.insert("b"));
		//    Assert::IsTrue(s.insert("c"));
		//    Assert::IsTrue(s.insert("d"));
		//    Assert::IsTrue(s.insert("e"));
		//    Assert::IsTrue(s.insert("f"));
		//    Assert::IsTrue(s.size() == 9);

		//    s.clear();
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(!s.empty());
		//}
		//TEST_METHOD(rtrieu2_test3)//test find
		//{
		//    myset<int> s;
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(s.insert(19));
		//    Assert::IsTrue(s.insert(10));
		//    Assert::IsTrue(s.insert(9));
		//    Assert::IsTrue(s.insert(8));
		//    Assert::IsTrue(s.insert(7));
		//    Assert::IsTrue(s.insert(6));
		//    Assert::IsTrue(s.insert(100));
		//    Assert::IsTrue(s.size() == 8);

		//    auto iter = s.find(100);
		//    Assert::IsTrue(iter != s.end());

		//}
		//TEST_METHOD(rtrieu2_test4)//test [] operator
		//{
		//    myset<int> s;
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(s.insert(19));
		//    Assert::IsTrue(s.insert(10));
		//    Assert::IsTrue(s.insert(9));
		//    Assert::IsTrue(s.insert(8));
		//    Assert::IsTrue(s.insert(7));
		//    Assert::IsTrue(s.insert(6));
		//    Assert::IsTrue(s.insert(100));
		//    Assert::IsTrue(s.size() == 8);


		//    Assert::IsTrue(s[100]);
		//    Assert::IsFalse(s[101]);

		//}
		//TEST_METHOD(rtrieu2_test5)//test begin
		//{
		//    myset<int> s;
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s.insert(100));
		//    Assert::IsTrue(s.insert(19));
		//    Assert::IsTrue(s.insert(10));
		//    Assert::IsTrue(s.insert(1));
		//    Assert::IsTrue(s.insert(8));
		//    Assert::IsTrue(s.insert(7));
		//    Assert::IsTrue(s.insert(6));
		//    Assert::IsTrue(s.insert(9));
		//    Assert::IsTrue(s.size() == 8);


		//    Assert::IsTrue(*s.begin() == 1);
		//    //++iter;
		//    //Assert::IsTrue(*iter == 6);
		//    //++iter;
		//    //Assert::IsTrue(*iter == 7);
		//    //++iter;
		//    //Assert::IsTrue(*iter == 8);
		//    //++iter;
		//    //Assert::IsTrue(*iter == 9);



		//}
		/*
		TEST_METHOD(your_netid_test01)//constructor test
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		TEST_METHOD(your_netid_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12)); //insert test

		Assert::IsTrue(s.size() == 1);//size test
		Assert::IsTrue(!s.empty()); //empty test
		}

		TEST_METHOD(your_netid_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(your_netid_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(your_netid_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(your_netid_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}

		}
		*/

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // RYAN TROKEY
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(rtroke2_tests)
	{
	public:

		/* TEST_METHOD(rtroke2_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		TEST_METHOD(rtroke2_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(rtroke2_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(rtroke2_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(rtroke2_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(rtroke2_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(rtroke2_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(rtroke2_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}*/

		TEST_METHOD(rtroke2_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(5));
			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());
			s.clear();
			Assert::IsTrue(s.empty());

		}

		TEST_METHOD(rtroke2_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.size() == 3);
			s += 4;
			s += 5;
			s += 6;
			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(s[4]);
			Assert::IsTrue(!s[7]);
			Assert::IsTrue(!s.empty());

		}

		TEST_METHOD(rtroke2_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("ant"));
			Assert::IsTrue(s.insert("bear"));
			Assert::IsTrue(s.insert("cat"));
			Assert::IsTrue(s.insert("dog"));
			s += "elephant";
			Assert::IsTrue(!s.insert("elephant"));
			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s["ant"]);
			Assert::IsTrue(!s["monkey"]);
		}

		TEST_METHOD(rtroke2_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert("arm"));
			Assert::IsTrue(s.insert("back"));
			Assert::IsTrue(s.insert("chin"));
			auto iter = s.begin();
			Assert::IsTrue(*iter == "arm");
			++iter;
			Assert::IsTrue(*iter == "back");
			//Assert::IsTrue(!iter == s.end());
			++iter;
			Assert::IsTrue(*iter == "chin");
			++iter;
			Assert::IsTrue(iter == s.end());
		}

		TEST_METHOD(rtroke2_test05)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			s += "test";
			s += "quiz";
			Assert::IsTrue(!s.insert("test"));
			Assert::IsTrue(!s.insert("quiz"));
			Assert::IsTrue(s.insert("homework"));
			auto iter = s.find("homework");
			Assert::IsTrue(*iter == "homework");
			Assert::IsTrue(iter == s.begin());
			auto iter2 = s.find("project");
			Assert::IsTrue(iter2 == s.end());
			Assert::IsTrue(iter != iter2);
			s.clear();
			auto iter3 = s.find("homework");
			Assert::IsTrue(iter3 == s.end());

		}


	};
}/*unittest_sather2.cpp*/

 //
 // Unit Tests
 //
 // Sarah Ather
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(sather2_tests)
	{
	public:

		//Test size  
		TEST_METHOD(sather2_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		//Test iterator class  
		TEST_METHOD(sather2_test02)
		{
			myset<int>  s;
			auto iter = s.begin();
			++iter;

			Assert::IsTrue(s.begin() == s.end());
		}

		//Test empty 
		//TEST_METHOD(sather2_test03)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());
		//}

		////Test insert  
		//TEST_METHOD(sather2_test04)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert("hello"));

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s["hello"]);
		//}

		//Test [e]
		TEST_METHOD(sather2_test05)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("hello"));
			Assert::IsTrue(!s.insert("hello"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["hello"]);
			Assert::IsTrue(!s["tear"]);  // should not find
		}




	};
}
/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// Siddharth Basu
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03 Part #1 
// Five unit Tests 









namespace MyMapUnitTests
{
	TEST_CLASS(sbasu9_tests)
	{
	public:



		//TEST_METHOD(sbasu9_test01) //First Test Method
		//{
		//    myset<int> s(10); //set s to size of 10 

		//    Assert::IsTrue(s.size() == 0);  //True if nothing there

		//    auto a = s.begin(); //beginging of the set
		//    auto b = s.end();   //end of the set

		//    Assert::IsFalse(a != b); //As long as A is not equal to B
		//}

		TEST_METHOD(sbasu9_test02) //Second Test Method
		{
			myset<int>  s; //Initializing set with s

			Assert::IsTrue(s.size() == 0); //Nothing is in there so size is 0 so True
		}

		//TEST_METHOD(sbasu9_test03) // Third Test Method
		//{
		//    myset<char> s(10); //Five out of Ten indexes will be taken 

		//    s.push_back('D'); //pushing back DOGGY in set
		//    s.push_back('O');
		//    s.push_back('G');
		//    s.push_back('G');
		//    s.push_back('Y');

		//    Assert::IsTrue(s.size() == 5); //Should be True since 5 letters long

		//}

		TEST_METHOD(sbasu9_test04)
		{
			myset<string>  s; //set s

			Assert::IsTrue(s.size() == 0); //Nothing is in the set
			Assert::IsTrue(s.empty()); //True if empty

			Assert::IsTrue(s.insert("Oranges"));
			Assert::IsTrue(!s.insert("Oranges"));  // should not insert Oranges again
			Assert::IsTrue(s.insert("Mangoes")); //Inserting another fruit in set

			Assert::IsTrue(s.size() == 2); //Should have two fruits in list
			Assert::IsTrue(!s.empty()); //It is not empty

			Assert::IsTrue(s["Mangoes"]); //Would find  
			Assert::IsTrue(!s["Strawberries"]);  // would not find
		}



		//TEST_METHOD(sbasu9_test05)
		//{
		//    myset <string>  s(30); //30 Items can be put in set 

		//    Assert::IsTrue(s.insert("Halo")); //Halo in the first index
		//    Assert::IsTrue(s.insert("Assassins Creed")); //AC in the second index
		//    Assert::IsTrue(s.insert("Call of Duty"));  //COD in third index

		//    Assert::IsTrue(s[0] == "Halo"); //True if Halo is in the index 0
		//    Assert::IsTrue(s[1] == "Assassins Creed");//True if AC is in second index
		//    Assert::IsTrue(s[2] == "Call of Duty"); //If COD is in third index
		//}




	};
}
/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// Shawn Cody
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(scody2_tests)
	{
	public:

		TEST_METHOD(scody2_test01)
		{ // Test case for testing find(e)
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(s.insert(4));

			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue((s.find(3)) != s.end());
			Assert::IsTrue((s.find(5)) == s.end());

		}

		TEST_METHOD(scody2_test02)
		{ //Test the copy constructor
			myset<double>  s1;
			myset<double>  s2;

			Assert::IsTrue(s1.size() == 0);
			Assert::IsTrue(s1.empty());

			Assert::IsTrue(s2.size() == 0);
			Assert::IsTrue(s2.empty());

			Assert::IsTrue(s1.insert(1.0));
			Assert::IsTrue(s1.insert(2.0));
			Assert::IsTrue(s1.insert(3.0));

			Assert::IsTrue(s2.insert(4.0));
			Assert::IsTrue(s2.insert(5.0));
			Assert::IsTrue(s2.insert(6.0));
			Assert::IsTrue(s2.insert(7.0));

			Assert::IsTrue(s1.size() == 3);
			Assert::IsTrue(!s1.empty());

			Assert::IsTrue(s2.size() == 4);
			Assert::IsTrue(!s2.empty());

			auto s1Iterator = s1.begin();
			auto s2Iterator = s2.begin();

			Assert::IsTrue(*s1Iterator == 1.0);
			Assert::IsTrue(*s2Iterator == 4.0);

			s2 = s1; // make a copy of s1 into s2

			s2Iterator = s2.begin();

			Assert::IsTrue(*s2Iterator == 1.0);
			Assert::IsTrue(s2.size() == 3);

		}

		TEST_METHOD(scody2_test03)
		{//Test the .clear() method
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("scody2"));
			Assert::IsTrue(s.insert("661284064"));
			Assert::IsTrue(s.insert("random string"));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(!s["scody2"]);
			Assert::IsTrue(!s["661284064"]);
			Assert::IsTrue(!s["random string"]);
		}

		TEST_METHOD(scody2_test04)
		{ // Test the .begin() method
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("Shawn"));
			Assert::IsTrue(s.insert("Cody"));
			Assert::IsTrue(s.insert("End"));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iterator = s.begin();

			Assert::IsTrue(!(iterator == s.end()));
			Assert::IsTrue(*iterator == "Cody");

			++iterator;

			Assert::IsTrue(!(iterator == s.begin()));
		}

		TEST_METHOD(scody2_test05)
		{ // Test the .end() method
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("Shawn"));
			Assert::IsTrue(s.insert("Cody"));
			Assert::IsTrue(s.insert("End"));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iterator = s.end();
			auto begin = s.begin();

			++begin;
			++begin;
			++begin;

			Assert::IsTrue(begin == s.end());
			Assert::IsTrue(!(iterator == s.begin()));
			//Assert::IsTrue(!(*iterator == "Shawn"));

		}

	};
}
//
// Unit tests for mymap data structure.
//
// Saurav Das
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(sdas31_tests)
	{
	public:


		TEST_METHOD(sdas31_test01)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() != 1);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("mango"));
			Assert::IsTrue(!s.insert("mango"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["mango"]);
			Assert::IsTrue(!s["peach"]);  // should not find

			s += "peach";                //another way to insert
			Assert::IsTrue(s["peach"]);
		}

		TEST_METHOD(sdas31_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(100));
			Assert::IsTrue(s.insert(200));
			s += 300;                         // another way to insert:
			Assert::IsTrue(!s.insert(300));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[100]);
			Assert::IsTrue(s[200]);
			Assert::IsTrue(s[300]);
			Assert::IsTrue(!s[400]);
			Assert::IsTrue(!s[500]);
		}

		TEST_METHOD(sdas31_test03)
		{
			myset<double>  s;

			Assert::IsTrue(s.insert(1.5));
			Assert::IsTrue(s.insert(2.9));
			Assert::IsTrue(s.insert(3));
			Assert::IsTrue(!s.insert(3.0));

			Assert::IsTrue(s.size() != 4);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2.9);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2.9);

			auto iter2 = s.find(4.0);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(sdas31_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("abc"));
			Assert::IsTrue(s.insert("bac"));
			Assert::IsTrue(s.insert("cab"));
			Assert::IsTrue(s.insert("aa"));
			Assert::IsTrue(!s.insert("cab"));
			Assert::IsTrue(s.insert("cad"));
			Assert::IsTrue(s.insert("a"));

			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

			auto iter = s.begin();
			Assert::IsTrue(*iter == "a");

			//iter++;
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "aa");

			//iter++;
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "abc");

			//iter++;
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "bac");

			//iter++;
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "cab");

			//iter++;
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "cad");

			//iter++;
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find("aaa");
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(sdas31_test05)
		{
			myset<int>  s;

			for (int i = 100; i > 0; i -= 10)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 10);
			Assert::IsTrue(!s.empty());

			int j = 10;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				//iter++;
				++iter;
				j += 10;
			}

			int k = 10;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				k += 10;
			}
		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Filip Serwinski
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(serwins2_tests)
	{
	public:

		//TEST_METHOD(serwins2_test01)
		//{
		//    myset<double> s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(1.20));
		//    Assert::IsTrue(s.insert(2.4));
		//    Assert::IsTrue(s.insert(3.612));
		//    Assert::IsTrue(s.insert(4.8333));
		//    Assert::IsTrue(s.insert(99.99));

		//    Assert::IsTrue(s.size() == 5);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find(4.8333);

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 3);

		//    iter = s.find(1.23);

		//    Assert::IsTrue(iter == s.end());
		//}

		//TEST_METHOD(serwins2_test02)
		//{
		//    myset<int> s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty() == true);

		//    int j = 1;
		//    int k = 0;

		//    Assert::IsTrue(j == 0);
		//    for (int i = 1; i <= 10; i++)
		//    {
		//        j = j * 2;
		//        int k = j + i;
		//        Assert::IsTrue(s.insert(k));
		//    }
		//    //i j k
		//    //1,2,3
		//    //2,4,6
		//    //3,8,11
		//    //4,16,20
		//    //5,32,37
		//    //6,64,60
		//    //7,128,135
		//    //8,256,264
		//    //9,512,521
		//    //10,1024,1034

		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(s.size() == 10);


		//    auto iter = s.find(2);
		//    Assert::IsTrue(iter == s.end());

		//    iter = s.find(1034);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 1034);

		//    iter = s.find(135);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 135);

		//}

		TEST_METHOD(serwins2_test03)
		{
			myset<string> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert("Sentinal"));
			Assert::IsTrue(s.insert("Arc Strider"));
			Assert::IsTrue(s.insert("Dawn Blade"));
			Assert::IsTrue(s.insert("Vigilance Wing"));
			Assert::IsTrue(s.insert("Trials of the Nine"));

			// no double insertion
			Assert::IsTrue(!s.insert("Sentinal"));

			// Should find this 1
			Assert::IsTrue(s["Sentinal"]);

			// Should not find this 1
			Assert::IsTrue(!s["Calus"]);

			s += "Sweet Business"; // This one should insert

			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());
		}

		//TEST_METHOD(serwins2_test04)
		//{
		//    myset<int> s;

		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.size() == 0);

		//    for (int i = 0; i <= 1000; i = i + 2)
		//    {
		//        Assert::IsTrue(s.insert(i));
		//    }

		//    Assert::IsTrue(s[500]);
		//    Assert::IsTrue(s[250]);
		//    Assert::IsTrue(!s[251]);
		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(s.size() == 500);

		//    s.clear();

		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.size() == 0);
		//}

		TEST_METHOD(serwins2_test05)
		{
			myset<int> s;

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);

			Assert::IsTrue(s.insert(100));
			Assert::IsTrue(s.insert(2134));
			Assert::IsTrue(s.insert(345));
			Assert::IsTrue(s.insert(27445));
			Assert::IsTrue(s.insert(83444));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(345);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 345);
			iter = s.find(27445);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 27445);
			iter = s.find(83444);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 83444);
			iter = s.find(0);

			Assert::IsTrue(iter == s.end());

			iter = s.find(213);
			Assert::IsTrue(iter == s.end());

			s.clear();

			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
		}


	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // YOUR NAME
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(slingu2_tests)
	{
	public:

		//increment test
		TEST_METHOD(slingu2_Test01)
		{
			myset<int> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(10));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(19));
			Assert::IsTrue(s.size() == 2);

			auto iter = s.begin();

			Assert::IsTrue(*iter == 10);

			++iter;

			Assert::IsTrue(*iter == 19);

			++iter;

			Assert::IsTrue(iter == s.end());

			(s.clear());

			iter = s.begin();

			Assert::IsTrue(iter == s.end());

			Assert::IsTrue(s.size() == 0);
		}


		//copy contructor test
		TEST_METHOD(slingu2_Test02)
		{
			myset<int> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(10));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(19));
			Assert::IsTrue(s.size() == 2);

			myset<int> s2(s); //copy contructor
			myset<int> s3 = s;

			Assert::IsTrue(s2.size() == 2);
			Assert::IsTrue(s3.size() == 2);

			auto iter1 = s2.begin();
			auto iter2 = s3.begin();

			Assert::IsTrue(iter1 != s2.end());
			Assert::IsTrue(*iter1 == *iter2);

			Assert::IsTrue(!s3.empty());

			s2.clear();
			Assert::IsTrue(s2.empty());

			s3.clear();
			Assert::IsTrue(s3.size() == 0);
		}

		//insert strings and search function TEST
		TEST_METHOD(slingu2_Test03)
		{
			myset<string> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("Red"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert("Blue"));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(s.insert("Neon"));

			Assert::IsTrue(!s.insert("Red")); //shoudnt insert again

			auto iter = s.begin();

			Assert::IsTrue(*iter == "Blue");

			Assert::IsTrue(s["Red"]); //should find
			Assert::IsTrue(!s["Green"]); //shouldnt find

			s.clear();

			iter = s.begin();

			Assert::IsTrue(iter == s.end());

			Assert::IsTrue(s.size() == 0);

		}

		//INSERTING lots of numbers test and for loop iterator test
		TEST_METHOD(slingu2_Test04)
		{
			myset<double> s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(4.0));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(3.0));
			Assert::IsTrue(s.size() == 2);

			Assert::IsTrue(!s.insert(3.0)); //shoudnt insert again

			for (double i = 200.0; i >= 5.0; i = i - 1.0)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 198);
			Assert::IsTrue(!s.empty());

			double k = 3.0;
			for (auto x : s)
			{
				if (k > 200.0) break;

				Assert::IsTrue(x == k);
				k = k + 1.0;
			}

			s.clear();

			auto iter = s.begin();

			Assert::IsTrue(iter == s.end());

			Assert::IsTrue(s.size() == 0);
		}


		//+= operator test
		TEST_METHOD(slingu2_Test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(1000));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(1900));
			Assert::IsTrue(s.size() == 2);

			auto x = s.begin();

			for (int i = 1; i <= 100; ++i)
			{
				s += i;
				Assert::IsTrue(s.size() == (i + 2));
				Assert::IsTrue(!s.insert(i));
			}

			Assert::IsTrue(s.size() == 102);

			s.clear();

			auto iter = s.begin();

			Assert::IsTrue(iter == s.end());

			Assert::IsTrue(s.size() == 0);

			//Assert::IsTrue(!s.insert(4)); //shouldnt insert


		}


		//  test_method(your_netid_test01)
		//  {
		//    myset<int>  s;

		//    assert::istrue(s.size() == 0);
		//    assert::istrue(s.empty());
		//  }

		//  test_method(your_netid_test02)
		//  {
		//    myset<int>  s;

		//    assert::istrue(s.size() == 0);
		//    assert::istrue(s.empty());

		//    assert::istrue(s.insert(12));

		//    assert::istrue(s.size() == 1);
		//    assert::istrue(!s.empty());
		//  }

		//  test_method(your_netid_test03)
		//  {
		//    myset<string>  s;

		//    assert::istrue(s.size() == 0);
		//    assert::istrue(s.empty());

		//    assert::istrue(s.insert("apple"));

		//    assert::istrue(s.size() == 1);
		//    assert::istrue(!s.empty());

		//    assert::istrue(s["apple"]);
		//  }
		//
		//  test_method(your_netid_test04)
		//  {
		//    myset<string>  s;

		//    assert::istrue(s.size() == 0);
		//    assert::istrue(s.empty());

		//    assert::istrue(s.insert("apple"));
		//    assert::istrue(!s.insert("apple"));  // should not insert again

		//    assert::istrue(s.size() == 1);
		//    assert::istrue(!s.empty());

		//    assert::istrue(s["apple"]);
		//    assert::istrue(!s["pear"]);  // should not find
		//  }

		//test_method(your_netid_test05)
		//{
		//    myset<int>  s;

		//    assert::istrue(s.size() == 0);
		//    assert::istrue(s.empty());

		//    assert::istrue(s.insert(12));
		//    assert::istrue(s.insert(71));
		//    s += 20;  // another way to insert:
		//    assert::istrue(!s.insert(20));  // already inserted:

		//    assert::istrue(s.size() == 3);
		//    assert::istrue(!s.empty());

		//    assert::istrue(s[71]);
		//    assert::istrue(s[12]);
		//    assert::istrue(s[20]);
		//    assert::istrue(!s[11]);
		//    assert::istrue(!s[999]);;
		//  }

		//  test_method(your_netid_test06)
		//  {
		//    myset<int>  s;

		//    assert::istrue(s.insert(10));
		//    assert::istrue(s.insert(20));
		//    assert::istrue(s.insert(30));

		//    assert::istrue(s.size() == 3);
		//    assert::istrue(!s.empty());

		//    auto iter = s.find(20);
		//    assert::istrue(iter != s.end());
		//    assert::istrue(*iter == 20);

		//    auto iter2 = s.find(40);
		//    assert::istrue(iter2 == s.end());
		//  }

		//  test_method(your_netid_test07)
		//  {
		//    myset<int>  s;

		//    assert::istrue(s.insert(12));
		//    assert::istrue(s.insert(71));
		//    assert::istrue(s.insert(20));
		//    assert::istrue(s.insert(2));
		//    assert::istrue(s.insert(99));

		//    assert::istrue(s.size() == 5);
		//    assert::istrue(!s.empty());

		//    auto iter = s.find(2);

		//    assert::istrue(iter != s.end());
		//    assert::istrue(*iter == 2);
		//    ++iter;
		//    assert::istrue(iter != s.end());
		//    assert::istrue(*iter == 12);
		//    ++iter;
		//    assert::istrue(iter != s.end());
		//    assert::istrue(*iter == 20);
		//    ++iter;
		//    assert::istrue(iter != s.end());
		//    assert::istrue(*iter == 71);
		//    ++iter;
		//    assert::istrue(iter != s.end());
		//    assert::istrue(*iter == 99);
		//    ++iter;
		//    assert::istrue(iter == s.end());

		//    auto iter2 = s.find(1);
		//    assert::istrue(iter2 == s.end());
		//  }

		//  test_method(your_netid_test08)
		//  {
		//    myset<int>  s;

		//    for (int i = 1000; i >= 100; --i)
		//    {
		//      assert::istrue(s.insert(i));
		//    }

		//    assert::istrue(s.size() == 901);
		//    assert::istrue(!s.empty());

		//    int j = 100;
		//    auto iter = s.begin();
		//    while (iter != s.end())
		//    {
		//      assert::istrue(*iter == j);
		//      ++iter;
		//      ++j;
		//    }

		//    int k = 100;
		//    for (auto x : s)
		//    {
		//      assert::istrue(x == k);
		//      ++k;
		//    }
		//}


	};
}

//
// Unit tests for mymap data structure.
//
// Sean Martinelli
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03 - Part 1
//









namespace MyMapUnitTests
{
	TEST_CLASS(smarti58_tests)
	{
	public:

		//
		// Test the insert() feature of myset
		//
		TEST_METHOD(smarti58_test01)
		{
			myset<int> s;

			//
			// test large insert
			//
			for (int i = 1000; i >= -1000; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 2001);
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s[0]);

			//
			// test empty insert
			//
			s.clear();
			Assert::IsTrue(s.insert(5));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s[5]);

			//
			// test first element insert
			//
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(s[1]);

			//
			// test last element insert
			//
			Assert::IsTrue(s.insert(7));
			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(s[7]);

			//
			// test second element insert
			//
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(s[2]);

			//
			// test second element insert
			//
			Assert::IsTrue(s.insert(6));
			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(s[6]);

			//
			// test middle element insert
			//
			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(s[4]);

			//
			// insert 3 and test final order
			//
			Assert::IsTrue(s.insert(3));

			int expectedValue = 1;
			for (int x : s)
				Assert::IsTrue(x == expectedValue++);

		}

		//Helper for smarti58_test02
		void testPassByValue(myset<int> testSet)
		{
			testSet.clear();
		}

		//Helper for smarti58_test02
		myset<int> testReturnByValue()
		{
			myset<int> s;
			s.insert(1);
			s.insert(2);
			s.insert(3);
			s.insert(4);

			return s;
		}

		//
		// Test the copy constructor in different scenarios.
		//
		TEST_METHOD(smarti58_test02)
		{
			//
			// Test initializing from another myset
			//
			myset<int> s1;

			Assert::IsTrue(s1.insert(1));
			Assert::IsTrue(s1.insert(2));
			Assert::IsTrue(s1.insert(3));

			myset<int> s2(s1);

			s1.clear();

			Assert::IsTrue(s2.find(2) != s2.end());
			Assert::IsTrue(s1.find(2) == s1.end());

			myset<int> s3 = s2;

			s2.clear();

			Assert::IsTrue(s3.find(2) != s3.end());
			Assert::IsTrue(s2.find(2) == s2.end());

			//
			// Test pass by value
			//
			Assert::IsTrue(s2.insert(1));

			testPassByValue(s2);

			Assert::IsTrue(s2.find(1) != s2.end());

			//
			// Test return by value
			//
			s2 = testReturnByValue();
			Assert::IsTrue(s2.find(4) != s2.end());
		}

		//
		// Test the assignment operator
		//
		TEST_METHOD(smarti58_test03)
		{
			myset<string> s1;
			myset<string> s2;

			//Insert into s1
			Assert::IsTrue(s1.insert("Test1"));
			Assert::IsTrue(s1.insert("Test2"));
			Assert::IsTrue(s1.insert("Test3"));

			//Insert into s2
			Assert::IsTrue(s2.insert("Test4"));
			Assert::IsTrue(s2.insert("Test5"));

			//Try to find elements that should be in each set
			Assert::IsTrue(s1.find("Test1") != s1.end());
			Assert::IsTrue(s2.find("Test4") != s2.end());

			//Test set sizes
			Assert::IsTrue(s1.size() == 3);
			Assert::IsTrue(s2.size() == 2);

			//Assign s1 to s2
			s2 = s1;

			//Try to find elements that should be in each set after assignment
			Assert::IsTrue(s1.find("Test1") != s1.end());
			Assert::IsTrue(s2.find("Test2") != s2.end());

			//Make sure "Test4 is not in s2 anymore
			Assert::IsTrue(s2.find("Test4") == s2.end());

			//Test set sizes again
			Assert::IsTrue(s1.size() == 3);
			Assert::IsTrue(s2.size() == 3);

		}

		//
		// Test myset iterator
		//
		TEST_METHOD(smarti58_test04)
		{
			myset<int> s1;
			myset<int> s2;

			Assert::IsTrue(s1.insert(1));
			Assert::IsTrue(s1.insert(2));
			Assert::IsTrue(s1.insert(3));

			Assert::IsTrue(s2.insert(1));
			Assert::IsTrue(s2.insert(2));
			Assert::IsTrue(s2.insert(3));

			//Test iterator comparisons
			Assert::IsTrue(s1.end() != s2.end());
			Assert::IsTrue(s1.find(1) != s1.find(2));
			Assert::IsTrue(s2.find(1) == s2.begin());

			//Test dereference
			auto iter1 = s1.find(2);
			Assert::IsTrue(*iter1 == 2);

			//Test for loop
			int expectedValue = 1;

			for (auto x : s1)
				Assert::IsTrue(x == expectedValue++);

			//Test ++iter
			auto iter2 = s1.begin();
			expectedValue = 1;

			while (iter2 != s1.end()) {
				Assert::IsTrue(*iter2 == expectedValue);
				++iter2;
				++expectedValue;
			}
		}

		//
		// Test the clear() feature of myset
		//
		TEST_METHOD(smarti58_test05)
		{
			myset<double> s;

			Assert::IsTrue(s.insert(2.2));
			Assert::IsTrue(s.insert(1.1));
			Assert::IsTrue(s.insert(4.4));
			Assert::IsTrue(s.insert(3.3));
			Assert::IsTrue(s.insert(5.5));

			//Test size, empty, and find
			Assert::IsTrue(s.size() == 5);
			Assert::IsFalse(s.empty());
			Assert::IsTrue(s.find(2.2) != s.end());

			s.clear();

			//Test again after clear
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.find(2.2) == s.end());

			//Test insert again after clear
			Assert::IsTrue(s.insert(2.2));
			Assert::IsTrue(s.insert(1.1));
			Assert::IsTrue(s.insert(4.4));
			Assert::IsTrue(s.insert(3.3));
			Assert::IsTrue(s.insert(5.5));

			//Test size and empty
			Assert::IsTrue(s.size() == 5);
			Assert::IsFalse(s.empty());

			//Test find
			auto iter = s.find(4.4);
			Assert::IsTrue(*iter == 4.4);
		}

	};
}/*srahma35.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Syed Shariq ur Rahman
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(srahma35_tests)
	{
	public:

		TEST_METHOD(srahma35_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(17));
			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(11));

			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(!s.empty());

			s.clear();	//clear the set

			Assert::IsTrue(s.size() == 0);	//set size should be 0 after clearing
			Assert::IsTrue(s.empty());	//set should be empty
		}

		TEST_METHOD(srahma35_test02)
		{
			myset<int>  s;
			bool valueTrue = true;
			bool valueFalse = false;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(17));
			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(11));

			Assert::IsTrue(s.operator[](15) == valueTrue);	//check 15 in the set
			Assert::IsTrue(s.operator[](25) == valueFalse);	//check 25 in the set
			Assert::IsTrue(!s.empty());		//set shouldn't be empty
			Assert::IsTrue(s.size() == 4);	//set size should be 4 here
		}

		TEST_METHOD(srahma35_test03)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(17));
			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(11));

			auto iter = s.find(17);		//find iterator
			Assert::IsTrue(*iter != 12);	//iterator value shouldn't be 12
			Assert::IsTrue(*iter == 17);	//iterator value should be 17

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 4);
		}

		TEST_METHOD(srahma35_test04)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(17));
			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(11));

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.begin());	//iterator shouldn't be at begininng
			Assert::IsTrue(iter == s.end());	//iterator should be after last elem

			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 4);
		}

		TEST_METHOD(srahma35_test05)
		{
			myset<int>  s;
			myset<int> sCopy;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(sCopy.size() == 0);
			Assert::IsTrue(sCopy.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(17));
			Assert::IsTrue(s.insert(15));
			Assert::IsTrue(s.insert(11));

			sCopy.operator=(s);	//copy elem for set S to sCopy

			Assert::IsTrue(!sCopy.empty());		//sCopy shouldn't be empty
			Assert::IsTrue(sCopy.size() == s.size());	//sCopy size should be same as S.
		}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Simon Rankov
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(sranko2_tests)
	{
	public:

		//TEST_METHOD(sranko2_1)
		//{
		//    myset<int>  s, b;

		//    for (int i = 10; i < 21; ++i)
		//    {
		//        Assert::IsTrue(s.insert(i));
		//    }

		//    Assert::IsTrue(s.size() == 10);
		//    Assert::IsTrue(!s.empty());
		//    b = s;
		//    Assert::IsTrue(b.size() == 10);
		//    Assert::IsTrue(!b.empty());

		//    auto iter = s.begin();
		//    auto iter2 = b.begin();

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(iter2 != b.end());
		//    for (int i = 10; i < 21; i++)
		//    {
		//        Assert::IsTrue(*iter == i);
		//        Assert::IsTrue(*iter2 == i);
		//        ++iter;
		//        ++iter2;
		//    }
		//    Assert::IsTrue(iter == s.end());
		//    Assert::IsTrue(iter2 == b.end());

		//}

		TEST_METHOD(sranko2_2)
		{
			myset<int>  s, b;
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(40));
			Assert::IsTrue(s.insert(50));

			Assert::IsTrue(!s.empty());

			Assert::IsTrue(b.empty());
			auto iter = s.find(30);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 30);
			Assert::IsTrue(b.insert(*iter));
			Assert::IsTrue(!b.empty());
			iter = b.begin();
			Assert::IsTrue(*iter == 30);
		}
		TEST_METHOD(sranko2_3)
		{
			myset<int>  s;
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.insert(40));
			Assert::IsTrue(s.insert(50));
			Assert::IsTrue(!s.empty());

			auto iter = s.begin();
			auto iter2 = s.begin();
			Assert::IsTrue(s.size() == 5);
			for (int i = 0; i < 5; i++) {
				Assert::IsTrue(iter == iter2);
				++iter;
				++iter2;
			}

			iter = s.begin();
			Assert::IsTrue(iter != iter2);

		}

		TEST_METHOD(sranko2_4)
		{
			myset<int>  s;
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.size() == 2);
			auto iter = s.find(10);
			Assert::IsTrue(*iter == 10);
			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
			iter = s.find(10);
			Assert::IsTrue(iter == s.end());
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s[10]);

		}

		TEST_METHOD(sranko2_5)
		{
			myset<int> s, b;
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(11));
			Assert::IsTrue(!s.insert(11));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.size() == 3);
			auto iter = s.begin();
			b = s;
			Assert::IsTrue(!b.empty());
			Assert::IsTrue(b.size() == 3);
			Assert::IsTrue(b.insert(4));
			Assert::IsTrue(!s[4]);

		}



	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Steve Stranczek
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(sstran2_tests)
	{
	public:


		TEST_METHOD(sstran2_copyconstructor_test01)
		{
			myset<int>  s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.size() == 1);

			myset<int> s2 = s;

			Assert::IsTrue(!s2.empty());
			Assert::IsTrue(s2.size() == 1);
			Assert::IsTrue(s2.insert(2));
			Assert::IsTrue(s2.size() == 2);

			myset<int> s3 = s2;

			Assert::IsTrue(!s3.empty());
			Assert::IsTrue(s3.size() == 2);
		}

		//TEST_METHOD(sstran2_plusEquals_test01)
		//{
		//    myset<int> s;
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());
		//    s.operator+=(1);
		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());
		//    s.operator+=(5);
		//    Assert::IsTrue(s.size() == 2);
		//    Assert::IsTrue(!s.size() == 3);
		//    s += 8;
		//    Assert::IsTrue(s.size() == 3);
		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(s.insert(15));
		//    Assert::IsTrue(s.size() == 4);
		//    Assert::IsTrue(!s.empty());
		//}

		//TEST_METHOD(sstran2_IteratorBegin_test01)
		//{
		//    myset<int> s;
		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.insert(45));
		//    Assert::IsTrue(s.size() == 1);

		//    auto beg = s.begin();

		//    Assert::IsTrue(*beg == 45);
		//    Assert::IsTrue(!*beg == 10);
		//    Assert::IsTrue(s.insert(10));

		//    beg = s.begin();

		//    Assert::IsTrue(*beg == 10);
		//    Assert::IsTrue(!*beg == 45);
		//    Assert::IsTrue(s.insert(15));

		//    beg = s.begin();

		//    Assert::IsTrue(*beg == 10);
		//}

		// not valid: you cannot use iterator after modifying set.
		//TEST_METHOD(sstran2_IteratorEnd_test01)
		//{
		//    myset<int> s;
		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.size() == 0);

		//    auto beg = s.begin();
		//    auto end = s.end();

		//    Assert::IsTrue(beg == end);
		//    Assert::IsTrue(s.insert(10));

		//    beg = s.begin();
		//    end = s.end();

		//    Assert::IsTrue(beg != end);
		//    Assert::IsTrue(s.insert(20));
		//    ++beg;

		//    end = s.end();
		//    Assert::IsTrue(beg != end);

		//    Assert::IsTrue(s.insert(25));
		//    ++beg;

		//    end = s.end();
		//    Assert::IsTrue(beg != end);
		//    ++beg;
		//    Assert::IsTrue(beg == end);
		//}

		TEST_METHOD(sstran2_destructor_test01)
		{
			int i = 0;
			while (i = 0)
			{
				myset<int> s;
				for (int j = 0; j < 10; j++)
				{
					Assert::IsTrue(s.insert(j));
					//if (j = 10);
					i = 1;
				}
				Assert::IsTrue(!s.empty());
				Assert::IsTrue(s.size() == 10);
			}

			myset<int> s;
			Assert::IsTrue(s.empty());
			auto beg = s.begin();
			auto end = s.end();
			Assert::IsTrue(beg == end);
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 1);
		}




		/* TEST_METHOD(sstran2_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		TEST_METHOD(sstran2_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(sstran2_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(sstran2_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(sstran2_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(sstran2_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(sstran2_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(sstran2_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}
		*/
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Sean Walker
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(swalke30_tests)
	{
	public:

		TEST_METHOD(swalke30_test01)
		{
			myset<int>  s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			//test filling and clearing for size 100
			for (int x = 0; x < 100; x++)
				Assert::IsTrue(s.insert(x));

			Assert::IsTrue(s.size() == 100);
			Assert::IsTrue(s[1]);


			s.clear();
			Assert::IsTrue(s.size() == 0);

			//test filling and clearing for size 1000
			for (int x = 0; x < 1000; x++)
				Assert::IsTrue(s.insert(x));

			Assert::IsTrue(s.size() == 1000);

			s.clear();
			Assert::IsTrue(s.size() == 0);

			//test filling and clearing for size 10000
			for (int x = 0; x < 10000; x++)
				Assert::IsTrue(s.insert(x));

			Assert::IsTrue(s.size() == 10000);

			s.clear();
			Assert::IsTrue(s.size() == 0);

		}//end test 01

		 /*
		 TEST_METHOD(swalke30_test02)
		 {
		 myset<int>  s;
		 Assert::IsTrue(s.size() == 0);
		 Assert::IsTrue(s.empty());

		 //test filling and clearing for size 100
		 for (int x = 0; x < 200; x++)
		 s += x;

		 Assert::IsTrue(s.size() == 100);

		 s.clear();
		 Assert::IsTrue(s.size() == 0);

		 //test filling and clearing for size 1000
		 for (int x = 0; x < 1200; x++)
		 s += x;

		 Assert::IsTrue(s.size() == 1000);

		 s.clear();
		 Assert::IsTrue(s.size() == 0);

		 //test filling and clearing for size 10000
		 for (int x = 0; x < 12000; x++)
		 s += x;

		 Assert::IsTrue(s.size() == 10000);

		 s.clear();
		 Assert::IsTrue(s.size() == 0);
		 }



		 TEST_METHOD(swalke30_test03)
		 {
		 myset<int>  s;
		 Assert::IsTrue(s.size() == 0);
		 Assert::IsTrue(s.empty());

		 for (int x = 0; x < 1000; x++)
		 s += x;

		 Assert::IsTrue(!s.empty());

		 Assert::IsTrue(!s[1000]);
		 Assert::IsTrue(s[999]);

		 auto i = s.find(500);
		 Assert::IsTrue(i != s.end());

		 s += 1000;
		 Assert::IsTrue(s[1000]);

		 auto j = s.find(1000);
		 Assert::IsTrue(i != s.end());

		 auto k = s.find(10001);
		 Assert::IsTrue( i == s.end() );

		 s.clear();
		 Assert::IsTrue(s.size() == 0);
		 }//end test method 3

		 TEST_METHOD(swalke30_test04)
		 {
		 myset<int> s;

		 for (int x = 0; x < 10; x++)
		 Assert::IsTrue(s.insert(x));

		 Assert::IsTrue(!s.empty());

		 auto e = s.begin();

		 int x = 0;
		 while (e != s.end())
		 {
		 Assert::IsTrue(s.find(x) ==  e);
		 x++;
		 ++e;
		 }

		 auto itr = s.begin();
		 Assert::IsTrue(*itr == 0);
		 itr++;
		 Assert::IsTrue(*itr == 1);
		 itr++;
		 Assert::IsTrue(*itr == 2);


		 Assert::IsTrue(e == s.end());

		 Assert::IsTrue(s[5]);
		 Assert::IsTrue(!s[71]);

		 s.clear();
		 Assert::IsTrue(e != s.end());
		 }//end test 04

		 TEST_METHOD(swalke30_test05)
		 {
		 myset<char>  s;

		 Assert::IsTrue(s.size() == 0);
		 Assert::IsTrue(s.empty());

		 Assert::IsTrue(s.insert('a'));

		 Assert::IsTrue(s.size() == 1);
		 Assert::IsTrue(!s.empty());

		 Assert::IsTrue(s['a']);

		 Assert::IsTrue(s.insert('b'));

		 Assert::IsTrue(s.size() == 2);
		 Assert::IsTrue(!s.empty());

		 Assert::IsTrue(s['b']);

		 }//end test 05
		 */
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Sahara Yousuf
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(syousu6_tests)
	{
	public:

		//  TEST_METHOD(syousu6_test01)
		//  {
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());
		//  }

		//  TEST_METHOD(syousu6_test02)
		//  {
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(12));

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());
		//  }

		//  TEST_METHOD(syousu6_test03)
		//  {
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert("apple"));

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s["apple"]);
		//  }
		//
		//  TEST_METHOD(syousu6_test04)
		//  {
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert("apple"));
		//    Assert::IsTrue(!s.insert("apple"));  // should not insert again

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s["apple"]);
		//    Assert::IsTrue(!s["pear"]);  // should not find
		//  }

		//TEST_METHOD(syousu6_test05)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(12));
		//    Assert::IsTrue(s.insert(71));
		//    s += 20;  // another way to insert:
		//    Assert::IsTrue(!s.insert(20));  // already inserted:

		//    Assert::IsTrue(s.size() == 3);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s[71]);
		//    Assert::IsTrue(s[12]);
		//    Assert::IsTrue(s[20]);
		//    Assert::IsTrue(!s[11]);
		//    Assert::IsTrue(!s[999]);;
		//  }

		//  TEST_METHOD(syousu6_test06)
		//  {
		//    myset<int>  s;

		//    Assert::IsTrue(s.insert(10));
		//    Assert::IsTrue(s.insert(20));
		//    Assert::IsTrue(s.insert(30));

		//    Assert::IsTrue(s.size() == 3);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find(20);
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 20);

		//    auto iter2 = s.find(40);
		//    Assert::IsTrue(iter2 == s.end());
		//  }

		//  TEST_METHOD(syousu6_test07)
		//  {
		//    myset<int>  s;

		//    Assert::IsTrue(s.insert(12));
		//    Assert::IsTrue(s.insert(71));
		//    Assert::IsTrue(s.insert(20));
		//    Assert::IsTrue(s.insert(2));
		//    Assert::IsTrue(s.insert(99));

		//    Assert::IsTrue(s.size() == 5);
		//    Assert::IsTrue(!s.empty());

		//    auto iter = s.find(2);

		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 2);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 12);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 20);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 71);
		//    ++iter;
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(*iter == 99);
		//    ++iter;
		//    Assert::IsTrue(iter == s.end());

		//    auto iter2 = s.find(1);
		//    Assert::IsTrue(iter2 == s.end());
		//  }

		//  TEST_METHOD(syousu6_test08)
		//  {
		//    myset<int>  s;

		//    for (int i = 1000; i >= 100; --i)
		//    {
		//      Assert::IsTrue(s.insert(i));
		//    }

		//    Assert::IsTrue(s.size() == 901);
		//    Assert::IsTrue(!s.empty());

		//    int j = 100;
		//    auto iter = s.begin();
		//    while (iter != s.end())
		//    {
		//      Assert::IsTrue(*iter == j);
		//      ++iter;
		//      ++j;
		//    }

		//    int k = 100;
		//    for (auto x : s)
		//    {
		//      Assert::IsTrue(x == k);
		//      ++k;
		//    }
		//  }

		TEST_METHOD(syousu6_test09)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("alligator"));
			Assert::IsTrue(s.insert("bat"));
			Assert::IsTrue(s.insert("cavern"));
			Assert::IsTrue(s.insert("different"));
			Assert::IsTrue(s.insert("zebra"));
			Assert::IsTrue(s.insert("wolf"));

			Assert::IsTrue(s.size() == 6);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(!s.insert("alligator"));
			Assert::IsTrue(!s.insert("zebra"));

			Assert::IsTrue(s.size() == 6);

			auto iterBegin = s.find("alligator");
			Assert::IsTrue(s["alligator"]);
			Assert::IsTrue(iterBegin != s.end());

			auto iterLast = s.find("zebra");
			Assert::IsTrue(s["zebra"]);
			Assert::IsTrue(iterLast != s.end());

			++iterLast;
			Assert::IsTrue(iterLast == s.end());
		}

		TEST_METHOD(syousu6_test10)
		{
			myset<double>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(35.25));
			Assert::IsTrue(s.insert(36.89));
			Assert::IsTrue(s.insert(15.20));
			Assert::IsTrue(s.insert(10.6));
			Assert::IsTrue(s.insert(5.67));
			Assert::IsTrue(s.insert(12.34));
			Assert::IsTrue(s.insert(35.3));
			Assert::IsTrue(s.insert(36.8));
			Assert::IsTrue(s.insert(15.18));
			Assert::IsTrue(s.insert(10.7));
			Assert::IsTrue(s.insert(5.6));
			Assert::IsTrue(s.insert(12.2));

			Assert::IsTrue(s.size() == 12);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(5.6);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 5.6);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 5.67);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 10.6);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 10.7);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12.2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12.34);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 15.18);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 15.20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 35.25);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 35.3);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 36.8);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 36.89);
			++iter;

			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1.5);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(syousu6_test11)
		{
			myset<char>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			for (char start = 'A'; start <= 'Z'; start++) {
				Assert::IsTrue(s.insert(start));
			}

			Assert::IsTrue(s.size() == 26);
			Assert::IsTrue(!s.empty());

			auto iter = s.begin();
			Assert::IsTrue(*iter == 'A');

			auto iter2 = s.find('Z');
			Assert::IsTrue(*iter2 == 'Z');

			++iter2;

			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(syousu6_test12) //Used TestCase08 as reference
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			for (int i = 1; i <= 100000; ++i) {
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 100000);
			Assert::IsTrue(!s.empty());

			int j = 1;
			auto iter = s.begin();

			while (iter != s.end()) {
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 1;
			for (auto x : s) {
				Assert::IsTrue(x == k);
				++k;
			}
		}

		TEST_METHOD(syousu6_test13)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			s += 2;
			s += 4;
			s += 6;
			s += 8;
			s += 10;

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[2]);
			Assert::IsTrue(s[4]);
			Assert::IsTrue(s[6]);
			Assert::IsTrue(s[8]);
			Assert::IsTrue(s[10]);

			Assert::IsTrue(!s[12]);
			Assert::IsTrue(!s[0]);
			Assert::IsTrue(!s[120]);

			s.clear();

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

		}
	};
}
/*unittest1.cpp*/

//
// Unit tests for myset data structure.
//
// Manuela Tchobalieva
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(tchobal2_tests)
	{
	public:

		//TEST_METHOD(tchobal2_test01_size) {

		//    myset<int>  s;
		//    Assert::IsTrue(s.size() == 4);
		//    int i;
		//    for (i = 0; i < 10; ++i)
		//    {
		//        s.insert(i);
		//    }
		//    Assert::IsTrue(s.size() == 15);
		//    for (i = 0; i < 80; ++i)
		//    {
		//        s.insert(i);
		//    }
		//    Assert::IsTrue(s.size() == 100);
		//    for (i = 0; i < 500; ++i)
		//    {
		//        s.insert(i);
		//    }
		//    Assert::IsTrue(s.size() == 1024);
		//    for (i = 0; i < 500; ++i)
		//    {
		//        s.insert(i);
		//    }
		//    Assert::IsTrue(s.size() == 2048);
		//    Assert::IsTrue(!s.empty());

		//}//end of test 1

		//TEST_METHOD(tchobal2_test02_copy_constructor)
		//{

		//    myset<int> s;
		//    for (int i = 0; i < 15; ++i)
		//    {
		//        s.insert(i);
		//        Assert::IsTrue(s[i] == i);
		//    }

		//    myset<int> copySet(s);
		//    Assert::IsTrue(s.size() == copySet.size());
		//    Assert::IsTrue(copySet[3] == 4);


		//}//end of test 2

		//TEST_METHOD(tchobal2_test03_size2) {

		//    myset<double>  s;
		//    Assert::IsTrue(s.size() == 4);
		//    for (int i = 0; i < 15; ++i)
		//    {
		//        s.insert(i*6.67);
		//    }
		//    Assert::IsTrue(s.size() == 15);
		//    s.insert(5.67);
		//    s.insert(9.09);
		//    s.insert(900.6);
		//    Assert::IsTrue(s.size() == 100);
		//}//end of test 3

		TEST_METHOD(tchobal2_test04_copy_constructor2) {

			myset<string> s;
			s.insert("apple");
			s.insert("banana");
			s.insert("cherry");
			s.insert("pear");

			myset<string> copySet;
			copySet = s;

			Assert::IsTrue(s.size() == copySet.size());
			Assert::IsTrue(!s.empty());

		}//end of test 4

		 //TEST_METHOD(tchobal2_test05_iterator) {

		 //    myset<int> s;
		 //    Assert::IsTrue(s.empty() == 4);
		 //    Assert::IsTrue(s.size() == 0);

		 //    int i;
		 //    for (i = 0; i < 300; ++i)
		 //    {
		 //        s.insert(i);
		 //    }
		 //    Assert::IsTrue(s.size() == 300);
		 //    Assert::IsTrue(!s.empty());
		 //    i = 0;

		 //    for (auto &set : s)
		 //    {
		 //        ++i;
		 //    }
		 //    Assert::IsTrue(i == 299);

		 //}//end of test 5
	};
}
/*unittest1.cpp*/

//
// Unit tests for mymap data structure.
//
// YOUR NAME
// U. of Illinois, Chicago
// CS 341, Fall 2017
// Project #03
//









namespace MyMapUnitTests
{
	TEST_CLASS(student_o_tests)
	{
	public:



		//test the copy default
		TEST_METHOD(tnguy60_test01) {
			myset<int> s1;

			Assert::IsTrue(s1.insert(2));
			Assert::IsTrue(s1.insert(3));
			Assert::IsTrue(s1.insert(1));
			myset<int>  s2(s1);

			Assert::IsTrue(s2.size() == 3);
			Assert::IsTrue(!s2.empty());
		}


		//test if the methods such as insert, += operator,
		//size(), and find work for char type
		TEST_METHOD(tnguy60_test02) {
			myset<char>  s;

			Assert::IsTrue(s.insert('d'));
			Assert::IsTrue(s.insert('a'));
			Assert::IsTrue(s.insert('c'));
			s += 'm';

			Assert::IsTrue(s.size() != 3);
			Assert::IsTrue(s['m']);
		}


		//no matter what the type is, when we clear its set, the size
		//should be 0 and all elements are destroyed
		TEST_METHOD(tnguy60_test03) {
			myset<string> s1;

			Assert::IsTrue(s1.insert("bike"));
			Assert::IsTrue(s1.insert("car"));
			Assert::IsTrue(s1.insert("plane"));


			myset<int> s2;

			Assert::IsTrue(s2.insert(2));
			Assert::IsTrue(s2.insert(3));
			Assert::IsTrue(s2.insert(1));

			s1.clear();
			Assert::IsTrue(s1.size() == 0);
			s2.clear();
			Assert::IsTrue(s2.size() == 0);
		}


		//testing deep copy. Should not point to the same location
		TEST_METHOD(tnguy60_test04) {
			myset<int> s1;

			Assert::IsTrue(s1.insert(2));
			Assert::IsTrue(s1.insert(3));
			Assert::IsTrue(s1.insert(1));
			myset<int>  s2;
			Assert::IsTrue(s2.insert(8));
			Assert::IsTrue(s2.insert(9));

			s2 = s1;

			Assert::IsTrue(s2.begin() != s1.begin());
			Assert::IsTrue(s2.size() == 3);
		}


		//insert string elements. test if find(), *iter, == comparison
		//works for string
		TEST_METHOD(tnguy60_test05) {
			myset<string>  s;

			Assert::IsTrue(s.insert("math"));
			Assert::IsTrue(s.insert("history"));
			Assert::IsTrue(s.insert("english"));
			Assert::IsTrue(s.insert("cs"));
			Assert::IsTrue(s.insert("music"));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find("cs");

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "cs");
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "english");
			++iter;

			Assert::IsTrue(!s["Math"]);
		}

	};



}







namespace MySetTests
{
	TEST_CLASS(student_p_tests)
	{
	public:

		//test size
		TEST_METHOD(your_netid_tests01)
		{
			myset<int> s;

			//Logger::WriteMessage("test01");
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(!(s.size() == 1));
			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s.insert(2));
			Assert::IsFalse(s.empty());
			s += 3;
			Assert::IsTrue(s.size() == 3);
			s.insert(4);
			Assert::IsFalse(s.size() == 3);
			Assert::IsTrue(s.size() == 4);
		}

		//test ++iter
		//TEST_METHOD(your_netid_tests02)
		//{
		//    myset<string> words;
		//    //Logger::WriteMessage("test02");
		//    Assert::IsTrue(words.size() == 0);
		//    words += "The";
		//    Assert::IsFalse(words.size() == 2);
		//    Assert::IsFalse(words.empty());
		//    Assert::IsTrue(words.size() == 1);
		//    words += "King";
		//    Assert::IsTrue(words.insert("of the North"));
		//    auto iter = words.begin();
		//    Assert::IsFalse(*iter == "hi");
		//    Assert::IsTrue(*iter == "The");
		//    ++iter;
		//    Assert::IsFalse(*iter != "King");
		//    int k = 0;
		//    ++k;
		//    Assert::IsFalse(k == 0);
		//    Assert::IsTrue(k == 1);

		//}
		//test [e]
		TEST_METHOD(your_netid_tests03)
		{
			myset<int> num;
			//Logger::WriteMessage("test03");
			Assert::IsFalse(num.size() > 0);
			num.insert(1);
			num.insert(2);
			num.insert(3);
			Assert::IsTrue(num[1]);
			Assert::IsTrue(num[2]);
			Assert::IsTrue(num[3]);
			Assert::IsFalse(num[0]);
			Assert::IsTrue(num.size() == 3);
			num.clear();
			Assert::IsTrue(num.empty());

			for (int i = 100; i < 105; ++i) {
				num += i;
			}
			Assert::IsTrue(num[100]);
			Assert::IsTrue(num[104]);
			Assert::IsFalse(num[0]);
		}

		//test empty()
		TEST_METHOD(your_netid_tests04)
		{
			myset<string> words;
			vector<int> so;
			//Logger::WriteMessage("test04");
			Assert::IsTrue(words.size() == 0);
			Assert::IsTrue(words.empty());
			Assert::IsFalse(!words.empty());
			words.insert("a");
			words.insert("b");
			Assert::IsTrue(!words.empty());
			words.clear();

			Assert::IsFalse(words.size() > 0);
			Assert::IsTrue(words.empty());
			Assert::IsTrue(so.empty());

			so.clear();
			Assert::IsTrue(so.empty());
		}
		//test find()
		//TEST_METHOD(your_netid_tests05)
		//{
		//    myset<int> num;
		//    vector<int> a;
		//    int j;
		//    //Logger::WriteMessage("test05");
		//    Assert::IsTrue(num.size() == 0);
		//    Assert::IsTrue(num.empty());
		//    for (j = 1; j <= 5; ++j) {
		//        num.insert(j);
		//    }
		//    auto iter = num.find(2);
		//    Assert::IsFalse(*iter == 33);
		//    Assert::IsFalse(iter == num.end());
		//    Assert::IsTrue(*iter == 2);

		//    auto iter1 = num.find(100);
		//    Assert::IsFalse(iter1 == num.begin());
		//    Assert::IsTrue(iter1 == num.end());

		//    iter1 = num.find(3);
		//    int s = *iter + 1;
		//    Assert::IsFalse(s == 3);
		//    Assert::IsTrue(s == 4);

		//}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Tian Zhou
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(tzhou29_tests)
	{
	public:

		TEST_METHOD(tzhou29_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert(-1));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		//TEST_METHOD(tzhou29_test02)
		//{
		//    myset<int>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());

		//    Assert::IsTrue(s.insert(12));

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s.insert(12)); // insert duplicate test

		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.empty());

		//    Assert::IsTrue(s.insert(-1));

		//    Assert::IsTrue(s.size() == 2);
		//    Assert::IsTrue(!s.empty());

		//    s.clear();
		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());
		//}

		TEST_METHOD(tzhou29_test03)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			s += 12;

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			s += 99;

			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());

			s += -1;

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(tzhou29_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("Anime"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert("was a "));

			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s.insert("mistake."));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(tzhou29_test05)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			s += "test";

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			s += "number";

			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());

			s += "four.";

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		/*
		TEST_METHOD(your_netid_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		TEST_METHOD(your_netid_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(your_netid_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(your_netid_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(your_netid_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(your_netid_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(your_netid_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}
		*/

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Viktor Partyka
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(vparty2_tests)
	{
	public:

		TEST_METHOD(vparty2_test01)
		{
			myset<int>  s;
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s.insert(30));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(s.insert(40));
			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(s.insert(50));
			Assert::IsTrue(s.size() == 4);
			Assert::IsTrue(s.insert(60));
			Assert::IsTrue(s.size() == 5);
		}

		TEST_METHOD(vparty2_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
			s.clear();
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(!s.insert(10));
		}

		TEST_METHOD(vparty2_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
			Assert::IsTrue(s.insert("car"));
			Assert::IsTrue(!s.insert("car"));
			Assert::IsTrue(s.insert("vehicle"));
			Assert::IsTrue(s.size() == 2);
			Assert::IsTrue(!s.empty());
			auto iter = s.find("car");
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == "car");
		}

		//TEST_METHOD(vparty2_test04)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.size() == 0);
		//    Assert::IsTrue(s.empty());
		//    Assert::IsTrue(s.insert("apple"));
		//    Assert::IsTrue(s.insert("banana"));
		//    Assert::IsTrue(s.insert("cucumber"));
		//    auto iter = s.find("apple");
		//    Assert::IsTrue(iter == s.begin());
		//    iter = s.find("cucumber");
		//    Assert::IsTrue(iter == s.end());
		//    Assert::IsTrue(!s.empty());
		//    iter = s.find("banana");
		//    Assert::IsTrue(iter != s.end());
		//    Assert::IsTrue(iter != s.begin());

		//}

		TEST_METHOD(vparty2_test05)
		{
			myset<string>  s;
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.insert("apple"));
			s += "banana";
			Assert::IsTrue(!s.insert("banana"));
			Assert::IsTrue(s.size() == 2);
			s.clear();
			Assert::IsTrue(s.empty());
			s += "apple";
			s += "banana";
			s += "cucumber";
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(s["banana"]);
			auto iter = s.find("cucumber");
			Assert::IsTrue(iter != s.end());
			iter = s.find("apple");
			++iter;
			Assert::IsTrue(*iter == "banana");
		}
	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Patrick Welch
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(welch9_tests)
	{
	public:
		/*
		//tests if created and empty
		TEST_METHOD(welch9_test01)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());
		}

		//tests if one element insertion works
		TEST_METHOD(welch9_test02)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());
		}

		//tests string insertion
		TEST_METHOD(welch9_test03)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		}

		//tests if double insertion works (should not)
		TEST_METHOD(welch9_test04)
		{
		myset<string>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert("apple"));  // should not insert again

		Assert::IsTrue(s.size() == 1);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s["apple"]);
		Assert::IsTrue(!s["pear"]);  // should not find
		}

		//alternative insert and find methods
		TEST_METHOD(welch9_test05)
		{
		myset<int>  s;

		Assert::IsTrue(s.size() == 0);
		Assert::IsTrue(s.empty());

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		s += 20;  // another way to insert:
		Assert::IsTrue(!s.insert(20));  // already inserted:

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		Assert::IsTrue(s[71]);
		Assert::IsTrue(s[12]);
		Assert::IsTrue(s[20]);
		Assert::IsTrue(!s[11]);
		Assert::IsTrue(!s[999]);;
		}

		//test iterators as pointers to their found elements
		TEST_METHOD(welch9_test06)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(10));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(30));

		Assert::IsTrue(s.size() == 3);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(20);
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);

		auto iter2 = s.find(40);
		Assert::IsTrue(iter2 == s.end());
		}

		//testing ordering using an incrementing iterator
		TEST_METHOD(welch9_test07)
		{
		myset<int>  s;

		Assert::IsTrue(s.insert(12));
		Assert::IsTrue(s.insert(71));
		Assert::IsTrue(s.insert(20));
		Assert::IsTrue(s.insert(2));
		Assert::IsTrue(s.insert(99));

		Assert::IsTrue(s.size() == 5);
		Assert::IsTrue(!s.empty());

		auto iter = s.find(2);

		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 2);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 12);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 20);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 71);
		++iter;
		Assert::IsTrue(iter != s.end());
		Assert::IsTrue(*iter == 99);
		++iter;
		Assert::IsTrue(iter == s.end());

		auto iter2 = s.find(1);
		Assert::IsTrue(iter2 == s.end());
		}

		//testing very large inserts and size tracking, iteratring checking order using a while and for loop
		TEST_METHOD(welch9_test08)
		{
		myset<int>  s;

		for (int i = 1000; i >= 100; --i)
		{
		Assert::IsTrue(s.insert(i));
		}

		Assert::IsTrue(s.size() == 901);
		Assert::IsTrue(!s.empty());

		int j = 100;
		auto iter = s.begin();
		while (iter != s.end())
		{
		Assert::IsTrue(*iter == j);
		++iter;
		++j;
		}

		int k = 100;
		for (auto x : s)
		{
		Assert::IsTrue(x == k);
		++k;
		}
		}
		/*

		//Starting custom unit tests:

		/*
		//#1 DEFUNCT: DOEST NOT COMPILE
		//check if incorrect types inserted are handled correctly and sort still works
		TEST_METHOD(welch9_test09)
		{
		myset<string>  s;

		Assert::IsTrue(s.insert("car"));
		Assert::IsTrue(!s.insert('a'));
		Assert::IsTrue(s.size() == 1);

		Assert::IsTrue(s.insert("boat"));
		Assert::IsTrue(!s.insert(13.0));
		Assert::IsTrue(s.size() == 2);

		Assert::IsTrue(s.insert("apple"));
		Assert::IsTrue(!s.insert(5));

		Assert::IsTrue(s.size() == 3);

		auto iter = s.begin();
		Assert::IsTrue(*iter == "apple");
		iter++;
		Assert::IsTrue(*iter == "boat");
		iter++;
		Assert::IsTrue(*iter == "car");

		iter++;
		Assert::IsTrue(iter == s.end());
		//Assert::IsFalse(iter++);
		s.clear();
		Assert::IsTrue(s.empty());

		}

		*/

		//Starting custom unit tests :

		//#1
		//check if allocated memory is copied correclty
		//TEST_METHOD(welch9_test09)
		//{
		//    myset<string>  s;

		//    Assert::IsTrue(s.empty());

		//    string *stringPtr = new string("car");

		//    Assert::IsTrue(s.insert(*stringPtr));
		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(!s.insert("car"));
		//    Assert::IsTrue(s.size() == 1);
		//    Assert::IsTrue(s["car"]);
		//    delete stringPtr;
		//    Assert::IsTrue(stringPtr == nullptr);
		//    Assert::IsTrue(s["car"]);

		//    stringPtr = new string("apple");
		//    Assert::IsTrue(s.insert(*stringPtr));
		//    Assert::IsTrue(s.size() == 2);
		//    Assert::IsTrue(s["apple"]);
		//    delete stringPtr;

		//}

		//Test #2
		//Test memory allocation ordering
		TEST_METHOD(welch9_test10)
		{
			myset<string>  s;

			string *stringPtr = new string("car");

			Assert::IsTrue(s.insert(*stringPtr));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.insert("car"));
			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(s["car"]);
			delete stringPtr;
			Assert::IsTrue(s["car"]);

			Assert::IsTrue(s.insert("boat"));
			Assert::IsTrue(s.size() == 2);

			auto iter = s.begin();
			Assert::IsTrue(*iter == "boat");
			++iter;
			Assert::IsTrue(*iter == "car");

			s.clear();
			Assert::IsTrue(s.empty());

		}

		//#3
		//test ascii code to char conversions for insert and find
		TEST_METHOD(welch9_test11)
		{
			myset<char>  s;

			Assert::IsTrue(s.insert((char)99));
			Assert::IsTrue(!s.insert('c'));
			Assert::IsTrue(s.size() == 1);
			//auto iter = s.find('c');
			//Assert::IsTrue(*iter == 'c');

			Assert::IsTrue(s.insert((char)97));
			Assert::IsTrue(!s.insert('a'));
			Assert::IsTrue(s.size() == 2);
			//auto iter = s.find((char)97);
			//Assert::IsTrue(*iter == 'a');

			Assert::IsTrue(s.insert((char)98));
			Assert::IsTrue(!s.insert('b'));
			Assert::IsTrue(s.size() == 3);
			//auto iter = s.find('b');
			//Assert::IsTrue(*iter == (char)98);
			s.clear();

		}

		//#4
		//test deep copy
		TEST_METHOD(welch9_test12)
		{

			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			myset<int> sCopy = s;
			s.clear();
			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(sCopy.size() == 5);


			Assert::IsTrue(sCopy[12]);
			Assert::IsTrue(!s[12]);
			Assert::IsTrue(sCopy[71]);
			Assert::IsTrue(!s[71]);
			Assert::IsTrue(sCopy[20]);
			Assert::IsTrue(!s[20]);
			Assert::IsTrue(sCopy[2]);
			Assert::IsTrue(!s[2]);
			Assert::IsTrue(sCopy[99]);
			Assert::IsTrue(!s[99]);

		}

		//#5
		//more deep copy testing:
		//iterators, adding to original, iterator to .end()
		//TEST_METHOD(welch9_test13)
		//{

		//    myset<int>  s;

		//    Assert::IsTrue(s.insert(12));
		//    Assert::IsTrue(s.insert(71));
		//    Assert::IsTrue(s.insert(20));
		//    Assert::IsTrue(s.insert(2));
		//    Assert::IsTrue(s.insert(99));

		//    myset<int> sCopy = s;

		//    Assert::IsTrue(s.insert(999)); //expected 2, 12, 20, 71, 99, 999
		//    Assert::IsTrue(s.insert(998)); //expected 2, 12, 20, 71, 99, 998, 999
		//    Assert::IsTrue(sCopy.insert(1)); // expected 1, 2, 12, 71, 99

		//    Assert::IsTrue(s.size() == 7);
		//    Assert::IsTrue(s.size() == 5);


		//    auto iter = s.begin();
		//    auto iterCopy = sCopy.begin();

		//    Assert::IsTrue(*iter == 2);
		//    Assert::IsTrue(*iterCopy == 1);
		//    ++iter;
		//    ++iterCopy;

		//    Assert::IsTrue(*iter == 12);
		//    Assert::IsTrue(*iterCopy == 2);
		//    ++iter;
		//    ++iterCopy;

		//    Assert::IsTrue(*iter == 20);
		//    Assert::IsTrue(*iterCopy == 12);
		//    ++iter;
		//    ++iterCopy;

		//    Assert::IsTrue(*iter == 71);
		//    Assert::IsTrue(*iterCopy == 20);
		//    ++iter;
		//    ++iterCopy;

		//    Assert::IsTrue(*iter == 99);
		//    Assert::IsTrue(*iterCopy == 71);
		//    ++iter;
		//    ++iterCopy;

		//    Assert::IsTrue(*iter == 998);
		//    Assert::IsTrue(*iterCopy == 99);
		//    ++iter;
		//    ++iterCopy;

		//    Assert::IsTrue(*iter == 999);
		//    Assert::IsTrue(iterCopy == sCopy.end());
		//    ++iter;
		//    ++iterCopy;

		//    Assert::IsTrue(iter == s.end());
		//    Assert::IsTrue(iterCopy == sCopy.end());
		//    ++iter;
		//    ++iterCopy;


		//}

	};
}/*unittest1.cpp*/

 //
 // Unit tests for mymap data structure.
 //
 // Youlho Cha
 // U. of Illinois, Chicago
 // CS 341, Fall 2017
 // Project #03
 //









namespace MyMapUnitTests
{
	TEST_CLASS(ycha8_tests)
	{
	public:

		TEST_METHOD(ycha8_test01)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());
		}

		TEST_METHOD(ycha8_test02)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());
		}

		TEST_METHOD(ycha8_test03)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
		}

		TEST_METHOD(ycha8_test04)
		{
			myset<string>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert("apple"));
			Assert::IsTrue(!s.insert("apple"));  // should not insert again

			Assert::IsTrue(s.size() == 1);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s["apple"]);
			Assert::IsTrue(!s["pear"]);  // should not find
		}

		TEST_METHOD(ycha8_test05)
		{
			myset<int>  s;

			Assert::IsTrue(s.size() == 0);
			Assert::IsTrue(s.empty());

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			s += 20;  // another way to insert:
			Assert::IsTrue(!s.insert(20));  // already inserted:

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			Assert::IsTrue(s[71]);
			Assert::IsTrue(s[12]);
			Assert::IsTrue(s[20]);
			Assert::IsTrue(!s[11]);
			Assert::IsTrue(!s[999]);;
		}

		TEST_METHOD(ycha8_test06)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(10));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(30));

			Assert::IsTrue(s.size() == 3);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(20);
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);

			auto iter2 = s.find(40);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(ycha8_test07)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(12));
			Assert::IsTrue(s.insert(71));
			Assert::IsTrue(s.insert(20));
			Assert::IsTrue(s.insert(2));
			Assert::IsTrue(s.insert(99));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(2);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 12);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 20);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 71);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 99);
			++iter;
			Assert::IsTrue(iter == s.end());

			auto iter2 = s.find(1);
			Assert::IsTrue(iter2 == s.end());
		}

		TEST_METHOD(ycha8_test08)
		{
			myset<int>  s;

			for (int i = 1000; i >= 100; --i)
			{
				Assert::IsTrue(s.insert(i));
			}

			Assert::IsTrue(s.size() == 901);
			Assert::IsTrue(!s.empty());

			int j = 100;
			auto iter = s.begin();
			while (iter != s.end())
			{
				Assert::IsTrue(*iter == j);
				++iter;
				++j;
			}

			int k = 100;
			for (auto x : s)
			{
				Assert::IsTrue(x == k);
				++k;
			}
		}

		TEST_METHOD(ycha8_test09)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(100));
			Assert::IsTrue(s.insert(200));
			Assert::IsTrue(s.insert(300));
			Assert::IsTrue(s.insert(400));
			Assert::IsTrue(s.insert(500));
			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.insert(600));
			Assert::IsTrue(s.insert(700));
			Assert::IsTrue(s.insert(800));
			Assert::IsTrue(s.insert(900));
			Assert::IsTrue(s.insert(1000));
			Assert::IsTrue(s.size() == 10);
			Assert::IsTrue(!s.empty());

		}

		TEST_METHOD(ycha8_test10)
		{
			myset<string>  s;

			Assert::IsTrue(s.insert("hi"));
			Assert::IsTrue(s.insert("I am"));
			Assert::IsTrue(s.insert("Youlho"));
			Assert::IsTrue(s.insert("Cha"));
			Assert::IsTrue(s.insert("Nice"));
			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());
			Assert::IsTrue(s.insert("to"));
			Assert::IsTrue(s.insert("meet"));
			Assert::IsTrue(s.insert("you"));
			Assert::IsTrue(s.size() == 8);
			Assert::IsTrue(!s.empty());

		}

		//TEST_METHOD(ycha8_test11)
		//{
		//    myset<int>  s;

		//    s += 2;
		//    s += 3;
		//    s += 4;
		//    s += 5;
		//    s += 6;
		//    Assert::IsTrue(s.size() == 5);
		//    Assert::IsTrue(!s.empty());
		//    auto iter = s.find(2);
		//    Assert::IsTrue(iter == s.begin());
		//    auto iter2 = s.find(6);
		//    Assert::IsTrue(iter == s.end());



		//    s += 10;
		//    s += 11;
		//    s += 12;
		//    s += 13;
		//    s += 14;


		//    Assert::IsTrue(s.size() == 10);
		//    Assert::IsTrue(!s.empty());
		//    auto iter3 = s.find(2);
		//    Assert::IsTrue(iter == s.begin());
		//    auto iter4 = s.find(14);
		//    Assert::IsTrue(iter == s.end());
		//    Assert::IsTrue(s.insert(15));
		//    Assert::IsTrue(s.size() == 11);




		//}
		//TEST_METHOD(ycha8_test12)
		//{
		//    myset<int>  s;

		//    for (int i = 100; i <= 500; i++)
		//    {
		//        s += i;
		//    }
		//    Assert::IsTrue(!s.empty());
		//    Assert::IsTrue(s.size() == 401);
		//    auto iter = s.find(100);
		//    Assert::IsTrue(iter == s.begin());
		//    auto iter2 = s.find(500);
		//    Assert::IsTrue(iter == s.end());

		//    Assert::IsTrue(s.insert(501));
		//    Assert::IsTrue(s.insert(502));
		//    Assert::IsTrue(s.insert(503));
		//    Assert::IsTrue(s.insert(504));
		//    Assert::IsTrue(s.insert(505));
		//    Assert::IsTrue(!s.empty());




		//}

		TEST_METHOD(ycha8_test13)
		{
			myset<int>  s;

			Assert::IsTrue(s.insert(1));
			Assert::IsTrue(s.insert(2));
			s += 3;

			Assert::IsTrue(s.insert(4));
			Assert::IsTrue(s.insert(5));

			Assert::IsTrue(s.size() == 5);
			Assert::IsTrue(!s.empty());

			auto iter = s.find(1);

			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 1);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 2);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 3);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 4);
			++iter;
			Assert::IsTrue(iter != s.end());
			Assert::IsTrue(*iter == 5);
			++iter;
			Assert::IsTrue(iter == s.end());



		}


	};
}	