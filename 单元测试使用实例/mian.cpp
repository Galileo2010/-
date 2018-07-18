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
	t.join();			// 等待该线程结束
	//t.detach();		// 不等待线程
	return 0;
}