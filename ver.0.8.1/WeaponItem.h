#pragma once
class WeaponItem{
	public:
		WeaponItem(int,Item::Tier const&);
		void canDestroySpecial(Tile const*);
		void getAttackDamage(Entity *);
		void getDestroySpeed(ItemInstance *,Tile *);
		void getMaxUseDuration(void);
		void hurtEnemy(ItemInstance *,Mob *,Mob *);
		void isHandEquipped(void);
		void mineBlock(ItemInstance *,int,int,int,int,Mob *);
		void use(ItemInstance *,Level *,Player *);
		void ~WeaponItem();
		void ~WeaponItem();
};
