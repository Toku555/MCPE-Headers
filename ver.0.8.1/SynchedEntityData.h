#pragma once
class SynchedEntityData{
	public:
		SynchedEntityData(void);
		void assignValues(std::vector<DataItem *,std::allocator<DataItem *>> *);
		void clearFlag<char>(int,int);
		void define<int>(int,int const&);
		void getByte(int);
		void getFloat(int);
		void getInt(int);
		void getItemInstance(int);
		void getPos(int);
		void getShort(int);
		void getString(int);
		void markDirty(int);
		void pack(std::vector<DataItem *,std::allocator<DataItem *>> *,IDataOutput *);
		void packAll(IDataOutput *);
		void packDirty(void);
		void set<Pos>(int,Pos const&);
		void set<int>(int,int const&);
		void set<signed char>(int,signed char const&);
		void setFlag<char>(int,int);
		void unpack(IDataInput *);
		void writeDataItem(IDataOutput *,DataItem const*);
		void ~SynchedEntityData();
};
