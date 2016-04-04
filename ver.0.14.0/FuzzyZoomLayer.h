#pragma once
class FuzzyZoomLayer{
	public:
		FuzzyZoomLayer(uint,std::shared_ptr<Layer> &);
		void _modeOrRandom(int,int,int,int);
		void zoom(uint,std::shared_ptr<Layer> &,int);
		void ~FuzzyZoomLayer();
		void ~FuzzyZoomLayer();
};
