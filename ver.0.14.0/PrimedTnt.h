#pragma once
class PrimedTnt{
	public:
		PrimedTnt(BlockSource &,Vec3 const&,Entity *,int);
		PrimedTnt(BlockSource &,int);
		void addAdditionalSaveData(CompoundTag &);
		void getEntityTypeId(void);
		void getOwnerEntityType(void);
		void getShadowHeightOffs(void);
		void getShadowRadius(void);
		void getSourceUniqueID(void);
		void inheritOwners(Entity *);
		void isPickable(void);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void ~PrimedTnt();
		void ~PrimedTnt();
};
