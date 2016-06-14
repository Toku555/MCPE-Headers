#pragma once
class WeaponItem{
	public:
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void appendFormattedHovertext(ItemInstance const&,Player const&,std::string &,bool);
		void canDestroyInCreative(void);
		void canDestroyInCreative(void);
		void canDestroySpecial(Block const*);
		void canDestroySpecial(Block const*);
		void getAttackDamage(void);
		void getAttackDamage(void);
		void getDestroySpeed(ItemInstance *,Block *);
		void getDestroySpeed(ItemInstance *,Block *);
		void getEnchantSlot(void);
		void getEnchantSlot(void);
		void getEnchantValue(void);
		void getEnchantValue(void);
		void hurtEnemy(ItemInstance *,Mob *,Mob *);
		void hurtEnemy(ItemInstance *,Mob *,Mob *);
		void isHandEquipped(void);
		void isHandEquipped(void);
		void isValidRepairItem(ItemInstance const&,ItemInstance const&);
		void isValidRepairItem(ItemInstance const&,ItemInstance const&);
		void use(ItemInstance &,Player &);
		void use(ItemInstance &,Player &);
		void ~WeaponItem();
		void ~WeaponItem();
};
