#pragma once
class EntityFactory{
	public:
		void CreateEntity(EntityType,BlockSource &);
		void loadEntity(CompoundTag const*,BlockSource &);
};
