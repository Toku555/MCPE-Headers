#pragma once
namespace j{
	class BlockSource{
		public:
		void blockEvent(BlockPos const&,int,int);
		void getBlockEntity(BlockPos const&);
		void getDimension(void);
		void getDimensionId(void);
		void getGrassColor(BlockPos const&);
		void isUnobstructedByEntities(AABB const&,Entity *);
		void removeBlock(BlockPos const&);
		void setExtraData(BlockPos const&,ushort);
		void shouldFreeze(BlockPos const&,bool);
	}
};
