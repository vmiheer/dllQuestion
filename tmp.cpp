#include <iostream>
#include <pthread.h>
#include <boost/filesystem.hpp>

int main(int argc, char** argv)
{
	pthread_create(0, 0, 0, 0);
	std::cout << boost::filesystem::path("~");
	return 0;
}