#pragma once
namespace j{
	class leveldb{
		public:
		void AllocateFallback(uint);
		void ParseNextKey(void);
		void ~Comparator();
		void BackgroundCall(void);
		void CompactMemTable(void);
		void EncodeFixed32(char *,uint);
		void EncodeFixed64(char *,ulong long);
		void ~Iterator();
		void ~Logger();
		void NewEmptyIterator(void);
		void Iterator * (*);
		void PutFixed32(std::string *,uint);
		void PutFixed64(std::string *,ulong long);
		void PutLengthPrefixedSlice(std::string *,leveldb::Slice const&);
		void PutVarint64(std::string *,ulong long);
		void SignalAll(void);
		void Unlock(void);
	}
};
