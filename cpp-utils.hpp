#include <iostream>
#include <vector>
#include <string>
#include <memory>

template<typename T>
using $ =  std::shared_ptr<T>;

template <typename T>
int handle_errors(T function) {
	try{
		function();
		return 0;
	} catch (std::exception &ex) {
		std::cerr << ex.what() << std::endl;
		return -1;
	} catch (std::string &ex) {
		std::cerr << ex << std::endl;
		return -1;
	} catch (char *ex) {
		std::cerr << ex << std::endl;
		return -1;
	} catch (int ex) {
		return ex;
	} catch (...) {
		std::cerr << "Unknown exception" << std::endl;
		return -1;
	}
}

namespace std {
	void main(std::vector<std::string> args);
}

