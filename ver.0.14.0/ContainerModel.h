#pragma once
class ContainerModel{
	public:
		ContainerModel(ContainerEnumName,int,int);
		void _init(void);
		void _notifyPlayer(int);
		void _onItemChanged(int);
		void containerChanged(int);
		void getContainerEnumName(void);
		void getContainerOffset(void);
		void getContainerSize(void);
		void getContainerStringName(void);
		void getItem(int);
		void getItemCount(int);
		void getItems(void);
		void isValid(void);
		void networkUpdateItem(int,ItemInstance const*);
		void function<void ();
		void setItem(int,ItemInstance const*);
		void ~ContainerModel();
		void ~ContainerModel();
};
