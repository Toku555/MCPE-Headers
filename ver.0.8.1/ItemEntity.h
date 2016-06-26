#pragma once
class ItemEntity{
	public:
		ItemEntity(Level *);
		ItemEntity(Level *,float,float,float,ItemInstance const&);
		void addAdditonalSaveData(CompoundTag *);
		void burn(int);
		void checkInTile(float,float,float);
		void getEntityTypeId(void);
		void getLifeTime(void);
		void hurt(Entity *,int);
		void isInWater(void);
		void isItemEntity(void);
		void playerTouch(Player *);
		void readAdditionalSaveData(CompoundTag *);
		void tick(void);
		void ~ItemEntity();
		void ~ItemEntity();
};
