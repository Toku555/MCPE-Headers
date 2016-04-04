#pragma once
class ItemEntity{
	public:
		ItemEntity(BlockSource &);
		ItemEntity(BlockSource &,Vec3 const&,ItemInstance const&,int);
		void _defineEntityData(void);
		void _validateItem(void);
		void addAdditionalSaveData(CompoundTag &);
		void burn(int);
		void getAddPacket(void);
		void getEntityTypeId(void);
		void getHandleWaterAABB(void);
		void getSourceUniqueID(void);
		void hurt(EntityDamageSource const&,int);
		void isPushable(void);
		void normalTick(void);
		void playerTouch(Player &);
		void readAdditionalSaveData(CompoundTag const&);
		void setSourceEntity(Entity const*);
		void ~ItemEntity();
		void ~ItemEntity();
};
