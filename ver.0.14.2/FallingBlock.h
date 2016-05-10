#pragma once
class FallingBlock{
	public:
		FallingBlock(BlockSource &);
		FallingBlock(BlockSource &,Vec3 const&,FullBlock,bool);
		void _init(void);
		void _isHeavyBlock(FullBlock const&);
		void _waitRemoval(void);
		void addAdditionalSaveData(CompoundTag &);
		void causeFallDamage(float);
		void getBlock(void);
		void getEntityTypeId(void);
		void getShadowHeightOffs(void);
		void getShadowRadius(void);
		void isPickable(void);
		void readAdditionalSaveData(CompoundTag const&);
		void ~FallingBlock();
		void ~FallingBlock();
};
