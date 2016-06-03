#pragma once
class ChestBlockEntity{
	public:
		ChestBlockEntity(BlockPos const&);
		void _canOpenThis(BlockSource &);
		void _getCenter(float &,float &,float &);
		void _saveClientSideState(CompoundTag &);
		void _unpair(void);
		void _validatePairedChest(BlockSource &);
		void canOpen(BlockSource &);
		void canPairWith(BlockEntity *,BlockSource &);
		void clearCache(void);
		void getContainerSize(void);
		void getCrackEntity(BlockSource &,BlockPos const&);
		void getDebugText(std::vector<std::string,std::allocator<std::string>> &);
		void getItem(int);
		void getMaxStackSize(void);
		void getModelOffsetX(void);
		void getName(void);
		void getOldOpenness(void);
		void getOpenCount(void);
		void getOpenness(void);
		void getPairedChestPosition(void);
		void getUpdatePacket(BlockSource &);
		void isLargeChest(void);
		void isMainSubchest(void);
		void isTrappedChest(void);
		void load(CompoundTag &);
		void onChanged(BlockSource &);
		void onNeighborChanged(BlockSource &,BlockPos const&);
		void onRemoved(void);
		void onUpdatePacket(CompoundTag &);
		void openBy(Player &);
		void pairWith(ChestBlockEntity*,bool);
		void save(CompoundTag &);
		void setContainerChanged(int);
		void setItem(int,ItemInstance *);
		void setOldOpenness(float);
		void setOpenCount(int);
		void setOpenness(float);
		void startOpen(Player &);
		void stopOpen(Player &);
		void tick(BlockSource &);
		void triggerEvent(int,int);
		void unpair(void);
		void ~ChestBlockEntity();
		void ~ChestBlockEntity();
};