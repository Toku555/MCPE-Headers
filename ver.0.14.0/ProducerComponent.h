#pragma once
class ProducerComponent{
	public:
		ProducerComponent(void);
		void allowAttachments(bool);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void canStopPower(void);
		void evaluate(CircuitSystem &,BlockPos const&);
		void getBaseType(void);
		void getInstanceType(void);
		void setStopPower(bool);
		void setStrength(int);
		void ~ProducerComponent();
		void ~ProducerComponent();
};
