#pragma once
class LevelContainerManagerModel{
	public:
		LevelContainerManagerModel(ContainerID,Player &,BlockPos const&,BlockEntityType);
		LevelContainerManagerModel(ContainerID,Player &,BlockPos const&,BlockEntityType);
		LevelContainerManagerModel(ContainerID,Player &,EntityUniqueID);
		LevelContainerManagerModel(ContainerID,Player &,EntityUniqueID);
		void _onBlockSlotChanged(int);
		void _onBlockSlotChanged(int);
		void broadcastChanges(void);
		void broadcastChanges(void);
		void getBlockEntity(void);
		void getBlockEntity(void);
		void getBlockPos(void);
		void getBlockPos(void);
		void getEntityUniqueID(void);
		void getEntityUniqueID(void);
		void getItems(void);
		void getItems(void);
		void getSlot(int);
		void getSlot(int);
		void init(void);
		void init(void);
		void isValid(float);
		void isValid(float);
		void setBlockPos(BlockPos const&);
		void setData(int,int);
		void setData(int,int);
		void setEntityUniqueID(EntityUniqueID);
		void setSlot(int,ItemInstance &);
		void setSlot(int,ItemInstance &);
		void ~LevelContainerManagerModel();
		void ~LevelContainerManagerModel();
		void ~LevelContainerManagerModel();
		void ~LevelContainerManagerModel();
};
