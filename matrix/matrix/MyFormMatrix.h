#pragma once
#include <list>
using namespace System;
using namespace System::Collections::Generic;
namespace matrix {
	public ref class Mark {
	public:
		System::String^ name;
		System::String^ theam;
		int serias;
		System::String^ country;
		System::String^ Pecul;
		DateTime dateIn;
		int tirazh;
		DateTime dateBuy;
		int price;
	};
	public ref class Ñollection {
	public:
		System::String^ name;
		System::String^ Famele;
		System::String^ surname;
		System::String^ dateActive;
		int countCopy;
	};

	public ref class Collector {
	public:
		System::String^ country;
		System::String^ name;
		System::String^ Famele;
		System::String^ surname;
		System::String^ contact;
		bool having;
		List<String^>^ marksOfCollectors;
		Collector() {
			marksOfCollectors = gcnew List<String^>();
		}
	};
}
