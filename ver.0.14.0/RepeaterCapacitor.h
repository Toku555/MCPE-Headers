#pragma once
class RepeaterCapacitor{
	public:
		RepeaterCapacitor(void);
		void addSource(CircuitSceneGraph &,CircuitTrackingInfo const&,int &,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void alternatePulse(void);
		void cacheValues(CircuitSystem &,BlockPos const&);
		void canConsumerPower(void);
		void checkLock(CircuitSystem &,BlockPos const&);
		void consumePowerAnyDirection(void);
		void delayPulse(RepeaterCapacitor::States);
		void evaluate(CircuitSystem &,BlockPos const&);
		void extendPulse(void);
		void getInstanceType(void);
		void getPoweroutDirection(void);
		void getStrength(void);
		void removeSource(BlockPos const&,BaseCircuitComponent const*);
		void setDelay(int);
		void setLocked(bool);
		void setStrength(int);
		void updateDependencies(CircuitSceneGraph &,BlockPos const&);
		void ~RepeaterCapacitor();
		void ~RepeaterCapacitor();
};
