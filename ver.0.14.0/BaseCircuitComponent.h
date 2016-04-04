#pragma once
class BaseCircuitComponent{
	public:
		BaseCircuitComponent(void);
		void addSource(CircuitSceneGraph &,CircuitTrackingInfo const&,int &,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void allowIndirect(void);
		void cacheValues(CircuitSystem &,BlockPos const&);
		void calculateValue(CircuitSystem &);
		void canConsumerPower(void);
		void canStopPower(void);
		void checkLock(CircuitSystem &,BlockPos const&);
		void consumePowerAnyDirection(void);
		void evaluate(CircuitSystem &,BlockPos const&);
		void getBaseType(void);
		void getDirection(void);
		void getInstanceType(void);
		void getStrength(void);
		void hasChildrenSource(void);
		void hasDirectPower(void);
		void hasSource(BaseCircuitComponent&);
		void isHalfPulse(void);
		void isSecondaryPowered(void);
		void removeSource(BlockPos const&,BaseCircuitComponent const*);
		void setDirection(signed char);
		void setStopPower(bool);
		void setStrength(int);
		void trackPowerSource(CircuitTrackingInfo const&,int,bool,int);
		void trackPowerSourceDuplicates(CircuitTrackingInfo const&,int,bool);
		void updateDependencies(CircuitSceneGraph &,BlockPos const&);
		void ~BaseCircuitComponent();
		void ~BaseCircuitComponent();
};
