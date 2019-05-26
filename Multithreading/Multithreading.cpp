#include "pch.h"
#include <iostream>
#include <thread>

using namespace std;

static bool s_finished = false;

void do_work()
{
    using namespace std::literals::chrono_literals;

    cout << "Started thread, ID: " << this_thread::get_id() << endl;

    while(!s_finished)
    {
        cout << "Working..." << endl;
        this_thread::sleep_for(1s);
    }
}


int main()
{
    thread worker(do_work); // execute thread function

    cin.get();
    s_finished = true;

    worker.join(); // wait for the thread to finish (close thread)

    cout << "Started thread, ID: " << this_thread::get_id() << endl;
    cout << "Finished" << endl;

    cin.get(); // wait untill ENTER is pressed
}