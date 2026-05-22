#include "pch.h"
#include "CppUnitTest.h"
#include "../LaSilpo/Product.h"
#include "../LaSilpo/Product.cpp"
#include "../LaSilpo/Order.h"
#include "../LaSilpo/Order.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:

		TEST_METHOD(DefaultProductConstructor)
		{
			Product p;

			Assert::IsTrue(p.getName() == "");
			Assert::AreEqual(0.0, p.getPrice());
			Assert::AreEqual(0, p.getQuantity());
		}

		TEST_METHOD(ProductConstructorWithValues)
		{
			Product p("Milk", 10.5, 2); 

			Assert::IsTrue(p.getName() == "Milk");
			Assert::AreEqual(10.5, p.getPrice());
			Assert::AreEqual(2, p.getQuantity());
		}

		TEST_METHOD(ProductSumTest)
		{
			Product p("Bread", 5.0, 3);

			Assert::AreEqual(15.0, p.getSum());
		}

		TEST_METHOD(AddQuantityTest)
		{
			Product p("Apple", 8.0, 2);

			p.addQuantity(3);

			Assert::AreEqual(5, p.getQuantity());
		}

		TEST_METHOD(OrderTotalWithoutDiscount)
		{
			Order order;

			order.addProduct(Product("Milk", 10, 2));
			order.addProduct(Product("Bread", 5, 1));

			Assert::AreEqual(25.0, order.getTotal());
		}

		TEST_METHOD(OrderTotalWithDiscount)
		{
			Order order;

			order.addProduct(Product("Cheese", 100, 1));
			order.setBirthdayDiscount(true);

			Assert::AreEqual(85.0, order.getTotal());
		}

		TEST_METHOD(DuplicateProductsTest)
		{
			Order order;

			order.addProduct(Product("Juice", 15, 1));
			order.addProduct(Product("Juice", 15, 2));

			Assert::AreEqual(45.0, order.getTotal());
		}
	};
}