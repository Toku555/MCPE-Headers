#pragma once
class WeaponItem{
	public:
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void canDestroyInCreative(void);
		void canDestroySpecial(Block const*);
		void getAttackDamage(void);
		void getDestroySpeed(ItemInstance *,Block *);
		void getEnchantSlot(void);
		void getEnchantValue(void);
		void hurtEnemy(ItemInstance *,Mob *,Mob *);
		void isHandEquipped(void);
		void isValidRepairItem(ItemInstance const&,ItemInstance const&);
		void mineBlock(ItemInstance *,BlockID,int,int,int,Mob *);
		void use(ItemInstance &,Player &);
		void ~WeaponItem();
		void ~WeaponItem();
};
