#include <iostream>
#include <vector>
#include<string>
#include<thread>
#include<chrono>

using namespace std;

void PrintCurrentTime()
{}

void Printmessage(const std::string& message)
{
    std::cout << "sleep now...";
    PrintCurrentTime();

    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << message << " ";
    PrintCurrentTime();
}

int main()
{
    std::thread thread(Printmessage, "Message from a child thread.");

    Printmessage("message from a main thread");
    Printmessage("hello");
    Printmessage("hello22");
    Printmessage("hello33");
    thread.join();

    return 0;

}
