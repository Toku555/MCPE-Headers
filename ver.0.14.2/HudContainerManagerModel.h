#pragma once
class HudContainerManagerModel{
	public:
		HudContainerManagerModel(ContainerID,Player &);
		void broadcastChanges(void);
		void getItems(void);
		void getSlot(int);
		void init(void);
		void refreshHotbar(void);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void ~HudContainerManagerModel();
		void ~HudContainerManagerModel();
};
