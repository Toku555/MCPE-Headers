#pragma once
class Layer{
	public:
		Layer(uint);
		void _isOcean(int);
		void _isSame(int,int);
		void _modeOrRandom(int,int,int,int);
		void _random(int *,int);
		void getDefaultLayers(long long,std::shared_ptr<Layer> &,std::shared_ptr<Layer> &,GeneratorType);
		void init(long long);
		void initRandom(long long,long long);
		void nextRandom(int);
		void ~Layer();
		void ~Layer();
};
