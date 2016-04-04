#pragma once
class ChunkBlockPos{
	public:
		ChunkBlockPos(BlockPos const&);
		void operator+(BlockPos const&);
};
