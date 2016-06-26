#pragma once
class Arrow{
	public:
		Arrow(Level *);
		Arrow(Level *,Mob *,Mob *,float,float);
		Arrow(Level *,Mob *,float);
		Arrow(Level *,float,float,float);
		void _init(void);
		void addAdditonalSaveData(CompoundTag *);
		void getAuxData(void);
		void getEntityTypeId(void);
		void getShadowHeightOffs(void);
		void getShadowRadius(void);
		void lerpMotion(float,float,float);
		void playerTouch(Player *);
		void readAdditionalSaveData(CompoundTag *);
		void shoot(float,float,float,float,float);
		void tick(void);
		void ~Arrow();
		void ~Arrow();
};
