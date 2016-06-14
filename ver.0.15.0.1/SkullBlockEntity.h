#pragma once
class SkullBlockEntity{
	public:
		SkullBlockEntity(BlockPos const&);
		SkullBlockEntity(BlockPos const&);
		void getRotation(void);
		void getRotation(void);
		void getSkullType(void);
		void getSkullType(void);
		void getUpdatePacket(BlockSource &);
		void getUpdatePacket(BlockSource &);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void onChanged(BlockSource &);
		void onChanged(BlockSource &);
		void onUpdatePacket(CompoundTag &);
		void onUpdatePacket(CompoundTag &);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void setRotation(int);
		void setRotation(int);
		void setSkullType(SkullBlockEntity::SkullType);
		void setSkullType(int);
		void setSkullType(int);
		void ~SkullBlockEntity();
		void ~SkullBlockEntity();
};
