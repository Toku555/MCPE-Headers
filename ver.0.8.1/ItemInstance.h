#pragma once
class ItemInstance{
	public:
		ItemInstance(Item const*);
		ItemInstance(Item const*,int);
		ItemInstance(Item const*,int,int);
		ItemInstance(ItemInstance const&);
		ItemInstance(Tile const*);
		ItemInstance(Tile const*,int);
		ItemInstance(Tile const*,int,int);
		ItemInstance(bool);
		ItemInstance(int,int,int);
		ItemInstance(void);
		void _setItem(int);
		void canDestroySpecial(Tile *);
		void clone(ItemInstance const*);
		void cloneSafe(ItemInstance const*);
		void fromTag(CompoundTag *);
		void getAttackDamage(Entity *);
		void getAuxValue(void);
		void getDamageValue(void);
		void getDescriptionId(void);
		void getDestroySpeed(Tile *);
		void getIcon(int,bool);
		void getId(void);
		void getMaxDamage(void);
		void getMaxStackSize(void);
		void getMaxUseDuration(void);
		void getName(void);
		void getUseAnimation(void);
		void hurtAndBreak(int,Mob *);
		void hurtEnemy(Mob *,Mob *);
		void init(int,int,int);
		void interactEnemy(Mob *,Player *);
		void isArmorItem(ItemInstance const*);
		void isDamageableItem(void);
		void isDamaged(void);
		void isItem(ItemInstance const*);
		void isLiquidClipItem(void);
		void isNull(void);
		void isStackable(ItemInstance const*,ItemInstance const*);
		void isStackable(void);
		void isStackedByData(void);
		void load(CompoundTag *);
		void matches(ItemInstance const*);
		void matches(ItemInstance const*,ItemInstance const*);
		void matchesNulls(ItemInstance const*,ItemInstance const*);
		void mineBlock(int,int,int,int,Mob *);
		void operator==(ItemInstance const&);
		void releaseUsing(Level *,Player *,int);
		void remove(int);
		void sameItem(ItemInstance*);
		void sameItemAndAux(ItemInstance*);
		void save(CompoundTag *);
		void setAuxValue(int);
		void setDescriptionId(std::string const&);
		void setNull(void);
		void snap(Player *);
		void toString(void);
		void use(Level *,Player *);
		void useAsFuel(void);
		void useOn(Player *,Level *,int,int,int,int,float,float,float);
		void useTimeDepleted(Level *,Player *);
};
