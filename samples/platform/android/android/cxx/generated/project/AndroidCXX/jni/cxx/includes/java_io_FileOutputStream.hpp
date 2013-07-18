/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		

// Generated Code 

#ifndef _java_io_FileOutputStream
#define _java_io_FileOutputStream
//
// Scroll Down 
//







#include <java_io_FileDescriptor.hpp>

#include <java_nio_channels_FileChannel.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_io_FileDescriptor;

class java_nio_channels_FileChannel;

class java_io_FileOutputStream
{
public:
 void write(std::vector<char>& arg0,int& arg1);
 void close();
 java_io_FileDescriptor getFD();
 java_nio_channels_FileChannel getChannel();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_FileOutputStream