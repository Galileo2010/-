#include<gtest\gtest.h>
#include "myMath.h"

// ����ģ�鼯�й���
TEST(testInMoudle, test0)
{
	EXPECT_EQ(14, myMath::add(4, 10));//EXPECT_EQ�ǱȽ�����ֵ�Ƿ����
}