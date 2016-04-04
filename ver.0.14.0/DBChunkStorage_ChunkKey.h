#pragma once
namespace DBChunkStorage{
	class ChunkKey{
		public:
		void ChunkKey(ChunkPos const&,int);
		void ChunkKey(LevelChunk const&);
		void asSlice(void);
		DBChunkStorage(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>,DBStorage *);
		void _getBuffer(void);
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void getStats(void);
		void hintDiscardBatchBegin(void);
		void hintDiscardBatchEnd(void);
		void loadChunk(LevelChunk &);
		void onLowMemory(void);
		void postProcess(ChunkViewSource &);
		void waitDiscardFinished(void);
		void ~DBChunkStorage();
		void ~DBChunkStorage();
	}
};
