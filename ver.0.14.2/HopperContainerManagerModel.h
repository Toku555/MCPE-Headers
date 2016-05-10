#pragma once
class HopperContainerManagerModel{
	public:
		HopperContainerManagerModel(ContainerID,Player &,BlockPos const&);
		HopperContainerManagerModel(ContainerID,Player &,EntityUniqueID const&);
		void _getBlockEntity(void);
		void init(void);
		void ~HopperContainerManagerModel();
		void ~HopperContainerManagerModel();
};
