#pragma once
class EnchantedBookItem{
	public:
		EnchantedBookItem(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void getEnchantSlot(void);
		void getEnchantValue(void);
		void isFoil(ItemInstance const*);
		void ~EnchantedBookItem();
		void ~EnchantedBookItem();
};
