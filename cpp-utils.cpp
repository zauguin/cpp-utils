#include "cpp_utils.hpp"

int main(int argc, char **argv) {
	return handle_errors([&]{std::main(std::vector<std::string>(argv, argv + argc));});
}
