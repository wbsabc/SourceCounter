#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "03";
	static const char MONTH[] = "03";
	static const char YEAR[] = "2009";
	static const double UBUNTU_VERSION_STYLE = 9.03;
	
	//Software Status
	static const char STATUS[] = "Release";
	static const char STATUS_SHORT[] = "r";
	
	//Standard Version Type
	static const long MAJOR = 1;
	static const long MINOR = 2;
	static const long BUILD = 26;
	static const long REVISION = 44;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT = 645;
	#define RC_FILEVERSION 1,2,26,44
	#define RC_FILEVERSION_STRING "1, 2, 26, 44\0"
	static const char FULLVERSION_STRING[] = "1.2.26.44";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY = 79;
	

}
#endif //VERSION_H
