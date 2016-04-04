#pragma once
class ChunkViewSource{
	public:
		ChunkViewSource(ChunkSource &,ChunkSource::LoadMode);
		void clear(void);
		void getArea(void);
		void getExistingChunk(ChunkPos const&);
		void move(BlockPos const&,int);
		void ~ChunkViewSource();
		void ~ChunkViewSource();
};
