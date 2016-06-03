#pragma once
class BaseRailTransporter{
	public:
		void addSource(CircuitSceneGraph &,CircuitTrackingInfo const&,int &,bool &);
		void addSource(CircuitSceneGraph &,CircuitTrackingInfo const&,int &,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void allowConnection(CircuitSceneGraph &,CircuitTrackingInfo const&,bool &);
		void evaluate(CircuitSystem &,BlockPos const&);
		void evaluate(CircuitSystem &,BlockPos const&);
		void getBaseType(void);
		void getBaseType(void);
		void getInstanceType(void);
		void getInstanceType(void);
		void ~BaseRailTransporter();
		void ~BaseRailTransporter();
};
