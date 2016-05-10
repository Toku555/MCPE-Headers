#pragma once
class DyePowderItem{
	public:
		DyePowderItem(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getIcon(int,int,bool);
		void interactEnemy(ItemInstance *,Mob *,Player *);
		void isDye(void);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~DyePowderItem();
		void ~DyePowderItem();
};
