#pragma once
class PerformanceTestChunkSource{
	public:
		void create(int,int);
		void gatherStats(void);
		void getChunk(int,int);
		void hasChunk(int,int);
		void postProcess(ChunkSource *,int,int);
		void shouldSave(void);
		void tick(void);
		void ~PerformanceTestChunkSource();
		void ~PerformanceTestChunkSource();
};
