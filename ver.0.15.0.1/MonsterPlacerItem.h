#pragma once
class MonsterPlacerItem{
	public:
		MonsterPlacerItem(std::string const&,int);
		MonsterPlacerItem(std::string const&,int);
		void _actuallySpawnMob(BlockSource &,EntityType,Vec3 const&,Vec2 const&,ItemInstance const*);
		void _actuallySpawnMob(BlockSource &,EntityType,Vec3 const&,Vec2 const&,ItemInstance const*);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void dispense(BlockSource &,Container &,int,Vec3 const&,signed char);
		void getIcon(int,int,bool);
		void getIcon(int,int,bool);
		void isLiquidClipItem(int);
		void isLiquidClipItem(int);
		void spawnMobAt(BlockSource &,EntityType,Vec3 const&,ItemInstance const*);
		void spawnMobAt(BlockSource &,EntityType,Vec3 const&,Vec3 const&,ItemInstance const*);
		void spawnMobAt(BlockSource &,EntityType,Vec3 const&,Vec3 const&,ItemInstance const*);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void useOn(ItemInstance *,Player *,int,int,int,signed char,float,float,float);
		void ~MonsterPlacerItem();
		void ~MonsterPlacerItem();
		void ~MonsterPlacerItem();
		void ~MonsterPlacerItem();
};
