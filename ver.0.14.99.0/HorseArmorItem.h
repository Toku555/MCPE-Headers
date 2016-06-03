#pragma once
class HorseArmorItem{
	public:
		HorseArmorItem(std::string const&,int,int,HorseArmorItem::HorseArmorTier);
		HorseArmorItem(std::string const&,int,int,HorseArmorItem::HorseArmorTier);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void clearColor(ItemInstance &);
		void clearColor(ItemInstance &);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getArmorValue(void);
		void getArmorValue(void);
		void getColor(ItemInstance const&);
		void getColor(ItemInstance const&);
		void getTier(void);
		void getTier(void);
		void hasCustomColor(ItemInstance const&);
		void hasCustomColor(ItemInstance const&);
		void setColor(ItemInstance &,Color const&);
		void setColor(ItemInstance &,Color const&);
		void ~HorseArmorItem();
		void ~HorseArmorItem();
};
