/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	

// Generated Code 

#ifndef _java_nio_charset_CoderResult
#define _java_nio_charset_CoderResult
//
// Scroll Down 
//













#include <java_lang_String.hpp>


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

class java_lang_String;

class java_nio_charset_CoderResult;

class java_nio_charset_CoderResult
{
public:
	java_nio_charset_CoderResult(const java_nio_charset_CoderResult& cc);
	java_nio_charset_CoderResult(void * proxy);
	virtual ~java_nio_charset_CoderResult();
	 java_lang_String *  toString();
	 int length();
	 void throwException();
	 bool isUnderflow();
	 bool isError();
	 bool isOverflow();
	static java_nio_charset_CoderResult *  malformedForLength(int& arg0);
	 bool isMalformed();
	 bool isUnmappable();
	static java_nio_charset_CoderResult *  unmappableForLength(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_charset_CoderResult