#pragma once
class CircuitSystem{
	public:
		CircuitSystem(void);
		void cacheValues(void);
		void checkLocks(void);
		void create<BaseRailTransporter>(BlockPos const&,BlockSource *,signed char);
		void create<ConsumerComponent>(BlockPos const&,BlockSource *,signed char);
		void create<ProducerComponent>(BlockPos const&,BlockSource *,signed char);
		void create<RedstoneTorchCapacitor>(BlockPos const&,BlockSource *,signed char);
		void createComponent(BlockPos const&,signed char,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>);
		void evaluate(void);
		void evaluateComponents(bool);
		void getChunkPos(BlockSource *,BlockPos const&);
		void getDirection(BlockPos const&);
		void getStrength(BlockPos const&);
		void hasDirectPower(BlockPos const&);
		void invalidatePos(BlockPos const&);
		void isAvailableAt(BlockPos const&);
		void removeComponents(BlockPos const&);
		void setStrength(BlockPos const&,int);
		void updateBlocks(BlockSource &,BlockPos const&);
		void updateDependencies(BlockSource *);
		void updateIndividualBlock(BaseCircuitComponent *,BlockPos const&,BlockPos const&,BlockSource &);
};
