#include"myMath.h"
#include<gtest\gtest.h>
namespace myMath {

	int add(int a, int b) {
		return a + b;
	}
	// ����ģ�����ֱ�ӷ��ں�������ĵط�
	TEST(testInDefination, test0)
	{
		EXPECT_NE(10, myMath::add(4, 10));//EXPECT_EQ�ǱȽ�����ֵ�Ƿ����
	}
}