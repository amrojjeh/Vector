#include <gtest/gtest.h>
#include <Vector.h>

/*
=============== VECTOR ADD ===============
*/

TEST(Vectors, SimpleAdd)
{
	Physics::Vector<double, 2> vec = {1, 2};
	Physics::Vector<double, 2> vec2 = {2, 1};
	Physics::Vector<double, 2> result = vec.Add(vec2);
	EXPECT_TRUE(result[0] == 3 && result[1] == 3);
	result = vec + vec2;
	EXPECT_TRUE(result[0] == 3 && result[1] == 3);
}

/*
=============== VECTOR SUBTRACT ===============
*/

TEST(Vectors, SimpleSubtract)
{
	Physics::Vec2D vec = {2, 2};
	Physics::Vec2D vec2 = {1, 2};
	Physics::Vec2D result = vec.Subtract(vec2);
	EXPECT_TRUE(result.x == 1 && result.y == 0);
	result = vec - vec2;
	EXPECT_TRUE(result.x == 1 && result.y == 0);
}

/*
=============== VECTOR SCALAR MULTIPICATION ===============
*/

TEST(Vectors, ScalarMultipication)
{
	Physics::Vec4D vec = {1, 2, 3, 4};
	double factor = 3;
	Physics::Vec4D result = vec.Multiply(factor);
	EXPECT_TRUE(result.x == 3 && result.y == 6 && result.z == 9 && result.w == 12);
	result = vec * factor;
	EXPECT_TRUE(result.x == 3 && result.y == 6 && result.z == 9 && result.w == 12);
}

/*
=============== VECTOR TYPEDEFS ===============
*/

TEST(Vectors, Vec2D)
{
	Physics::Vec2D vec = {3 ,1};
	EXPECT_TRUE(vec[0] == 3 && vec[1] == 1 && vec.x == 3 && vec.y == 1);
}

TEST(Vectors, Vec3D)
{
	Physics::Vec3D vec = {3, 1, 2};
	bool checkArray = vec[0] == 3 && vec[1] == 1 && vec[2] == 2;
	bool checkComponent = vec.x == 3 && vec.y == 1 && vec.z == 2;
	EXPECT_TRUE(checkArray && checkComponent);
}

TEST(Vectors, Vec4D)
{
	Physics::Vec4D vec = {3, 1, 2, 4};
	bool checkArray = vec[0] == 3 && vec[1] == 1 && vec[2] == 2 && vec[3] == 4;
	bool checkComponent = vec.x == 3 && vec.y == 1 && vec.z == 2 && vec.w == 4;
	EXPECT_TRUE(checkArray && checkComponent);
}
