#pragma once
class Random{
	public:
		Random(void);
		void genrand_int32(void);
		void init_genrand(ulong);
		void nextFloat(void);
		void nextGaussian(void);
		void setSeed(long);
};
