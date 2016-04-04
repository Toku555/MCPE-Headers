#pragma once
class CircuitSceneGraph{
	public:
		CircuitSceneGraph(void);
		void PendingEntry(BlockPos const&,BaseCircuitComponent *);
		void PendingEntry(BlockPos const&,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>);
		void PendingEntry(CircuitSceneGraph::PendingEntry&&);
		void operator=(CircuitSceneGraph::PendingEntry&&);
		void ~PendingEntry();
		void add(BlockPos const&,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>);
		void addIfPoweredBlockAt(BlockSource &,BlockPos const&);
		void findRelationships(BlockPos const&,BaseCircuitComponent *,BlockSource *);
		void getBaseComponent(BlockPos const&);
		void getComponent(BlockPos const&,ulong long);
		void getFromPendingAdd(BlockPos const&);
		void getFromPendingAdd(BlockPos const&,ulong long);
		void invalidatePos(BlockPos const&);
		void isPendingAdd(BlockPos const&);
		void processPendingAdds(void);
		void processPendingRemoves(void);
		void processPendingUpdates(BlockSource *);
		void remove(BlockPos const&,BaseCircuitComponent *);
		void removeComponent(BlockPos const&);
		void removeStaleRelationships(void);
		void scheduleRelationshipUpdate(BlockPos const&,BaseCircuitComponent *);
		void setPendingAddAsNewlyLoaded(void);
		void update(BlockSource *);
		void ~CircuitSceneGraph();
};
