#pragma once
class BlockPos{
	public:
		BlockPos(ChunkPos const&,int);
		BlockPos(ChunkPos const&,int);
		BlockPos(Vec3 const&);
		BlockPos(Vec3 const&);
		BlockPos(float,float,float);
		BlockPos(float,float,float);
		void neighbor(signed char);
		void neighbor(signed char);
		void relative(signed char,int);
		void relative(signed char,int);
		void toString(void);
		void toString(void);
};
