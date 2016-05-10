#pragma once
class Enchant{
	public:
		Enchant(int,int,std::string const&,int,int);
		void canEnchant(ItemInstance const&);
		void canEnchant(int);
		void canPrimaryEnchant(ItemInstance const&);
		void canPrimaryEnchant(int);
		void canSecondaryEnchant(ItemInstance const&);
		void canSecondaryEnchant(int);
		void doPostAttack(Mob &,Mob &,int);
		void doPostHurt(ItemInstance &,Mob &,Mob &,int);
		void getDamageBonus(int,Entity const&);
		void getDamageProtection(int,EntityDamageSource const&);
		void getDescription(void);
		void getFrequency(void);
		void getMaxCost(int);
		void getMaxLevel(void);
		void getMinCost(int);
		void getMinLevel(void);
		void initEnchants(void);
		void isCompatibleWith(int);
		void isMeleeDamageEnchant(void);
		void isProtectionEnchant(void);
		void teardownEnchants(void);
		void ~Enchant();
		void ~Enchant();
};
