#pragma once
class FireChargeItem{
	public:
		FireChargeItem(std::string const&,int);
		FireChargeItem(std::string const&,int);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~FireChargeItem();
		void ~FireChargeItem();
};
