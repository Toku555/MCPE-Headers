#pragma once
class MatrixStack{
	public:
		MatrixStack(void);
		void Ref(MatrixStack&,Matrix &);
		void Ref(MatrixStack::Ref&&);
		void Ref(void);
		void _move(MatrixStack::Ref&);
		void operator*(void);
		void operator=(Matrix const&);
		void operator=(MatrixStack::Ref&&);
		void release(void);
		void ~Ref();
		void _push(void);
		void _pushIdentity(void);
		void empty(void);
		void getTop(void);
		void isDirty(void);
		void makeClean(void);
		void pop(void);
		void push(void);
		void pushIdentity(void);
		void size(void);
		void top(void);
		void ~MatrixStack();
};
