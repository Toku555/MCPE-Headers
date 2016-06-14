#pragma once
namespace j{
	class CircuitSceneGraph{
		public:
		void getFromPendingAdd(BlockPos const&,ulong long);
		void invalidatePos(BlockPos const&);
		void remove(BlockPos const&,BaseCircuitComponent *);
	}
};
