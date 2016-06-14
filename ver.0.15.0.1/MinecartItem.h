#pragma once
class MinecartItem{
	public:
		MinecartItem(std::string const&,int,MinecartType);
		MinecartItem(std::string const&,int,MinecartType);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~MinecartItem();
		void ~MinecartItem();
};
