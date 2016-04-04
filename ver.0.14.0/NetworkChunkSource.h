#pragma once
class NetworkChunkSource{
	public:
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void getExistingChunk(ChunkPos const&);
		void getIncomingChunk(ChunkPos const&);
		void getStoredChunks(void);
		void getStoredChunks(void);
		void onLowMemory(void);
		void releaseChunk(LevelChunk &);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~NetworkChunkSource();
		void ~NetworkChunkSource();
};
