#pragma once
class BrewingStandScreenController{
	public:
		BrewingStandScreenController(std::shared_ptr<MinecraftScreenModel>,BlockPos const&);
		BrewingStandScreenController(std::shared_ptr<MinecraftScreenModel>,BlockPos const&);
		void _addToOrder(std::vector<std::string,std::allocator<std::string>> &,std::string const&,std::string const&);
		void _isStillValid(void);
		void _isStillValid(void);
		void _registerAutoPlaceOrder(void);
		void _registerAutoPlaceOrder(void);
		void _registerBindings(void);
		void _registerBindings(void);
		void _registerCoalesceOrder(void);
		void _registerCoalesceOrder(void);
		void _shouldEmptyBottleImageBeVisible(int);
		void _shouldEmptyBottleImageBeVisible(int);
		void tick(void);
		void tick(void);
		void ~BrewingStandScreenController();
		void ~BrewingStandScreenController();
		void ~BrewingStandScreenController();
		void ~BrewingStandScreenController();
};
