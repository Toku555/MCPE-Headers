#pragma once
class ByteTag{
	public:
		ByteTag(std::string const&);
		ByteTag(std::string const&,char);
		void copy(void);
		void equals(Tag const&);
		void getId(void);
		void load(IDataInput &);
		void toString(void);
		void write(IDataOutput &);
		void ~ByteTag();
		void ~ByteTag();
};
