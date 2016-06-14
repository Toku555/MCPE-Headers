#pragma once
namespace j{
	class SynchedEntityData{
		public:
		void assignValues(std::vector<std::unique_ptr<DataItem,std::default_delete<DataItem>>,std::allocator<std::unique_ptr<DataItem,std::default_delete<DataItem>>>> *,Entity *);
		void getFloat(uchar);
		void getInt(uchar);
		void getShort(uchar);
		void getString(uchar);
	}
};
