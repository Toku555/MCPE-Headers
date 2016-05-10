#pragma once
class ByteArrayTag{
	public:
		ByteArrayTag(std::string const&);
		ByteArrayTag(std::string const&,TagMemoryChunk);
		void copy(void);
		void equals(Tag const&);
		void getId(void);
		void load(IDataInput &);
		void toString(void);
		void write(IDataOutput &);
		void ~ByteArrayTag();
		void ~ByteArrayTag();
};
