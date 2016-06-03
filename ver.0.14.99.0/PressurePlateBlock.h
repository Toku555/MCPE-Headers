#pragma once
class PressurePlateBlock{
	public:
		PressurePlateBlock(std::string const&,int,Material const&,PressurePlateBlock::Sensitivity);
		PressurePlateBlock(std::string const&,int,Material const&,PressurePlateBlock::Sensitivity);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getDataForSignal(int);
		void getDataForSignal(int);
		void getSignalForData(int);
		void getSignalForData(int);
		void getSignalStrength(BlockSource &,BlockPos const&);
		void getSignalStrength(BlockSource &,BlockPos const&);
		void ~PressurePlateBlock();
		void ~PressurePlateBlock();
};
