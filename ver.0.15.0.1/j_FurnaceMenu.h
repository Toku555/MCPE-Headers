#pragma once
namespace j{
	class FurnaceMenu{
		public:
		void broadcastChanges(void);
		void getSlot(int);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
	}
};
