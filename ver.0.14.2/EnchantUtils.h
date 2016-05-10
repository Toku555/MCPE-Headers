#pragma once
class EnchantUtils{
	public:
		void _convertBookCheck(ItemInstance &);
		void applyEnchant(ItemInstance &,EnchantmentInstance const&);
		void applyEnchant(ItemInstance &,ItemEnchants const&);
		void applyEnchant(ItemInstance &,int,int);
		void combineEnchantedItems(ItemInstance const&,ItemInstance const&,ItemInstance&,bool);
		void determineActivation(int);
		void determineCompatibility(int);
		void doPostDamageEffects(Mob &,Mob &);
		void doPostHurtEffects(Mob &,Mob &);
		void generateEnchantedBook(EnchantmentInstance const&);
		void generateEnchantedBook(ItemEnchants const&);
		void generateRandomEnchantedBook(int,int);
		void getAvailableEnchantmentResults(Item *,int);
		void getBestEnchantLevel(int,Mob const&);
		void getBookCasePositions(BlockSource &,Vec3 const&);
		void getBookcaseCount(BlockSource &,Vec3 const&);
		void getDamageReduction(EntityDamageSource const&,Mob const&);
		void getEnchantCosts(ItemInstance const&,int);
		void getEnchantLevel(int,ItemInstance const&);
		void getEnchantNameAndLevel(int,int);
		void getLegalEnchants(Item *);
		void getMeleeDamageBonus(Mob const&,Mob&);
		void getRandomItemWith(int,Mob &);
		void getRandomName(void);
		void getTotalProtectionLevels(int,Mob const&);
		void hasEnchant(int,ItemInstance const&);
		void isCompatibleWith(int,int);
		void randomlyEnchant(ItemInstance &,int,int);
		void removeEnchants(ItemInstance &);
		void selectEnchantments(Item *,int,int);
};
