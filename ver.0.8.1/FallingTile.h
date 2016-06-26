#pragma once
class FallingTile{
	public:
		FallingTile(Level *);
		FallingTile(Level *,float,float,float,int,int);
		void addAdditonalSaveData(CompoundTag *);
		void getEntityTypeId(void);
		void getLevel(void);
		void getShadowHeightOffs(void);
		void getShadowRadius(void);
		void init(void);
		void isPickable(void);
		void readAdditionalSaveData(CompoundTag *);
		void tick(void);
		void ~FallingTile();
		void ~FallingTile();
};
