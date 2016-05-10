#pragma once
class SkullBlockEntity{
	public:
		SkullBlockEntity(BlockPos const&);
		void getRotation(void);
		void getSkullType(void);
		void getUpdatePacket(BlockSource &);
		void load(CompoundTag &);
		void onChanged(BlockSource &);
		void onUpdatePacket(CompoundTag &);
		void save(CompoundTag &);
		void setRotation(int);
		void setSkullType(SkullBlockEntity::SkullType);
		void setSkullType(int);
		void ~SkullBlockEntity();
		void ~SkullBlockEntity();
};
