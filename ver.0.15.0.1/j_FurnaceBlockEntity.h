#pragma once
namespace j{
	class FurnaceBlockEntity{
		public:
		void checkForSmeltEverythingAchievement(BlockSource &);
		void getBurnProgress(int);
		void getLastFuelSource(void);
		void getLitProgress(int);
		void removeItem(int,int);
		void setItem(int,ItemInstance *);
		void ~FurnaceBlockEntity();
	}
};
