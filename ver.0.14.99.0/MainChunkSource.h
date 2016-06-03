#pragma once
class MainChunkSource{
	public:
		MainChunkSource(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>);
		MainChunkSource(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>);
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void getExistingChunk(ChunkPos const&);
		void getExistingChunk(ChunkPos const&);
		void getStoredChunks(void);
		void getStoredChunks(void);
		void getStoredChunks(void);
		void getStoredChunks(void);
		void releaseChunk(LevelChunk &);
		void releaseChunk(LevelChunk &);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~MainChunkSource();
		void ~MainChunkSource();
		void ~MainChunkSource();
		void ~MainChunkSource();
};
