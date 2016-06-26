#pragma once
class HangingEntity{
	public:
		HangingEntity(Level *);
		HangingEntity(Level *,int,int,int,int);
		void addAdditonalSaveData(CompoundTag *);
		void getBrightness(float);
		void hurt(Entity *,int);
		void init(void);
		void interactWithPlayer(Player *);
		void isHangingEntity(void);
		void isPickable(void);
		void move(float,float,float);
		void offs(int);
		void push(float,float,float);
		void readAdditionalSaveData(CompoundTag *);
		void setDir(int);
		void setPosition(int,int,int);
		void survives(void);
		void tick(void);
		void ~HangingEntity();
		void ~HangingEntity();
};
