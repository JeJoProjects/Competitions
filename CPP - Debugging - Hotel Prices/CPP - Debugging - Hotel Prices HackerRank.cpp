#include <iostream>
#include <vector>
#include <memory>

class HotelRoom 
{
private:
	int bedrooms_;
	int bathrooms_;
public:
	explicit HotelRoom(const int bedrooms, const int bathrooms)
		: bedrooms_{ bedrooms }, bathrooms_{ bathrooms }
	{}

	virtual int get_price() const noexcept {
		return 50 * bedrooms_ + 100 * bathrooms_;
	}

};

class HotelApartment final: public HotelRoom 
{
public:
	HotelApartment(const int bedrooms, const int bathrooms)
		: HotelRoom{ bedrooms, bathrooms }
	{}

	int get_price() const noexcept override {
		return HotelRoom::get_price() + 100;
	}
};

int main() 
{
	using UPtrHotelRoom = std::unique_ptr<HotelRoom>;
	int n; 	std::cin >> n;
	std::vector<UPtrHotelRoom> rooms;

	for (int i = 0; i < n; ++i) {
		std::string room_type;
		int bedrooms;
		int bathrooms;
		std::cin >> room_type >> bedrooms >> bathrooms;
		if (room_type == "standard") {
			rooms.emplace_back(std::make_unique<HotelRoom>(bedrooms, bathrooms));
		}
		rooms.emplace_back(std::make_unique<HotelApartment>(bedrooms, bathrooms));
	}

	int total_profit{0};
	for (auto &room : rooms) {
		total_profit += room->get_price();
	}
	std::cout << total_profit << '\n';
	return 0;
}