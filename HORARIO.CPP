#include <chrono>
#include <iostream>
#include <iomanip>

using namespace std;
using namespace std::chrono;

int main(){
	auto now = system_clock::now();
	time_t t = system_clock::to_time(now);
	cout << put_time(localtime(&t), "%c") << '\n";



}