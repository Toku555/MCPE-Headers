#pragma once
class GLBufferPool{
	public:
		void get(void);
		void release(uint);
		void trim(void);
		void ~GLBufferPool();
};
