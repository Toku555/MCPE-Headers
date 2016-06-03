#pragma once
class PulseCapacitor{
	public:
		PulseCapacitor(void);
		PulseCapacitor(void);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void canConsumerPower(void);
		void canConsumerPower(void);
		void consumePowerAnyDirection(void);
		void consumePowerAnyDirection(void);
		void evaluate(CircuitSystem &,BlockPos const&);
		void evaluate(CircuitSystem &,BlockPos const&);
		void getInstanceType(void);
		void getInstanceType(void);
		void getPoweroutDirection(void);
		void getPoweroutDirection(void);
		void getStrength(void);
		void getStrength(void);
		void setStrength(int);
		void setStrength(int);
		void ~PulseCapacitor();
		void ~PulseCapacitor();
};
