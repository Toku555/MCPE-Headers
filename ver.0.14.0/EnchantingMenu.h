#pragma once
class EnchantingMenu{
	public:
		EnchantingMenu(Player &,BlockPos const&);
		void _clearOptions(void);
		void _enchantResult(int);
		void _getLapisCount(void);
		void _recalculateOptions(void);
		void _setLapisCount(int);
		void getItems(void);
		void getSlot(int);
		void isOptionAvailable(int);
		void removeSlot(int,int);
		void setClientOptions(std::vector<std::pair<int,ItemEnchants>,std::allocator<std::pair<int,ItemEnchants>>>,std::vector<std::string,std::allocator<std::string>>);
		void setSlot(int,ItemInstance &);
		void ~EnchantingMenu();
		void ~EnchantingMenu();
};
