#pragma once
class ContainerFactory{
	public:
		void createContainerManagerModel<AnvilContainerManagerModel,BlockPos &>(Player &,BlockPos &);
		void createContainerManagerModel<BrewingStandContainerManagerModel,BlockPos &>(Player &,BlockPos &);
		void createContainerManagerModel<ChestContainerManagerModel,BlockPos &>(Player &,BlockPos &);
		void createContainerManagerModel<ChestContainerManagerModel,EntityUniqueID const&>(Player &,EntityUniqueID const&);
		void createContainerManagerModel<CraftingContainerManagerModel,bool &,BlockPos &>(Player &,bool &,BlockPos &);
		void createContainerManagerModel<DispenserContainerManagerModel,BlockPos &>(Player &,BlockPos &);
		void createContainerManagerModel<DropperContainerManagerModel,BlockPos &>(Player &,BlockPos &);
		void createContainerManagerModel<EnchantingContainerManagerModel,BlockPos const&>(Player &,BlockPos const&);
		void createContainerManagerModel<FurnaceContainerManagerModel,BlockPos &>(Player &,BlockPos &);
		void createContainerManagerModel<HopperContainerManagerModel,BlockPos &>(Player &,BlockPos &);
		void createContainerManagerModel<HopperContainerManagerModel,EntityUniqueID const&>(Player &,EntityUniqueID const&);
		void createContainerManagerModel<PocketDispenserContainerManagerModel,BlockPos &>(Player &,BlockPos &);
		void createContainerManagerModel<PocketDropperContainerManagerModel,BlockPos &>(Player &,BlockPos &);
		void createContainerManagerModel<PocketHopperContainerManagerModel,BlockPos &>(Player &,BlockPos &);
		void createContainerManagerModel<PocketHopperContainerManagerModel,EntityUniqueID const&>(Player &,EntityUniqueID const&);
		void createContainerMenu<AnvilMenu,BlockPos const&>(Player &,BlockPos const&);
		void createContainerMenu<BrewingStandMenu,BlockPos const&>(Player &,BlockPos const&);
		void createContainerMenu<ChestMenu,BlockPos const&>(Player &,BlockPos const&);
		void createContainerMenu<ChestMenu,EntityUniqueID const&>(Player &,EntityUniqueID const&);
		void createContainerMenu<EnchantingMenu,BlockPos const&>(Player &,BlockPos const&);
		void createContainerMenu<FurnaceMenu,BlockPos const&>(Player &,BlockPos const&);
};
