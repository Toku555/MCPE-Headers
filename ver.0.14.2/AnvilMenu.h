#pragma once
class AnvilMenu{
	public:
		AnvilMenu(Player &,BlockPos const&);
		void _createResult(void);
		void clearSlot(int);
		void getAnvilHasChanged(void);
		void getCost(void);
		void getItems(void);
		void getLastRecipe(void);
		void getRepairItemCount(void);
		void getResultName(void);
		void getSlot(int);
		void isTooExpensive(void);
		void mayPickup(void);
		void removeSlot(int,int);
		void setData(int,int);
		void setResultName(std::string const&);
		void setSlot(int,ItemInstance &);
		void ~AnvilMenu();
		void ~AnvilMenu();
};
