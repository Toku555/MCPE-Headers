#pragma once
class RedstoneTorchCapacitor{
	public:
		void FindStrongestStrength(BlockPos const&,CircuitSystem &,bool &);
		RedstoneTorchCapacitor(void);
		void addSource(CircuitSceneGraph &,CircuitTrackingInfo const&,int &,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void cacheValues(CircuitSystem &,BlockPos const&);
		void evaluate(CircuitSystem &,BlockPos const&);
		void getInstanceType(void);
		void getPoweroutDirection(void);
		void getStrength(void);
		void isHalfPulse(void);
		void removeSource(BlockPos const&,BaseCircuitComponent const*);
		void resetSelfPowered(void);
		void setOn(bool,bool);
		void ~RedstoneTorchCapacitor();
		void ~RedstoneTorchCapacitor();
};
