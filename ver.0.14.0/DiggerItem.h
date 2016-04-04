#pragma once
class DiggerItem{
	public:
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void getAttackDamage(void);
		void getDestroySpeed(ItemInstance *,Block *);
		void getEnchantValue(void);
		void hurtEnemy(ItemInstance *,Mob *,Mob *);
		void isHandEquipped(void);
		void isValidRepairItem(ItemInstance const&,ItemInstance const&);
		void mineBlock(ItemInstance *,BlockID,int,int,int,Mob *);
		void ~DiggerItem();
		void ~DiggerItem();
};
