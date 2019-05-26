#include "pch.h"
#include <iostream>
#include <thread>

using namespace std;


void do_work()
{

}


int main()
{
	thread worker(do_work);



	cin.get();
}