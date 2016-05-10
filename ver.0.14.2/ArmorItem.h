#pragma once
class ArmorItem{
	public:
		ArmorItem(std::string const&,int,ArmorItem::ArmorMaterial const&,int,ArmorSlot);
		void ArmorMaterial(int,int,int,int,int,int);
		void getDefenseForSlot(ArmorSlot);
		void getEnchantValue(void);
		void getHealthForSlot(ArmorSlot);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void clearColor(ItemInstance &);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getArmorForSlot(ArmorSlot,int);
		void getColor(ItemInstance const&);
		void getEnchantSlot(void);
		void getEnchantValue(void);
		void getSlotForItem(ItemInstance const&);
		void getTierItem(void);
		void hasCustomColor(ItemInstance const&);
		void isArmor(void);
		void isValidRepairItem(ItemInstance const&,ItemInstance const&);
		void setColor(ItemInstance &,Color const&);
		void ~ArmorItem();
		void ~ArmorItem();
};
