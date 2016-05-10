#pragma once
class BytesDataOutput{
	public:
		void writeByte(char);
		void writeDouble(double);
		void writeFloat(float);
		void writeInt(int);
		void writeLongLong(long long);
		void writeShort(short);
		void writeString(std::string const&);
		void ~BytesDataOutput();
		void ~BytesDataOutput();
};
