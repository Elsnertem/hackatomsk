

#include "stdafx.h"
#include <cstdlib> 
#include <conio.h>

#include <ctime> 
#include <thread>

#include <Windows.h>
#include <vector>
#include <mutex>

std::mutex g_lock;

void calc(int x)
{

		g_lock.lock();
		srand(time(0));
		int dela = rand() % 1000;

		Sleep(dela);

		
		int result = x * 2;
	
		printf("%d \n", result);
		g_lock.unlock();

}


int main()
{

	std::vector <std::thread> th_vec;
	for (int x = 0; x < 10; x++)
	{

		th_vec.push_back(std::thread(calc, x));

	}
	
	for (int x = 0; x < 10; x++)
	{

		if (th_vec[x].joinable())
		{
			th_vec.at(x).join();
		}
	}

	system("pause");
	return 0;
	
}

