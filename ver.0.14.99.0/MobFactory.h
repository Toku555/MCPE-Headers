#pragma once
class MobFactory{
	public:
		void CreateMob(EntityType,BlockSource &,Vec3 const&);
		void CreateMob(EntityType,BlockSource &,Vec3 const&);
		void CreateMob(EntityType,BlockSource &,Vec3 const&,Vec2 const&);
		void CreateMob(EntityType,BlockSource &,Vec3 const&,Vec2 const&);
		void GetMobNameID(EntityType);
		void GetMobNameID(EntityType);
		MobFactory(Level &);
		MobFactory(Level &);
		void _categoryID(EntityType);
		void _getRingPosition(Player &,float,float,int,int);
		void _getRingPosition(Player &,float,float,int,int);
		void _spawnMobCluster(Player &,BlockPos const&,bool);
		void _spawnMobCluster(Player &,BlockPos const&,bool);
		void _updateBaseTypeCount(Player &);
		void _updateBaseTypeCount(Player &);
		void addMob(std::unique_ptr<Mob,std::default_delete<Mob>>,bool,bool);
		void addMob(std::unique_ptr<Mob,std::default_delete<Mob>>,bool,bool);
		void getSpawnEnemies(void);
		void getSpawnEnemies(void);
		void isSpawnPositionOk(EntityType,BlockSource &,BlockPos const&);
		void isSpawnPositionOk(EntityType,BlockSource &,BlockPos const&);
		void popCapAllows(Player &,MobSpawnerData const&,bool);
		void postProcessSpawnMobs(BlockSource &,int,int,Random &);
		void setSpawnEnemies(bool);
		void setSpawnEnemies(bool);
		void tick(Player &);
		void tick(Player &);
};
