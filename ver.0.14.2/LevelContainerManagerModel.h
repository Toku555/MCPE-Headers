#pragma once
class LevelContainerManagerModel{
	public:
		LevelContainerManagerModel(ContainerID,Player &,BlockPos const&,BlockEntityType);
		LevelContainerManagerModel(ContainerID,Player &,EntityUniqueID);
		void _onBlockSlotChanged(int);
		void broadcastChanges(void);
		void getBlockEntity(void);
		void getBlockPos(void);
		void getEntityUniqueID(void);
		void getItems(void);
		void getSlot(int);
		void isValid(float);
		void setBlockPos(BlockPos const&);
		void setData(int,int);
		void setEntityUniqueID(EntityUniqueID);
		void setSlot(int,ItemInstance &);
		void ~LevelContainerManagerModel();
		void ~LevelContainerManagerModel();
};
