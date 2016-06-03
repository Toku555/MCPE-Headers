#pragma once
class SplashPotionItem{
	public:
		SplashPotionItem(std::string const&,int);
		SplashPotionItem(std::string const&,int);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getIcon(int,int,bool);
		void getIcon(int,int,bool);
		void isThrowable(void);
		void isThrowable(void);
		void use(ItemInstance &,Player &);
		void use(ItemInstance &,Player &);
		void ~SplashPotionItem();
		void ~SplashPotionItem();
		void ~SplashPotionItem();
		void ~SplashPotionItem();
};
