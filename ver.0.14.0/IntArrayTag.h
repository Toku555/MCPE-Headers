#pragma once
class IntArrayTag{
	public:
		IntArrayTag(std::string const&);
		IntArrayTag(std::string const&,TagMemoryChunk);
		void copy(void);
		void equals(Tag const&);
		void getId(void);
		void load(IDataInput &);
		void toString(void);
		void write(IDataOutput &);
		void ~IntArrayTag();
		void ~IntArrayTag();
};
