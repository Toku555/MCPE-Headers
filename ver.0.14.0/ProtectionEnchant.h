#pragma once
class ProtectionEnchant{
	public:
		ProtectionEnchant(int,int,std::string const&,int,int);
		void doPostHurt(ItemInstance &,Mob &,Mob &,int);
		void getDamageProtection(int,EntityDamageSource const&);
		void getLevelCostSpanByType(void);
		void getMaxCost(int);
		void getMaxLevel(void);
		void getMinCost(int);
		void getThornsDamage(int);
		void isProtectionEnchant(void);
		void ~ProtectionEnchant();
		void ~ProtectionEnchant();
};
