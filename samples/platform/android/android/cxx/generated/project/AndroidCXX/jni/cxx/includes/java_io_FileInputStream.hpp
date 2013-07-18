/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		


#ifndef _java_io_FileInputStream
#define _java_io_FileInputStream








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

class java_io_FileInputStream
{
public:
 void close();
 int read(std::vector<char>& arg0,int& arg1);
 long skip(long& arg0);
 int available();
 java_io_FileDescriptor getFD();
 java_nio_channels_FileChannel getChannel();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_FileInputStream