#pragma once
class ListTag{
	public:
		ListTag(std::string const&);
		ListTag(void);
		void add(std::unique_ptr<Tag,std::default_delete<Tag>>);
		void copy(void);
		void deleteChildren(void);
		void equals(Tag const&);
		void get(int);
		void getCompound(uint);
		void getFloat(int);
		void getId(void);
		void getInt(int);
		void load(IDataInput &);
		void print(std::string const&,PrintStream &);
		void size(void);
		void toString(void);
		void write(IDataOutput &);
		void ~ListTag();
		void ~ListTag();
};
