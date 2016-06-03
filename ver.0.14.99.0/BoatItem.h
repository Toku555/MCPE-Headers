#pragma once
class BoatItem{
	public:
		BoatItem(std::string const&,int);
		BoatItem(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getIcon(int,int,bool);
		void getIcon(int,int,bool);
		void isLiquidClipItem(int);
		void isLiquidClipItem(int);
		void isStackedByData(void);
		void isStackedByData(void);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~BoatItem();
		void ~BoatItem();
		void ~BoatItem();
		void ~BoatItem();
};