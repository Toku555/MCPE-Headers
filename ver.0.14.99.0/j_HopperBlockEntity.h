#pragma once
namespace j{
	class HopperBlockEntity{
		public:
		void checkForSmeltEverythingAchievement(BlockSource &);
		void removeItem(int,int);
		void ~HopperBlockEntity();
	}
};
