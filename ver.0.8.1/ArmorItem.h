#pragma once
class ArmorItem{
	public:
		ArmorItem(int,ArmorItem::ArmorMaterial const&,int,int);
		void ArmorMaterial(int,int,int,int,int);
		void getDefenseForSlot(int);
		void getHealthForSlot(int);
		void isArmor(void);
		void ~ArmorItem();
		void ~ArmorItem();
};
