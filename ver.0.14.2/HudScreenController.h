#pragma once
class HudScreenController{
	public:
		void _broadcastContainerChanges(void);
		void _canRebind(void);
		void _canReceiveInput(void);
		void _checkValidSlot(int);
		void _cubeSmoothStep(float,float,float);
		void _getCollectionIndex(PropertyBag *);
		void _getCurrentSlot(void);
		void _getTotalSlots(void);
		void _handleSlotSelection(int);
		void _isGuiHidden(void);
		void _isStillValid(void);
		void _refreshHotbar(void);
		void _resetHeldButton(void);
		void _selectSlot(int);
		void _setHeldButton(void);
		void _updateInputDelayTimer(void);
		void bind(std::string const&,uint,int,std::string const&,uint,std::string const&,PropertyBag &);
		void bind(std::string const&,uint,std::string const&,PropertyBag &);
		void handleGameEventNotification(ui::GameEventNotification);
		void onOpen(void);
		void tick(void);
		void ~HudScreenController();
		void ~HudScreenController();
};
