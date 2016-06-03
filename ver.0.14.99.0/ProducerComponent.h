#pragma once
class ProducerComponent{
	public:
		ProducerComponent(void);
		ProducerComponent(void);
		ProducerComponent(void);
		void allowAttachments(bool);
		void allowAttachments(bool);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void canStopPower(void);
		void canStopPower(void);
		void evaluate(CircuitSystem &,BlockPos const&);
		void evaluate(CircuitSystem &,BlockPos const&);
		void getBaseType(void);
		void getBaseType(void);
		void getInstanceType(void);
		void getInstanceType(void);
		void setStopPower(bool);
		void setStopPower(bool);
		void setStrength(int);
		void setStrength(int);
		void ~ProducerComponent();
		void ~ProducerComponent();
};
