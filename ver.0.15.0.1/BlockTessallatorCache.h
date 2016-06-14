#pragma once
class BlockTessallatorCache{
	public:
		void _getIndexFromPositionInArray(BlockPos const&);
		void _getLightEmission(Block &);
		void _getPosInArray(BlockPos const&);
		void getBlock(BlockPos const&);
		void getBlock(BlockPos const&);
		void getData(BlockPos const&);
		void getData(BlockPos const&);
		void getLightColor(BlockPos const&);
		void getLightColor(BlockPos const&);
		void reset(BlockSource &,BlockPos const&);
		void reset(BlockSource &,BlockPos const&);
		void setBlockAtPosition(Block &,BlockPos &);
};
