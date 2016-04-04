#pragma once
class ContainerManagerModel{
	public:
		void _addContainer(std::shared_ptr<ContainerModel>);
		void debitPlayerXP(int);
		void getContainerId(void);
		void getContainerType(void);
		void getContainers(void);
		void getPlayer(void);
		void getPlayerXP(void);
		void grantExperience(int);
		void init(void);
		void isClientSide(void);
		void isCreativeMode(void);
		void isValid(void);
		void setContainerId(ContainerID);
		void setContainerType(ContainerType);
		void ~ContainerManagerModel();
		void ~ContainerManagerModel();
};
