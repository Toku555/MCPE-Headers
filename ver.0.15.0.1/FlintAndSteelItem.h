#pragma once
class FlintAndSteelItem{
	public:
		FlintAndSteelItem(std::string const&,int);
		FlintAndSteelItem(std::string const&,int);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getEnchantSlot(void);
		void getEnchantSlot(void);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~FlintAndSteelItem();
		void ~FlintAndSteelItem();
};
