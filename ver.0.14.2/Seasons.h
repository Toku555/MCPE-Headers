#pragma once
class Seasons{
	public:
		Seasons(Dimension &);
		void postProcess(LevelChunk &,BlockSource &,ChunkPos const&);
		void tick(void);
		void ~Seasons();
};
