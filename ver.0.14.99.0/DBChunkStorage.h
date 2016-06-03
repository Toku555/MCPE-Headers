#pragma once
class DBChunkStorage{
	public:
		DBChunkStorage(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>,DBStorage *);
		DBChunkStorage(std::unique_ptr<ChunkSource,std::default_delete<ChunkSource>>,DBStorage *);
		void _getBuffer(void);
		void _serializeChunk(LevelChunk const&,leveldb::WriteBatch &);
		void _serializeChunk(LevelChunk const&,leveldb::WriteBatch &);
		void _writeBatch(void);
		void _writeBatch(void);
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void acquireDiscarded(std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>> &&);
		void compact(void);
		void compact(void);
		void getStats(void);
		void getStats(void);
		void hintDiscardBatchBegin(void);
		void hintDiscardBatchBegin(void);
		void hintDiscardBatchEnd(void);
		void hintDiscardBatchEnd(void);
		void loadChunk(LevelChunk &);
		void loadChunk(LevelChunk &);
		void onLowMemory(void);
		void onLowMemory(void);
		void postProcess(ChunkViewSource &);
		void postProcess(ChunkViewSource &);
		void saveLiveChunk(LevelChunk &);
		void saveLiveChunk(LevelChunk &);
		void waitDiscardFinished(void);
		void waitDiscardFinished(void);
		void ~DBChunkStorage();
		void ~DBChunkStorage();
		void ~DBChunkStorage();
		void ~DBChunkStorage();
};
