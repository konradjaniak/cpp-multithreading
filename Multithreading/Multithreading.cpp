#include "pch.h"
#include <iostream>
#include <thread>

using namespace std;


void do_work()
{

}


int main()
{
	thread worker(do_work); // execute thread function

	worker.join(); // wait for the thread to finish (close thread)



	cin.get();
}