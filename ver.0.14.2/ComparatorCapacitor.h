#pragma once
class ComparatorCapacitor{
	public:
		ComparatorCapacitor(void);
		void GetRearStrength(void);
		void GetSideStrength(void);
		void addSource(CircuitSceneGraph &,CircuitTrackingInfo const&,int &,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void cacheValues(CircuitSystem &,BlockPos const&);
		void canConsumerPower(void);
		void clearAnalogStrength(signed char);
		void consumePowerAnyDirection(void);
		void evaluate(CircuitSystem &,BlockPos const&);
		void getInstanceType(void);
		void getOldStrength(void);
		void getPoweroutDirection(void);
		void isSubtractMode(void);
		void removeSource(BlockPos const&,BaseCircuitComponent const*);
		void setAnalogStrength(int,signed char);
		void setMode(ComparatorCapacitor::Mode);
		void updateDependencies(CircuitSceneGraph &,BlockPos const&);
		void ~ComparatorCapacitor();
		void ~ComparatorCapacitor();
};
