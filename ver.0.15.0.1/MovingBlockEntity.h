#pragma once
class MovingBlockEntity{
	public:
		MovingBlockEntity(BlockPos const&);
		MovingBlockEntity(BlockPos const&);
		void _moveCollidedEntities(BlockEntity *,BlockSource &);
		void _moveCollidedEntities(BlockEntity *,BlockSource &);
		void _validPistonPos(BlockSource &);
		void aquireBlockEntity(void);
		void aquireBlockEntity(void);
		void getBlock(void);
		void getBlock(void);
		void getBlockEntity(void);
		void getBlockEntity(void);
		void getDrawPos(BlockSource &,float);
		void getDrawPos(BlockSource &,float);
		void getUpdatePacket(BlockSource &);
		void getUpdatePacket(BlockSource &);
		void load(CompoundTag const&);
		void load(CompoundTag const&);
		void onUpdatePacket(CompoundTag &);
		void onUpdatePacket(CompoundTag &);
		void registerPiston(BlockSource &,BlockPos const&);
		void registerPiston(BlockSource &,BlockPos const&);
		void save(CompoundTag &);
		void save(CompoundTag &);
		void setBlock(FullBlock &);
		void setBlock(FullBlock &);
		void setBlockEntity(std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>);
		void setBlockEntity(std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>);
		void tick(BlockSource &);
		void tick(BlockSource &);
		void updateDrawPos(BlockSource &,float);
		void updateDrawPos(BlockSource &,float);
		void ~MovingBlockEntity();
		void ~MovingBlockEntity();
		void ~MovingBlockEntity();
		void ~MovingBlockEntity();
};
