#include <iostream>
#include <string>
#include <utility>
#include <type_traits>

class Person 
{
private:
	std::string first_name_;
	std::string last_name_;

public:
	explicit Person(
		const std::string& first_name, const std::string& last_name) noexcept
		: first_name_{ std::move(first_name) }
		, last_name_{ std::move(last_name) }
	{}
	const std::string& get_first_name() const noexcept {
		return first_name_;
	}
	const std::string& get_last_name() const noexcept {
		return last_name_;
	}

};
// a bit over-engineered
template<typename Type>
auto operator<<(
	std::ostream& out, const Type& person)
	-> std::enable_if_t<std::is_same<Person, Type>::value, std::ostream&>
{
	return out << "first_name=" << person.get_first_name()
		<< ",last_name=" << person.get_last_name();
}

int main() {
	std::string first_name, last_name, event;
	std::cin >> first_name >> last_name >> event;
	const auto p = Person{ first_name, last_name };
	std::cout << p << " " << event << std::endl;
	return 0;
}