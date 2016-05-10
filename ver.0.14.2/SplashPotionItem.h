#pragma once
class SplashPotionItem{
	public:
		SplashPotionItem(std::string const&,int);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void buildDescriptionName(ItemInstance const&);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getIcon(int,int,bool);
		void isThrowable(void);
		void use(ItemInstance &,Player &);
		void ~SplashPotionItem();
		void ~SplashPotionItem();
};
