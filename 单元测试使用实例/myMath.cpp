#include"myMath.h"
#include<gtest\gtest.h>
namespace myMath {

	int add(int a, int b) {
		return a + b;
	}
	// 测试模块可以直接放在函数定义的地方
	TEST(testInDefination, test0)
	{
		EXPECT_NE(10, myMath::add(4, 10));//EXPECT_EQ是比较两个值是否相等
	}
}