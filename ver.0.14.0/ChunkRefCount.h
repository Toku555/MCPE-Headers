#pragma once
class ChunkRefCount{
	public:
		ChunkRefCount(ChunkRefCount&&);
		ChunkRefCount(LevelChunk &,int);
		ChunkRefCount(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&,int);
		ChunkRefCount(void);
		void get(void);
		void getChunk(void);
		void getChunk(void);
		void getChunkPtr(void);
		void getRefCount(void);
		void grab(void);
		void operator->(void);
		void operator=(ChunkRefCount&&);
		void release(void);
		void ~ChunkRefCount();
};
