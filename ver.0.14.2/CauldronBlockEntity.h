#pragma once
class CauldronBlockEntity{
	public:
		CauldronBlockEntity(BlockPos const&);
		void getColor(void);
		void getContainerSize(void);
		void getCustomColor(void);
		void getCustomName(void);
		void getItem(int);
		void getMaxStackSize(void);
		void getMixDyeColor(void);
		void getName(void);
		void getPotionColor(void);
		void getUpdatePacket(BlockSource &);
		void isFinished(void);
		void isSlotEmpty(int);
		void load(CompoundTag &);
		void mixDyes(void);
		void onChanged(BlockSource &);
		void onUpdatePacket(CompoundTag &);
		void removeItem(int,int);
		void save(CompoundTag &);
		void setCustomColor(Color const&);
		void setCustomName(std::string &);
		void setItem(int,ItemInstance *);
		void startOpen(Player &);
		void stopOpen(Player &);
		void tick(BlockSource &);
		void ~CauldronBlockEntity();
		void ~CauldronBlockEntity();
};
