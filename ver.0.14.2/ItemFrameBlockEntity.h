#pragma once
class ItemFrameBlockEntity{
	public:
		ItemFrameBlockEntity(BlockPos);
		ItemFrameBlockEntity(BlockPos,BlockEntityType);
		void _checkMapRemoval(BlockSource &,ItemInstance &);
		void dropFramedItem(BlockSource &,bool);
		void getClockFrame(void);
		void getCompassFrame(void);
		void getFramedItem(void);
		void getRotation(void);
		void getShadowRadius(BlockSource &);
		void getUpdatePacket(BlockSource &);
		void load(CompoundTag &);
		void onChanged(BlockSource &);
		void onUpdatePacket(CompoundTag &);
		void rotateFramedItem(void);
		void save(CompoundTag &);
		void setItem(BlockSource &,ItemInstance &);
		void spawnItem(BlockSource &,ItemInstance &);
		void tick(BlockSource &);
		void ~ItemFrameBlockEntity();
		void ~ItemFrameBlockEntity();
};
