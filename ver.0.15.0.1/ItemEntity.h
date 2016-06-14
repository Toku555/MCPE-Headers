#pragma once
class ItemEntity{
	public:
		ItemEntity(BlockSource &);
		ItemEntity(BlockSource &);
		ItemEntity(BlockSource &,Vec3 const&,ItemInstance const&,int,float);
		ItemEntity(BlockSource &,Vec3 const&,ItemInstance const&,int,float);
		void _defineEntityData(void);
		void _validateItem(void);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void getAddPacket(void);
		void getAddPacket(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getHandleWaterAABB(void);
		void getHandleWaterAABB(void);
		void getSourceUniqueID(void);
		void getSourceUniqueID(void);
		void hurt(EntityDamageSource const&,int);
		void hurt(EntityDamageSource const&,int);
		void isPushable(void);
		void isPushable(void);
		void normalTick(void);
		void normalTick(void);
		void playerTouch(Player &);
		void playerTouch(Player &);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void setSourceEntity(Entity const*);
		void setSourceEntity(Entity const*);
		void ~ItemEntity();
		void ~ItemEntity();
		void ~ItemEntity();
		void ~ItemEntity();
		void ~ItemEntity();
};
