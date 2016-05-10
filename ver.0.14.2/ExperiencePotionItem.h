#pragma once
class ExperiencePotionItem{
	public:
		ExperiencePotionItem(std::string const&,int);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void isFoil(ItemInstance const*);
		void isThrowable(void);
		void use(ItemInstance &,Player &);
		void ~ExperiencePotionItem();
		void ~ExperiencePotionItem();
};
