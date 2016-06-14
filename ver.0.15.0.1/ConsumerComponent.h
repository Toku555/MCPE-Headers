#pragma once
class ConsumerComponent{
	public:
		ConsumerComponent(void);
		ConsumerComponent(void);
		void addSource(CircuitSceneGraph &,CircuitTrackingInfo const&,int &,bool &);
		void addSource(CircuitSceneGraph &,CircuitTrackingInfo const&,int &,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void canConsumerPower(void);
		void canConsumerPower(void);
		void evaluate(CircuitSystem &,BlockPos const&);
		void evaluate(CircuitSystem &,BlockPos const&);
		void getBaseType(void);
		void getBaseType(void);
		void getInstanceType(void);
		void getInstanceType(void);
		void isSecondaryPowered(void);
		void isSecondaryPowered(void);
		void ~ConsumerComponent();
		void ~ConsumerComponent();
};
