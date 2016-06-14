#pragma once
namespace j{
	class FillingContainer{
		public:
		void _getEmptySlotsCount(int,int);
		void _linkEmptySlot(int);
		void _release(int);
		void dropAll(int,int,bool);
		void getLinked(int);
		void getLinkedSlotsCount(void);
		void hasResource(int);
		void linkSlot(int,int);
		void linkSlot(int,int);
		void unlinkSlot(int);
		void ~FillingContainer();
	}
};
