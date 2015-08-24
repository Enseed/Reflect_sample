#include "SampleClass.hh"
#include "SampleClass.rh"
#include <iostream>

int main(int argc, const char *agv[])
{
	std::cout << "Class " << reflect::Class<SampleClass>::name() << " contains the following fields:" << std::endl;

	reflect::Class<SampleClass>::visitFields([](auto field) {
		typedef decltype(field) field_type;
		const char *name = field_type::name();
		std::cout << "\t" << name  << std::endl;
	});

	return 0;
}