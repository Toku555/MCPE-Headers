#pragma once
namespace j{
	class ContainerModel{
		public:
		void _notifyPlayer(int);
		void getItem(int);
		void networkUpdateItem(int,ItemInstance const*);
		void setItem(int,ItemInstance const*);
		void ~ContainerModel();
	}
};
