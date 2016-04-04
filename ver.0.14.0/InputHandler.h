#pragma once
class InputHandler{
	public:
		InputHandler(BindingFactory &,InputMappingFactory &);
		void _handleMappingChange(InputMapping *,InputMapping *);
		void clearInputDeviceQueues(void);
		void getButtonRegistry(void);
		void getCurrentInputMode(void);
		void getCursorPos(float &,float &);
		void getInputMappingStackSize(void);
		void handleButtonEvent(ButtonEventData const&);
		void handleCaretLocationEvent(CaretLocationData const&);
		void handleDirectionEvent(DirectionEventData const&);
		void handleInputModeChange(InputMode);
		void handlePointerLocationEvent(PointerLocationEventData const&);
		void handleTextCharEvent(TextCharEventData const&);
		void handleVectorEvent(VectorEventData const&);
		void popInputMapping(void);
		void pushInputMapping(std::string const&);
		void refreshInputMapping(void);
		void function<void ();
		void function<void ();
		void function<void ();
		void function<void ();
		void function<void ();
		void function<void ();
		void render(InputRenderContext &);
		void setSuspendInput(bool);
		void setWindowSize(int,int);
		void updateInputMapping(std::string const&);
		void ~InputHandler();
};
