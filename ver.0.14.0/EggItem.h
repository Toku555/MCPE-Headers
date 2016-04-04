#pragma once
class EggItem{
	public:
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void isThrowable(void);
		void use(ItemInstance &,Player &);
		void ~EggItem();
		void ~EggItem();
};
