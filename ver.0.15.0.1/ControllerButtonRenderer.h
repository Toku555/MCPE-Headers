#pragma once
class ControllerButtonRenderer{
	public:
		ControllerButtonRenderer(MinecraftClient &);
		ControllerButtonRenderer(MinecraftClient &);
		void _getButtonColor(ControllerButtonRenderer::ButtonIcon);
		void renderControllerButtonA(void);
		void renderControllerButtonA(void);
		void renderControllerButtonB(int);
		void renderControllerButtonB(int);
		void renderControllerButtonX(void);
		void renderControllerButtonX(void);
		void renderControllerButtonY(void);
		void renderControllerButtonY(void);
		void renderControllerButtons(int,int,ControllerButtonRenderer::ButtonIcon,std::string const&);
		void renderControllerButtons(int,int,ControllerButtonRenderer::ButtonIcon,std::string const&);
		void renderDPadIcon(int,int,std::string const&);
		void renderInventoryCursor(int,int,bool);
		void renderInventoryCursor(int,int,bool);
		void renderJoystick(int,int,std::string const&);
		void renderJoystick(int,int,std::string const&);
		void renderStandardBottomLeftABButtons(void);
		void renderStandardControllerButtons(void);
		void renderTriggerButton(int,int,ControllerButtonRenderer::ButtonIcon,std::string const&);
		void retrieveCoordinatesForIcon(ControllerButtonRenderer::ButtonIcon,ControllerButtonCoordinates &);
		void retrieveCoordinatesForIcon(ControllerButtonRenderer::ButtonIcon,ControllerButtonCoordinates &);
		void ~ControllerButtonRenderer();
		void ~ControllerButtonRenderer();
		void ~ControllerButtonRenderer();
		void ~ControllerButtonRenderer();
};
