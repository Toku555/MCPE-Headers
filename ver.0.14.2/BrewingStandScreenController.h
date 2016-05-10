#pragma once
class BrewingStandScreenController{
	public:
		BrewingStandScreenController(std::shared_ptr<MinecraftScreenModel>,BlockPos const&);
		void _addToOrder(std::vector<std::string,std::allocator<std::string>> &,std::string const&,std::string const&);
		void _isStillValid(void);
		void _registerAutoPlaceOrder(void);
		void _registerCoalesceOrder(void);
		void _shouldEmptyBottleImageBeVisible(int);
		void tick(void);
		void ~BrewingStandScreenController();
		void ~BrewingStandScreenController();
};
