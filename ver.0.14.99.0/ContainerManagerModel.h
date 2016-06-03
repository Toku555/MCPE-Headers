#pragma once
class ContainerManagerModel{
	public:
		ContainerManagerModel(ContainerID,Player &);
		ContainerManagerModel(ContainerID,Player &);
		void _addContainer(std::shared_ptr<ContainerModel>);
		void _addContainer(std::shared_ptr<ContainerModel>);
		void debitPlayerXP(int);
		void debitPlayerXP(int);
		void getContainerId(void);
		void getContainerId(void);
		void getContainerType(void);
		void getContainerType(void);
		void getContainers(void);
		void getContainers(void);
		void getPlayer(void);
		void getPlayer(void);
		void getPlayerXP(void);
		void getPlayerXP(void);
		void grantExperience(int);
		void grantExperience(int);
		void init(void);
		void init(void);
		void isClientSide(void);
		void isCreativeMode(void);
		void isCreativeMode(void);
		void isValid(float);
		void isValid(float);
		void setContainerId(ContainerID);
		void setContainerId(ContainerID);
		void setContainerType(ContainerType);
		void setContainerType(ContainerType);
		void ~ContainerManagerModel();
		void ~ContainerManagerModel();
		void ~ContainerManagerModel();
		void ~ContainerManagerModel();
};