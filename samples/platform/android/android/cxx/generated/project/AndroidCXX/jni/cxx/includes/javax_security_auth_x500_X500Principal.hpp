/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
		

// Generated Code 

#ifndef _javax_security_auth_x500_X500Principal
#define _javax_security_auth_x500_X500Principal
//
// Scroll Down 
//








#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_util_Map.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_util_Map;

class javax_security_auth_x500_X500Principal
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 java_lang_String getName(java_lang_String& arg0,java_util_Map& arg1);
 std::vector<char> getEncoded();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _javax_security_auth_x500_X500Principal