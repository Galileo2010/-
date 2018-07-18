#include<gtest\gtest.h>
#include "myMath.h"

// 测试模块集中管理
TEST(testInMoudle, test0)
{
	EXPECT_EQ(14, myMath::add(4, 10));//EXPECT_EQ是比较两个值是否相等
}