#pragma once
class ItemEnchants{
	public:
		ItemEnchants(ItemEnchants&&);
		ItemEnchants(int);
		ItemEnchants(int,ListTag const&);
		void _fromList(ListTag const&);
		void _toList(void);
		void addEnchant(EnchantmentInstance,bool);
		void addEnchants(ItemEnchants const&);
		void count(void);
		void getAllEnchants(void);
		void getEnchantNames(void);
		void getEnchants(int);
		void getSlot(void);
		void getTotalValue(bool);
		void hasEnchant(int);
		void isEmpty(void);
};
