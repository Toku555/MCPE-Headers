#pragma once
class SnowballItem{
	public:
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void isThrowable(void);
		void use(ItemInstance &,Player &);
		void ~SnowballItem();
		void ~SnowballItem();
};
