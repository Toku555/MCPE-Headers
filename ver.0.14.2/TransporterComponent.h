#pragma once
class TransporterComponent{
	public:
		TransporterComponent(void);
		void addSource(CircuitSceneGraph &,CircuitTrackingInfo const&,int &,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void cacheValues(CircuitSystem &,BlockPos const&);
		void canConsumerPower(void);
		void evaluate(CircuitSystem &,BlockPos const&);
		void getBaseType(void);
		void getInstanceType(void);
		void ~TransporterComponent();
		void ~TransporterComponent();
};
