#pragma once
class VisibilityExtimator{
	public:
		VisibilityExtimator(void);
		void _at(ChunkBlockPos const&);
		void _at(ChunkBlockPos const&,ByteMask &);
		void _atWorld(BlockPos const&);
		void _floodFill(ChunkBlockPos const&);
		void _visit(ChunkBlockPos const&,ByteMask &);
		void finish(void);
		void isAllEmpty(void);
		void isAllOpaque(void);
		void setBlock(BlockPos const&,Block *);
		void start(RenderChunk &);
};
