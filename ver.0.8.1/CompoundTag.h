#pragma once
class CompoundTag{
	public:
		CompoundTag(CompoundTag const&);
		CompoundTag(std::string const&);
		CompoundTag(void);
		void contains(std::string const&);
		void contains(std::string const&,int);
		void copy(void);
		void deleteChildren(void);
		void equals(Tag const&);
		void get(std::string const&);
		void getByte(std::string const&);
		void getCompound(std::string const&);
		void getId(void);
		void getInt(std::string const&);
		void getList(std::string const&);
		void getLong(std::string const&);
		void getShort(std::string const&);
		void getString(std::string const&);
		void load(IDataInput *);
		void print(std::string const&,PrintStream &);
		void put(std::string const&,Tag *);
		void putBoolean(std::string const&,bool);
		void putByte(std::string const&,char);
		void putInt(std::string const&,int);
		void putLong(std::string const&,long);
		void putShort(std::string const&,short);
		void putString(std::string const&,std::string const&);
		void toString(void);
		void write(IDataOutput *);
		void ~CompoundTag();
		void ~CompoundTag();
};
