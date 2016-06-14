#pragma once
class EmptyChunkSource{
	public:
		EmptyChunkSource(Level *,Dimension *);
		EmptyChunkSource(Level *,Dimension *);
		void loadChunk(LevelChunk &);
		void loadChunk(LevelChunk &);
		void postProcess(ChunkViewSource &);
		void postProcess(ChunkViewSource &);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~EmptyChunkSource();
		void ~EmptyChunkSource();
};
