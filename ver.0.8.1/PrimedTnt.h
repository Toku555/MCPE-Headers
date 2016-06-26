#pragma once
class PrimedTnt{
	public:
		PrimedTnt(Level *);
		PrimedTnt(Level *,float,float,float);
		void addAdditonalSaveData(CompoundTag *);
		void explode(void);
		void getEntityTypeId(void);
		void getShadowHeightOffs(void);
		void getShadowRadius(void);
		void isPickable(void);
		void readAdditionalSaveData(CompoundTag *);
		void tick(void);
		void ~PrimedTnt();
		void ~PrimedTnt();
};
