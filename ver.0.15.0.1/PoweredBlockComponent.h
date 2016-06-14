#pragma once
class PoweredBlockComponent{
	public:
		PoweredBlockComponent(uchar);
		PoweredBlockComponent(uchar);
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
		void hasChildrenSource(void);
		void hasChildrenSource(void);
		void ~PoweredBlockComponent();
		void ~PoweredBlockComponent();
};
