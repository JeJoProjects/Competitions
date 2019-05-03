#include <string>
#include <vector>
#include <iostream>
#include <utility>
#include <type_traits>

// variable template
template<typename Type> static constexpr bool allowed_types 
= std::is_same_v<Type, float> ||
  std::is_same_v<Type, int> ||
  std::is_same_v<Type, std::string>;

template<typename Type> class AddElements final
{
	static_assert(
		allowed_types<Type>,
		"This type is not allowed. Only (float, int and std::string are allowed)");
	Type _var1;
public:
	explicit constexpr AddElements(const Type& var1) noexcept
		: _var1{ std::is_fundamental_v<Type> ? var1 : std::move(var1) }
	{}
	constexpr Type add(const Type & var2) const noexcept { return _var1 + var2; }
};

int main()
{
	int n;
	std::cin >> n;
	// generic lambda 
	constexpr auto lambda = [](auto call_parameter)->void {
		using Type = decltype(call_parameter);
		Type element1, element2;
		std::cin >> element1 >> element2;
		const AddElements<Type> obj{ element1 };
		std::cout << obj.add(element2) << '\n';
	};
	while (n--)
	{
		std::string type;  std::cin >> type;
		if (type == std::string{ "float" }) 	   lambda(1.0f);
		else if (type == std::string{ "int" })     lambda(1);
		else if (type == std::string{ "string" })  lambda(std::string{ "" });
	}
	return 0;
}

#if 0 // using class template specilization

template <typename Type>
inline static constexpr bool allowed_types // variable tremplate
  = std::is_same<Type, double>::value || std::is_same<Type, int>::value;

template <typename Type> class AddElements final 
{
	static_assert(
		allowed_types<Type>,
		"This type is not allowed. Only (double and int are allowed)");
	Type _var1;

public:
	explicit constexpr AddElements(const Type var1) noexcept : _var1{ var1 } {}
	constexpr Type add(const Type var2) const noexcept { return _var1 + var2; }
};

template <> class AddElements<std::string> final 
{
	std::string _var1;

public:
	explicit AddElements(const std::string& var1) noexcept
		: _var1{ std::move(var1) } 
	{}

	std::string concatenate(const std::string& var2) const noexcept 
	{
		return _var1 + var2;
	}
};
#endif