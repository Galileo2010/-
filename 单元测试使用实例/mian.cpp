#include<iostream>
#include<gtest\gtest.h>
#include<thread>

void runTest()
{
	RUN_ALL_TESTS();
}
int main(int argc, char* argv[])
{
	testing::InitGoogleTest(&argc, argv);
	std::thread t(runTest);
	t.join();			// �ȴ����߳̽���
	//t.detach();		// ���ȴ��߳�
	return 0;
}