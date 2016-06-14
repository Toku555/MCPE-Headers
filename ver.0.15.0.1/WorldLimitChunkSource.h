#pragma once
class WorldLimitChunkSource{
	public:
		WorldLimitChunkSource(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>,BlockPos const&);
		WorldLimitChunkSource(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>,BlockPos const&);
		void getExistingChunk(ChunkPos const&);
		void getExistingChunk(ChunkPos const&);
		void releaseChunk(LevelChunk &);
		void releaseChunk(LevelChunk &);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~WorldLimitChunkSource();
		void ~WorldLimitChunkSource();
		void ~WorldLimitChunkSource();
		void ~WorldLimitChunkSource();
};