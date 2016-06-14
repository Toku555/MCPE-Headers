#pragma once
class TouchControlSet{
	public:
		TouchControlSet(void);
		TouchControlSet(void);
		void addGlyphButton(BindingFactory const&,NameRegistry &,TouchGlyphButtonBinding const&);
		void addGlyphButton(BindingFactory const&,NameRegistry &,TouchGlyphButtonBinding const&);
		void addGuiPassthrough(BindingFactory const&,NameRegistry &,std::string const&,std::string const&);
		void addGuiPassthrough(BindingFactory const&,NameRegistry &,std::string const&,std::string const&);
		void addPointer(int,TouchState,float,float,bool);
		void addPointer(int,TouchState,float,float,bool);
		void addTextButton(BindingFactory const&,NameRegistry &,TouchTextButtonBinding const&);
		void addTextButton(BindingFactory const&,NameRegistry &,TouchTextButtonBinding const&);
		void addTurnInteract(BindingFactory const&,NameRegistry &,TouchTurnInteractBinding const&);
		void addTurnInteract(BindingFactory const&,NameRegistry &,TouchTurnInteractBinding const&);
		void clearControls(InputEventQueue &);
		void clearControls(InputEventQueue &);
		void clearPointers(void);
		void clearPointers(void);
		void getPermanentlyHandledTouchIds(std::vector<int,std::allocator<int>> &);
		void getPermanentlyHandledTouchIds(std::vector<int,std::allocator<int>> &);
		void isTurnInteractActive(void);
		void isTurnInteractActive(void);
		void render(InputRenderContext &);
		void render(InputRenderContext &);
		void setWindowSize(int,int);
		void setWindowSize(int,int);
		void tick(InputEventQueue &,int);
		void tick(InputEventQueue &,int);
		void ~TouchControlSet();
		void ~TouchControlSet();
};
