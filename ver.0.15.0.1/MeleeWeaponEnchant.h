#pragma once
class MeleeWeaponEnchant{
	public:
		MeleeWeaponEnchant(int,int,std::string const&,int,int);
		MeleeWeaponEnchant(int,int,std::string const&,int,int);
		void doPostAttack(Mob &,Mob &,int);
		void doPostAttack(Mob &,Mob &,int);
		void getDamageBonus(int,Entity const&);
		void getDamageBonus(int,Entity const&);
		void getMaxCost(int);
		void getMaxCost(int);
		void getMaxLevel(void);
		void getMaxLevel(void);
		void getMinCost(int);
		void getMinCost(int);
		void isMeleeDamageEnchant(void);
		void isMeleeDamageEnchant(void);
		void ~MeleeWeaponEnchant();
		void ~MeleeWeaponEnchant();
};
