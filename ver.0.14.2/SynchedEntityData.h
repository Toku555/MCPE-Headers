#pragma once
class SynchedEntityData{
	public:
		SynchedEntityData(SynchedEntityData&&);
		SynchedEntityData(void);
		void _createDataItem(DataItemType,uchar,IDataInput &);
		void _find(uchar);
		void _get(uchar);
		void _resizeToContain(uchar);
		void _writeDataItem(IDataOutput &,DataItem const&);
		void assignValues(std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>> *,Entity *);
		void define<BlockPos>(uchar,BlockPos const&);
		void define<float>(uchar,float const&);
		void define<int>(uchar,int const&);
		void define<short>(uchar,short const&);
		void define<signed char>(uchar,signed char const&);
		void string>(uchar,std::string const&);
		void getFloat(uchar);
		void getInt(uchar);
		void getInt64(uchar);
		void getInt8(uchar);
		void getItemInstance(uchar);
		void getPos(uchar);
		void getShort(uchar);
		void getString(uchar);
		void operator=(SynchedEntityData&&);
		void pack(std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>> const&,IDataOutput &);
		void packAll(void);
		void packDirty(void);
		void unpack(IDataInput &);
		void ~SynchedEntityData();
};
