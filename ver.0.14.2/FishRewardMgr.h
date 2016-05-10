#pragma once
class FishRewardMgr{
	public:
		void DeletePtr(void);
		FishRewardMgr(void);
		void GetPtr(void);
		void _init(void);
		void getFishList(void);
		void getTrashList(void);
		void getTreasureList(void);
		void ~FishRewardMgr();
};
