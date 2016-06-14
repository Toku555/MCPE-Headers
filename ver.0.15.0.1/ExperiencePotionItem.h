#pragma once
class ExperiencePotionItem{
	public:
		ExperiencePotionItem(std::string const&,int);
		ExperiencePotionItem(std::string const&,int);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void isGlint(ItemInstance const*);
		void isGlint(ItemInstance const*);
		void isThrowable(void);
		void isThrowable(void);
		void use(ItemInstance &,Player &);
		void use(ItemInstance &,Player &);
		void ~ExperiencePotionItem();
		void ~ExperiencePotionItem();
};
