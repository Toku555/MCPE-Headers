#pragma once
class AnvilContainerManagerModel{
	public:
		AnvilContainerManagerModel(ContainerID,Player &,BlockPos const&);
		void applyDamageToAnvilBlock(void);
		void broadcastChanges(void);
		void getItems(void);
		void getSlot(int);
		void init(void);
		void isAnvilValid(float);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void ~AnvilContainerManagerModel();
		void ~AnvilContainerManagerModel();
};
