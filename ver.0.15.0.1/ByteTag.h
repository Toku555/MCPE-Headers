#pragma once
class ByteTag{
	public:
		ByteTag(std::string const&);
		ByteTag(std::string const&);
		ByteTag(std::string const&,uchar);
		ByteTag(std::string const&,uchar);
		void copy(void);
		void copy(void);
		void equals(Tag const&);
		void equals(Tag const&);
		void getId(void);
		void getId(void);
		void load(IDataInput &);
		void load(IDataInput &);
		void toString(void);
		void toString(void);
		void write(IDataOutput &);
		void write(IDataOutput &);
		void ~ByteTag();
		void ~ByteTag();
};
