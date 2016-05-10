#pragma once
class MainChunkSource{
	public:
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void getExistingChunk(ChunkPos const&);
		void getStoredChunks(void);
		void getStoredChunks(void);
		void releaseChunk(LevelChunk &);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~MainChunkSource();
		void ~MainChunkSource();
};
