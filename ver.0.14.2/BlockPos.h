#pragma once
class BlockPos{
	public:
		BlockPos(ChunkPos const&,int);
		BlockPos(Vec3 const&);
		BlockPos(float,float,float);
		void neighbor(signed char);
		void relative(signed char,int);
		void toString(void);
};
