#pragma once
class MultiPlayerLevel{
	public:
		MultiPlayerLevel(SoundPlayer &,std::string const&,LevelSettings const&);
		void addEntity(std::unique_ptr<Entity,std::default_delete<Entity>>);
		void directTickEntities(BlockSource &);
		void disconnect(void);
		void putEntity(EntityUniqueID,std::unique_ptr<Entity,std::default_delete<Entity>>);
		void setServerDifficulty(Difficulty);
		void tick(void);
		void ~MultiPlayerLevel();
		void ~MultiPlayerLevel();
};
