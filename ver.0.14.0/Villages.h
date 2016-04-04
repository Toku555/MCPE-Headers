#pragma once
class Villages{
	public:
		void _fetchClosestVillage(BlockPos const&,int,bool);
		void addDoorInfoWithinRadius(BlockPos &);
		void assignDoorOrCreateVillage(std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>> &&);
		void cluster(void);
		void createDoorInfo(BlockPos const&);
		void createDoorInfo(int,int,int);
		void fetchClosestVillage(BlockPos const&,int);
		void fetchClosestVillage(Vec3 const&,int);
		void fetchClosestVillage(int,int,int,int);
		void fetchClosestVillage2D(BlockPos const&,int);
		void fetchVillagersVillage(EntityUniqueID const&);
		void findBestDoorInfo(BlockPos const&);
		void findBestDoorInfo(int,int,int);
		void findClosestDoorInfo(BlockPos const&);
		void findClosestDoorInfo(int,int,int);
		void getDoorInfo(BlockPos const&);
		void getDoorInfo(int,int,int);
		void hasDoorQuery(BlockPos const&);
		void hasDoorQuery(int,int,int);
		void insertDoorInfo(std::unique_ptr<DoorInfo,std::default_delete<DoorInfo>> &&);
		void isDoor(BlockPos const&);
		void isDoor(int,int,int);
		void load(CompoundTag const&);
		void processNextDoorQuery(void);
		void processNextVillageQuery(void);
		void removeDoorInfo(DoorInfo *);
		void removeVillages(void);
		void save(CompoundTag &);
		void setLevel(Level *);
		void submitFindDoorQuery(BlockPos const&);
		void submitFindVillageQuery(BlockPos const&);
		void tick(void);
		void ~Villages();
		void ~Villages();
};
