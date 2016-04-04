#pragma once
class PressurePlateBlock{
	public:
		PressurePlateBlock(std::string const&,int,std::string const&,Material const&,PressurePlateBlock::Sensitivity);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getDataForSignal(int);
		void getSignalForData(int);
		void getSignalStrength(BlockSource &,BlockPos const&);
		void ~PressurePlateBlock();
		void ~PressurePlateBlock();
};
